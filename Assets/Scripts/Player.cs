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
    public void test(){
        Debug.Log("chay dc ne");
    }

    public void setName(bool first,Text textPlayer1,Text Player2,HealthBar HealthBar1,HealthBar HealthBar2)
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
        firstPlayer = true;
        m_Animator = this.GetComponent<Animator>();
        this.name = playerName;
        _makeInstance();
    }

    void _makeInstance()
    {
        if(instance == null)
        {
            instance = this;
        }
    }
    // check xem dang danh nhau hay ko
    public bool checkAttacking()
    {
        if (m_Animator.GetCurrentAnimatorStateInfo(0).IsName("player_H_punch"))
        {
            return true;
        }
        return false;
    }
    public void moveBack(){
        myBody.velocity = new Vector2(-6f, 0);
        if(firstPlayer && rightLook)
        this.transform.eulerAngles = new Vector3(0, 180 , 0);
        m_Animator.SetTrigger("player_move");
        rightLook = false;
        updatePositionToServer(0);
    }

    public void moveFoward(){
        myBody.velocity = new Vector2(6f, 0);
        if (firstPlayer && !rightLook)
        this.transform.eulerAngles = new Vector3(0, 0, 0);
        rightLook = true;
        updatePositionToServer(180);  
    }
    public void updatePositionToServer(int n){
        Controller.instance.OnCommandMove(this.transform.position, n);
    }

    public void stopMove(){
        if (!this.checkAttacking())
        {
            m_Animator.Play("player_idle");
        }
        myBody.velocity = new Vector2(0, 0);
    }

    public void punch(){
        if (!this.checkAttacking())
        {
            this.animationPunch();
            Controller.instance.h_punch();
        }
    }
    public void animationPunch(){
        m_Animator.Play("player_H_punch");
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
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
            this.health -= 10;
            HealthImage.transform.localScale = new Vector2(health / 100, 1);
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        
    }
    private void OnTriggerStay(Collider collision)
    {
        float positionPlayerX = this.transform.position.x;
        float positionEnemyX = collision.transform.position.x;
        Debug.Log(positionEnemyX + " " + positionPlayerX + " " + attacked);
        // neu o ben phai va dang nhin sang phai
        if ((positionEnemyX > positionPlayerX && rightLook) || (positionEnemyX < positionPlayerX && !rightLook))
        {
            Player player2 = collision.gameObject.GetComponent<Player>();
            if (m_Animator.GetCurrentAnimatorStateInfo(0).IsName("player_H_punch") && !attacked)
            {
                player2.hit();
                attacked = true;
                Controller.instance.h_punch();
            }
        }
    }
    private void Update()
    {
        if (!checkAttacking()) attacked = false;
    }

}
