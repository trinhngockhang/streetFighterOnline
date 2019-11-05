using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Player : MonoBehaviour {
    public Rigidbody myBody;
    // ten player 
    public string playerName;
    // vi tri
    public Vector2 position;
    // luong damge 1 hit
    int damge = 23;
    // id tu server 
    public string id;
    public int direct = 0; // director of tank,1234 up right down left
    // tap instance
    public static Player instance;
    // mau
    private float health = 100f;
    public float fireRate = 0.5F;
    private float nextFire = 0.0F;
    public bool enoughTime = true;
    // check trong 1 attack
    private bool attacked = false;
    private Text nameUser;
    // dieu khien animation
    Animator m_Animator;
    // nhin sang ben nao
    private bool rightLook;
    // thanh mau
    private HealthBar HealthImage;
    // la player ben nao
    private bool firstPlayer;
    // 1 dung,2 ngoi,3 nhay
    public int state = 1;
    public bool collisionEnter = false;

    public float playerY;
    private Collision otherPlayerCollision;

    private bool collisionPlayer = false;

    public void test() {
        Debug.Log("chay dc ne");
    }

    public void setName(bool first, Text textPlayer1, Text Player2, HealthBar HealthBar1, HealthBar HealthBar2)
    {
        Debug.Log("la ng dau toen : " + first);
        Debug.Log("ten la " + playerName);
        //firstPlayer = first;
        if (first)
        {
            Debug.Log("da vao first la ng dau tien");
            nameUser = textPlayer1;
            HealthImage = HealthBar1;
        }
        else
        {
            Debug.Log("da vao day deo phai ng dau ten");
            nameUser = Player2;
            HealthImage = HealthBar2;
        }
        nameUser.text = playerName;
        Debug.Log("ten la " + playerName);
    }

    public float getHealth()
    {
        return health;
    }

    private void Start()
    {
        playerY = myBody.position.y;
        firstPlayer = true;
        m_Animator = this.GetComponent<Animator>();
        this.name = playerName;
        _makeInstance();
    }

    void _makeInstance()
    {
        if (instance == null)
        {
            instance = this;
        }
    }
    // check xem dang danh nhau hay ko
    public bool checkAttacking()
    {
        if (m_Animator.GetCurrentAnimatorStateInfo(0).IsName("player_H_punch")
           || m_Animator.GetCurrentAnimatorStateInfo(0).IsName("player_M_punch")
           || m_Animator.GetCurrentAnimatorStateInfo(0).IsName("player_Kick"))
        {
            return true;
        }
        return false;
    }
    // sang trai
    public void moveBack() {
        velocityBack();
        if (state == 1) {
            m_Animator.ResetTrigger("player_idle");
            m_Animator.SetTrigger("player_move");
        }
    }
    // thay doi van toc de sang trai
    public void velocityBack() {
        Debug.Log("chay sang ben trai");
        myBody.velocity = new Vector2(-6f, 0);
        this.transform.eulerAngles = new Vector3(0, 180, 0);
        rightLook = false;
    }
    // thay doi van toc de sang phai
    public void velocityFoward() {
        myBody.velocity = new Vector2(6f, 0);
        this.transform.eulerAngles = new Vector3(0, 0, 0);
        rightLook = true;
    }
    // sang phai
    public void moveFoward() {
        velocityFoward();
        if (state == 1)
        {
            m_Animator.ResetTrigger("player_idle");
            m_Animator.SetTrigger("player_move");
        }
    }
    // ngoi xuong
    public void moveDown() {
        m_Animator.ResetTrigger("player_idle");
        m_Animator.SetTrigger("player_sit");
        state = 2;
    }

   
    // dung len
    public void standUp()
    {
        
        if (!this.checkAttacking())
        {
            this.animationStandup();
            // gui len server
            //Controller.instance.jump();
        }

        if (state == 2)
        {
            m_Animator.ResetTrigger("player_sit");
            m_Animator.SetTrigger("player_idle");
            state = 1;
        }
        else {
            //if (myBody.position.y < playerY)
            if (collisionEnter == true)
            {
                Debug.Log("Nhay len");
                myBody.AddForce(new Vector3(0, 5, 0) * 90);
                collisionEnter = false;
            }
        }
    }

    public void updatePositionToServer(int n){
        Controller.instance.OnCommandMove(this.transform.position, n);
    }

    public void stopMove(){
        if (!this.checkAttacking())
        {
            Debug.Log("set status");
            if(state == 1)
            m_Animator.SetTrigger("player_idle");
            else if(state == 2)
            m_Animator.SetTrigger("player_sit");
        }
        myBody.velocity = new Vector2(0, 0);
    }

    public void punch(){
        if (!this.checkAttacking())
        {
            // this.animationPunch();
            // gui len server
            Controller.instance.h_punch();
        }
    }
    public void kick()
    {
        if (!this.checkAttacking())
        {
            // this.animationKick();
            // gui len server
            Controller.instance.kick();
        }
    }

    public void jump()
    {
        if (!this.checkAttacking())
        {
            this.animationJump();
            // gui len server
            //Controller.instance.jump();
        }
    }

    public void animationPunch(){
        if (state == 1)
            m_Animator.Play("player_H_punch");
        else if (state == 2)
            m_Animator.Play("player_M_punch");
    }
    public void animationKick()
    {
        //if (state == 1)
        //    m_Animator.Play("player_H_punch");
        //else if (state == 2)
        //m_Animator.Play("player_M_punch");
        m_Animator.SetTrigger("player_kick");
    }
    public void animationJump()
    {
        //if (state == 1)
        //    m_Animator.Play("player_H_punch");
        //else if (state == 2)
        //m_Animator.Play("player_M_punch");
        m_Animator.SetTrigger("player_jumping");
    }

    public void animationStandup()
    {
        //if (state == 1)
        //    m_Animator.Play("player_H_punch");
        //else if (state == 2)
        //m_Animator.Play("player_M_punch");
        m_Animator.SetTrigger("player_jumping");
    }

    public void beFirebyNormalBulletEnemy()
    {      
    }

    public void FireNormalBullet()
    {
       
    }
    public void hit(){
        if (!m_Animator.GetCurrentAnimatorStateInfo(0).IsName("player_hit"))
        {
            m_Animator.Play("player_hit");
            this.health -= damge;
            HealthImage.transform.localScale = new Vector2(health / 100, 1);
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        
    }
    private void OnCollisionEnter(Collision collision)
    {
        if(collision.collider.tag == "Player"){
            collisionPlayer = true;
            otherPlayerCollision = collision;
            myBody.velocity = new Vector2(0, 0);
        }
        else if(collision.collider.tag == "Ground"){
            collisionEnter = true;
        }
        // myBody.velocity = new Vector2(0, 0);
        Debug.Log("bat dau cham");
    }
    private void OnCollisionExit(Collision collision)
    {
        if(collision.collider.tag == "Player"){
            collisionPlayer = false;
        }
        // myBody.velocity = new Vector2(0, 0);
        Debug.Log("het va cham");
    }

    private void playerColl(Collision collision){
        float positionPlayerX = this.transform.position.x;
        float positionEnemyX = collision.transform.position.x;
        Debug.Log("Danh trung r,dm");
        Debug.Log(positionEnemyX + " " + positionPlayerX + " " + attacked);
        // neu o ben phai va dang nhin sang phai
        if ((positionEnemyX > positionPlayerX && rightLook) || (positionEnemyX < positionPlayerX && !rightLook))
        {
            Player player2 = collision.gameObject.GetComponent<Player>();
            if ((m_Animator.GetCurrentAnimatorStateInfo(0).IsName("player_H_punch")
              || m_Animator.GetCurrentAnimatorStateInfo(0).IsName("player_M_punch"))
              && !attacked)
            {
                Debug.Log("dam trung r");
                player2.hit();
                attacked = true;
            }
        }
    }

    private void onCollisionStay(Collision collision)
    {
        float positionPlayerX = this.transform.position.x;
        float positionEnemyX = collision.transform.position.x;
        Debug.Log(positionEnemyX + " " + positionPlayerX + " " + attacked);
        // neu o ben phai va dang nhin sang phai
        if ((positionEnemyX > positionPlayerX && rightLook) || (positionEnemyX < positionPlayerX && !rightLook))
        {
            Player player2 = collision.gameObject.GetComponent<Player>();
            if ((m_Animator.GetCurrentAnimatorStateInfo(0).IsName("player_H_punch")
              || m_Animator.GetCurrentAnimatorStateInfo(0).IsName("player_M_punch")) 
              && !attacked)
            {
                Debug.Log("dam trung r");
                player2.hit();
                attacked = true;
            }
        }
    }

    private void Update()
    {   
        //Debug.Log("velocity:" + myBody.velocity);
        if (!checkAttacking()) attacked = false;
    }
    private void FixedUpdate()
    {
        if(collisionPlayer){
            playerColl(otherPlayerCollision);
        }
    }
}
