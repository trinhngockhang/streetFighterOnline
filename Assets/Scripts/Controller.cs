using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SocketIO;
using System.Text.RegularExpressions;
using UnityEngine.UI;
public class Controller : MonoBehaviour
{
    public GameObject Map;
    public BackGround bg;
    public LoginPanelController loginPanel;
    public JoyStickController joyStick;
    public SocketIOComponent socket;
    public Text textNamePlayer1;
    public Text textNamePlayer2;
    public HealthBar HealthBar1;
    public HealthBar HealthBar2;
    public CameraCotroller camera;
    public Player playGameobjFirst;
    public Player playGameobjSecond;
    public Player playerCom;
    public Player otherPlayCom;
    public bool firstPlayerinRoom;
    public GameObject Player2;
    public string namePlayer;
    public string myId;
    public string idPlayer2;
    public static Controller instance;
    public bool gaming = false;
    Vector2 spawnPositionFirst = new Vector2(-5, -2.65f);
    Vector2 spawnPositionSecond = new Vector2(5, -2.65f);
    Vector2 temp;
    void Start()
    {
        StartCoroutine(ConnectServer());
        socket.On("USER_CONNECTED", OnUserConnected);
        socket.On("PLAY", OnUserPlay);
        _makeInstance();
        socket.On("UPDATEPOSITION", onUserMove);
        socket.On("PERMISMOVE", permisMove);
        socket.On("PERMIS_H_PUNCH", permisHPunch);
        socket.On("PERMIS_KICK", permisKick);
        socket.On("PERMIS_JUMP", permisJump);
        socket.On("PERMIS_BLOCK", permisBlock);
        socket.On("PERMIS_IDLE", permisIdle);
        socket.On("PERMIS_ATTACK", permisAttack);
        socket.On("OTHERPLAYERCHANGEVELOCITY", onUserChange);
        socket.On("GETID", getMyId);
        socket.On("USER_DISCONNECTED", OnUserDisConnected);
        socket.On("OTHERPLAYER_H_PUNCH", otherPlayerPunch);
        socket.On("OTHERPLAYER_KICK", otherPlayerKick);
        socket.On("OTHERPLAYER_ATTACK", otherPlayerAttack);
        socket.On("OTHERPLAYER_JUMP",otherPlayerJump);
        socket.On("OTHERPLAYER_BLOCK", otherPlayerBlock);
        socket.On("OTHERPLAYER_IDLE", otherPlayerIdle);
        socket.On("OTHERPLAYER_DOWN", otherPlayerDown);
        socket.On("OTHERPLAYER_UP", otherPlayerUp);
        
        // joyStick.gameObject.SetActive(false);
        loginPanel.playBtn.onClick.AddListener(OnClickPlayBtn);
        // joyStick.onCommanMove += OnCommandMove;
    }
    void _makeInstance()
    {
        if(instance == null)
        {
            instance = this;
        }
    }
    void getMyId(SocketIOEvent obj)
    {
        //Debug.Log(obj);
        string s = obj.data.GetField("id").ToString();
        myId = s;
        //Debug.Log("id tu server nay: " + s);
    }
    public void ChangeVelocity(string direct){
        //Debug.Log("doi van toc len server");
        Dictionary<string, string> data = new Dictionary<string, string>();
        data["direction"] = direct;
        data["id"] = idPlayer2;
        data["id"] = data["id"].Remove(0, 1);
        data["id"] = data["id"].Remove(data["id"].Length - 1, 1);
        socket.Emit("CHANGEVELOCITY", new JSONObject(data));
    }
    public void permisMove(SocketIOEvent obj){
        string direct = obj.data.GetField("direction").ToString();
        //Debug.Log("Duoc phep di chuyen:" + direct);
        direct = direct.Remove(0, 1);
        direct = direct.Remove(direct.Length - 1, 1);
        if (direct == "left")
        {
            //Debug.Log("di chuyen sang trai");
            playerCom.moveBack();
        }
        else
        {
            playerCom.moveFoward();
        }
    }
    public void permisHPunch(SocketIOEvent obj)
    {
        playerCom.animationPunch();
    }
    public void permisKick(SocketIOEvent obj)
    {
        playerCom.animationKick();
        Debug.Log("KICK KICK KICK");
    }
    public void permisAttack(SocketIOEvent obj)
    {
        Debug.Log("DANH thang kia");
        Player.instance.playerTest = otherPlayCom;
        Player.instance.playerTest.hit();
        //Debug.Log("Server dang xu ly tren Player: " + Player.instance.playerTest);
        //Debug.Log("Hai player la: " + playerCom + " " + otherPlayCom) ;
    }
    public void permisJump(SocketIOEvent obj)
    {
        playerCom.animationJump();
    }
    public void permisBlock(SocketIOEvent obj)
    {
        playerCom.animationBlock();
    }

    public void permisIdle(SocketIOEvent obj)
    {
        playerCom.animationIdle();
    }

    public void OnCommandMove(Vector2 vec2,int angle)
    {
        Dictionary<string, string> data = new Dictionary<string, string>();
        Vector2 position = new Vector2(vec2.x, vec2.y);
        data["position"] = position.x + "," + position.y;
        data["angle"] = angle.ToString();
        data["id"] = idPlayer2;
        data["id"] = data["id"].Remove(0, 1);
        data["id"] = data["id"].Remove(data["id"].Length - 1, 1);
        socket.Emit("UPDATEPOSITION", new JSONObject(data));
    }

    void onUserMove(SocketIOEvent obj)
    {
        // Debug.Log("Position enemy: " + JsontoVector2(JsonToString(obj.data.GetField("position").ToString(), "\"")));
     //   GameObject player = GameObject.Find(JsonToString(obj.data.GetField("name").ToString(), "\" ")) as GameObject;
        //player.transform.position = JsontoVector2(JsonToString(obj.data.GetField("position").ToString(), "\""));
        
        Player2.transform.position = JsontoVector2(JsonToString(obj.data.GetField("position").ToString(), "\""));
        string s = obj.data.GetField("angle").ToString();
        s = s.Remove(0, 1);
        s = s.Remove(s.Length - 1, 1);
        int n = int.Parse(s);
        // otherPlayCom.direct = n;
        // Debug.Log("s ne: " + s.Length);
        otherPlayCom.stopMove();
        // Player2.transform.eulerAngles = new Vector3(0, n, 0);
        // Debug.Log("name move: "+ obj.data.GetField("name").ToString());
    }
    void onUserChange(SocketIOEvent obj){
        //Debug.Log("Thay doi van toc thanh: " + obj);
        string direct = obj.data.GetField("direction").ToString();
        //Debug.Log("phia nhan duoc la" + direct);
        direct = direct.Remove(0, 1);
        direct = direct.Remove(direct.Length - 1, 1);
        if (direct == "left"){
            //Debug.Log("di chuyen sang trai");
            otherPlayCom.moveBack();
        }else{
            otherPlayCom.moveFoward();
        }
    }
    void OnClickPlayBtn()
    {
        if(loginPanel.inputField.text != "")
        {
            //Debug.Log("da nhan button");
            Dictionary<string, string> data = new Dictionary<string, string>();
            data["name"] = loginPanel.inputField.text;
            namePlayer = loginPanel.inputField.text;
            data["gaming"] = gaming.ToString();
            socket.Emit("GETUSER", new JSONObject(data));
            socket.On("LISTWAITING", OnlineUserController.instance.getListWaiting);
        }
        else
        {
            loginPanel.inputField.text = "Please enter your name again";
        }
    }

    string JsonToString(string target,string s)
    {
        string[] newString = Regex.Split(target, s);
        return newString[1];
    }

    Vector2 JsontoVector2(string target)
    {
        Vector2 newVector;
        string[] newString = Regex.Split(target, ",");
        newVector = new Vector2(float.Parse(newString[0]), float.Parse(newString[1]));
        return newVector;
    }

    void OnUserDisConnected(SocketIOEvent obj)
    {
        Destroy(GameObject.Find(JsonToString(obj.data.GetField("name").ToString(), "\"")));
    }

    private void otherPlayerPunch(SocketIOEvent obj)
    {
        otherPlayCom.animationPunch();
    }

    private void otherPlayerKick(SocketIOEvent obj)
    {
        otherPlayCom.animationKick();
    }
    private void otherPlayerAttack(SocketIOEvent obj)
    {
        Debug.Log("BI DANH");
        Player.instance.playerTest = playerCom;
        Player.instance.playerTest.hit();
    }
    private void otherPlayerJump(SocketIOEvent obj)
    {
        otherPlayCom.animationJump();
    }
    private void otherPlayerBlock(SocketIOEvent obj)
    {
        otherPlayCom.animationBlock();
    }
    private void otherPlayerIdle(SocketIOEvent obj)
    {
        otherPlayCom.animationIdle();
    }

    private void OnUserConnected(SocketIOEvent evt)
    {
        GameObject otherPlayer;
        if (firstPlayerinRoom)
        {
            temp = spawnPositionSecond;
            otherPlayer = GameObject.Instantiate(playGameobjSecond.gameObject, temp, Quaternion.Euler(0, 180, 0)) as GameObject;
        }
        else
        {
            temp = spawnPositionFirst;
            otherPlayer = GameObject.Instantiate(playGameobjFirst.gameObject, temp, Quaternion.identity) as GameObject;
        }
        //Debug.Log("GEt the message server: " + evt + "user connected") ;

        otherPlayCom = otherPlayer.GetComponent<Player>();
        otherPlayCom.playerName = JsonToString(evt.data.GetField("name").ToString(), "\"");
        //  otherPlayer.transform.position = JsontoVector2(JsonToString(evt.data.GetField("position").ToString(), "\""));
        // otherPlayCom.id = JsonToString(evt.data.GetField("id").ToString(), "\"");
        otherPlayCom.setName(!firstPlayerinRoom, textNamePlayer1, textNamePlayer2,HealthBar1,HealthBar2);
        Player2 = otherPlayer;
        //Debug.Log("position Player2 : " + Player2.transform.position);

    }
    private void OnUserPlay(SocketIOEvent evt)
    {
        Dictionary<string, string> data = new Dictionary<string, string>();
        GameObject player;
        data["gaming"] = "true";
        socket.Emit("CHANGESTATUS",new JSONObject(data));
        if (!firstPlayerinRoom)
        {
            temp = spawnPositionSecond;
            player = GameObject.Instantiate(playGameobjSecond.gameObject, temp, Quaternion.Euler(0, 180, 0)) as GameObject;
        }
        else
        {
            temp = spawnPositionFirst;
            player = GameObject.Instantiate(playGameobjFirst.gameObject, temp, Quaternion.identity) as GameObject;
        }
        //Debug.Log("GEt the message server: " + evt + "userplay");
        Map.gameObject.SetActive(true);
        bg.gameObject.SetActive(false);
        loginPanel.gameObject.SetActive(false);
        //Debug.Log("chuan bi active joystick");
        joyStick.gameObject.SetActive(true);
        joyStick.ActionJoystick();
        playerCom = player.GetComponent<Player>();
        playerCom.playerName = JsonToString(evt.data.GetField("name").ToString(), "\"");
        // playerCom.setName();
        joyStick.player = playerCom;
        playerCom.setName(firstPlayerinRoom, textNamePlayer1, textNamePlayer2, HealthBar1, HealthBar2);
    }
    public void h_punch()
    {
        Dictionary<string, string> data = new Dictionary<string, string>();
        data["enemyid"] = idPlayer2;
        data["enemyid"] = data["enemyid"].Remove(0, 1);
        data["enemyid"] = data["enemyid"].Remove(data["enemyid"].Length - 1, 1);
        socket.Emit("PLAYER_H_PUNCH", new JSONObject(data));
    }
    public void kick()
    {
        Dictionary<string, string> data = new Dictionary<string, string>();
        data["enemyid"] = idPlayer2;
        data["enemyid"] = data["enemyid"].Remove(0, 1);
        data["enemyid"] = data["enemyid"].Remove(data["enemyid"].Length - 1, 1);
        socket.Emit("PLAYER_KICK", new JSONObject(data));
    }
    public void attack()
    {
        Dictionary<string, string> data = new Dictionary<string, string>();
        data["enemyid"] = idPlayer2;
        data["enemyid"] = data["enemyid"].Remove(0, 1);
        data["enemyid"] = data["enemyid"].Remove(data["enemyid"].Length - 1, 1);
        socket.Emit("PLAYER_ATTACK", new JSONObject(data));
    }
    public void jump()
    {
        Dictionary<string, string> data = new Dictionary<string, string>();
        data["enemyid"] = idPlayer2;
        data["enemyid"] = data["enemyid"].Remove(0, 1);
        data["enemyid"] = data["enemyid"].Remove(data["enemyid"].Length - 1, 1);
        socket.Emit("PLAYER_JUMP", new JSONObject(data));
    }

    public void block()
    {
        Dictionary<string, string> data = new Dictionary<string, string>();
        data["enemyid"] = idPlayer2;
        data["enemyid"] = data["enemyid"].Remove(0, 1);
        data["enemyid"] = data["enemyid"].Remove(data["enemyid"].Length - 1, 1);
        socket.Emit("PLAYER_BLOCK", new JSONObject(data));
    }

    public void idle()
    {
        Dictionary<string, string> data = new Dictionary<string, string>();
        data["enemyid"] = idPlayer2;
        data["enemyid"] = data["enemyid"].Remove(0, 1);
        data["enemyid"] = data["enemyid"].Remove(data["enemyid"].Length - 1, 1);
        socket.Emit("PLAYER_IDLE", new JSONObject(data));
    }

    public void moveDown()
    {
        Dictionary<string, string> data = new Dictionary<string, string>();
        data["enemyid"] = idPlayer2;
        data["enemyid"] = data["enemyid"].Remove(0, 1);
        data["enemyid"] = data["enemyid"].Remove(data["enemyid"].Length - 1, 1);
        socket.Emit("PLAYER_DOWN", new JSONObject(data));
    }
    public void otherPlayerDown(SocketIOEvent obj)
    {
        otherPlayCom.moveDown();
    }
    public void otherPlayerUp(SocketIOEvent obj)
    {
        otherPlayCom.standUp();
    }
    public void moveUp()
    {
        Dictionary<string, string> data = new Dictionary<string, string>();
        data["enemyid"] = idPlayer2;
        data["enemyid"] = data["enemyid"].Remove(0, 1);
        data["enemyid"] = data["enemyid"].Remove(data["enemyid"].Length - 1, 1);
        socket.Emit("PLAYER_UP", new JSONObject(data));
    }
    IEnumerator ConnectServer()
    {
        yield return new WaitForSeconds(0.2f);
        socket.Emit("USER_CONNECT");
        yield return new WaitForSeconds(0.2f);
    }
}
