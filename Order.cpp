class Order{
private:
    char orderNO[10];
    char orderDate[10]; 

public: 
    Order(){
      strcpy(orderNo, "");
      strcpy(orderDate, "");
    }
    Order(char Onumber[], char Odate[]){
        strcpy(orderNo, Onumber);
        strcpy(orderDate, Odate);
    }
    void dispalyOrderDetais(){
        cout << "Order No : " << orderNo << endl;
        cout << "Order Date : " << orderDate << endl;
    }

};
