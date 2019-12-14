using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using SocketIO;

public class CharacterController : MonoBehaviour
{
    // Start is called before the first frame update
    public SocketIOComponent socket;

    public Image camy;
    public Image barog;
    public Image blanka;
    public Image guile;
    public Image ryu;
   
    public void clickKen(){
        selectCharacter("1");
        Debug.Log("Chon Ken");
    }
    public void clickBarog()
    {
        selectCharacter("2");
        Debug.Log("Chon barog" + Controller.instance.idPlayer2);
    }
    public void clickBlanka()
    {
        selectCharacter("3");
        Debug.Log("Chon blanka");
    }
    public void clickGuile()
    {
        selectCharacter("4");
        Debug.Log("Chon guile");
    }
    public void clickRyu()
    {
        selectCharacter("5");
        Debug.Log("Chon ryu");
    }
    public void clickChunLi()
    {
        selectCharacter("6");
        Debug.Log("Chon Chun-Li");
    }
    public void clickT()
    {
        selectCharacter("7");
        Debug.Log("Chon T");
    }
    public void selectCharacter(string n){
        Dictionary<string, string> data = new Dictionary<string, string>();
        data["gaming"] = "2";
        data["character"] = n;
        Debug.Log("ID player 2: " + Controller.instance.idPlayer2);
        data["id"] = Controller.instance.idPlayer2;
        data["id"] = data["id"].Remove(0, 1);
        data["id"] = data["id"].Remove(data["id"].Length - 1, 1);
        socket.Emit("WAITING", new JSONObject(data));
        Controller.instance.myCharacter = n;
        Controller.instance.moveToWaiting();
    }
}
