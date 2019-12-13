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
   
    public void clickCamy(){
        Dictionary<string, string> data = new Dictionary<string, string>();
        data["gaming"] = "2";
        Debug.Log("ID player 2: " + Controller.instance.idPlayer2);
        data["id"] = Controller.instance.idPlayer2;
        data["id"] = data["id"].Remove(0, 1);
        data["character"] = "1";
        data["id"] = data["id"].Remove(data["id"].Length - 1, 1);
        socket.Emit("WAITING", new JSONObject(data));
        Controller.instance.moveToWaiting();
        Controller.instance.myCharacter = "1";
        Debug.Log("Chon Camy");
    }
    public void clickBarog()
    {
        Dictionary<string, string> data = new Dictionary<string, string>();
        data["gaming"] = "2";
        Debug.Log("ID player 2: " + Controller.instance.idPlayer2);
        data["id"] = Controller.instance.idPlayer2;
        data["id"] = data["id"].Remove(0, 1);
        data["id"] = data["id"].Remove(data["id"].Length - 1, 1);
        data["character"] = "2";
        socket.Emit("WAITING", new JSONObject(data));
        Controller.instance.moveToWaiting();
        Controller.instance.myCharacter = "2";
        Debug.Log("Chon barog" + Controller.instance.idPlayer2);
    }
    public void clickBlanka()
    {
        Dictionary<string, string> data = new Dictionary<string, string>();
        data["gaming"] = "2";
        Debug.Log("ID player 2: " + Controller.instance.idPlayer2);
        data["id"] = Controller.instance.idPlayer2;
        data["character"] = "3";
        data["id"] = data["id"].Remove(0, 1);
        data["id"] = data["id"].Remove(data["id"].Length - 1, 1);
        socket.Emit("WAITING", new JSONObject(data));
        Controller.instance.myCharacter = "3";
        Controller.instance.moveToWaiting();
        Debug.Log("Chon blanka");
    }
    public void clickGuile()
    {
        Dictionary<string, string> data = new Dictionary<string, string>();
        data["gaming"] = "2";
        data["character"] = "4";
        Debug.Log("ID player 2: " + Controller.instance.idPlayer2);
        data["id"] = Controller.instance.idPlayer2;
        data["id"] = data["id"].Remove(0, 1);
        data["id"] = data["id"].Remove(data["id"].Length - 1, 1);
        socket.Emit("WAITING", new JSONObject(data));
        Controller.instance.myCharacter = "4";
        Controller.instance.moveToWaiting();
        Debug.Log("Chon guile");
    }
    public void clickRyu()
    {
        Dictionary<string, string> data = new Dictionary<string, string>();
        data["gaming"] = "2";
        data["character"] = "5";
        Debug.Log("ID player 2: " + Controller.instance.idPlayer2);
        data["id"] = Controller.instance.idPlayer2;
        data["id"] = data["id"].Remove(0, 1);
        data["id"] = data["id"].Remove(data["id"].Length - 1, 1);
        socket.Emit("WAITING", new JSONObject(data));
        Controller.instance.myCharacter = "5";
        Controller.instance.moveToWaiting();
        Debug.Log("Chon ryu");
    }
}
