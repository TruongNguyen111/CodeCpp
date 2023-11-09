#include <iostream>
#include <vector>
#include <cmath>
#include <ctime> // thư viện random event
#include <iomanip> // sử dụng để làm chính xác số thập phân 

//typedef std::string text_t;
using text_t = std::string;
using number = int;

// create function with if function
void if_statement()
{
    int t ;
    bool temp = false;
    std::cout << "Enter your age :";
    std::cin >> t;
    
    if (t >= 18){
        std::cout << "Welcome to the site ...";
    }
    else if (t<0){
        std::cout << "You are in heaven";
    }
    else {
        std::cout << "You are too young";
    }
    // We can use && to express and , || to express or and ! is not 

    (!temp) ? std::cout << " nhiet do sai" : std::cout <<"nhiet do dung"; 
    

}
// switch : alternative to using many "else if
// add new comment
void switch_case()
{
    using namespace std;
    int month;
    cout << "Enter the month (1-12): ";
    cin >> month; 

    switch(month){
        case 1:
            cout << "It is January";
            break;
        case 2:
            cout << "It is February";
            break;
        case 3:
            cout << "It is March";
            break;
        case 4:
            cout << "It is April";
            break;
        case 5:
            cout << "It is May";
            break;
        case 6:
            cout << "It is June";
            break;
        case 7:
            cout << "It is July";
            break;
        case 8:
            cout << "It is August";
            break;
        case 9:
            cout << "It is September";
            break;
        case 10:
            cout << "It is October";
            break;
        case 11:
            cout << "It is November";
            break;
        case 12:
            cout << "It is December";
            break;
        default :
            cout << " Please ??";
    }
}
// Small project calculator 
void calculator ()
{   
    using namespace std;
    char op;
    double num1;
    double num2;
    double result ;

    cout << "************** CACULATOR **************" <<'\n';
    cout << "Enter OP (+ - * /)"<< '\n';
    cin >> op ;

    cout << "Enter num1: "<< '\n';
    cin >> num1 ;

    cout << "Enter num2:"<< '\n';
    cin >> num2 ;

    switch(op){
        case '+':
            result = num1 + num2;
            cout << "The result is : " << result <<'\n';
            break;
        case '-':
            result = num1 - num2;
            cout << "The result is : " << result <<'\n';
            break;
        case '*':
            result = num1 * num2;
            cout << "The result is : " << result <<'\n';
            break;
        case '/':
            result = num1 / num2;
            cout << "The result is : " << result <<'\n';
            break;
        default :
            cout << "Really ?? " <<'\n';
    }
    cout << "***************************************";
}
void ternary_op()
{
    using namespace std;
    // condition ? expression1 : expression2 ;
    int a = 9;
    a % 2 == 1 ? cout << "ODD" : cout << "EVEN";

}
void basic_c()
{
     using namespace std;
    
    //int x=0;
    number a =20;
    a*=2;
    text_t Name = "Truong";
    cout<< Name<<'\n';
    //cout<<"Chiu";
    //cout<<a;

    /*
    number remainder = a %2;
    cout<< remainder ;
    double x = (int) 3.14;
    cout << x;
    char x = 100;
    cout << (char) 100 ; */
    
    /* type conversion
    number d = 10;
    number b=8;
    double c = (double)b/d *100;
    cout << c <<'%'; */

    // user input
    int age ;
    std::string name;
    std::cout <<"What's your age ? ";
    std::cin >> age ; 
    std::cout << "What's your name ? ";
    //std::cin >> name ;
    std::getline(std::cin >> std::ws/*remove \n and white space*/, name);
    std::cout << "Hello "<< name << '\n';
    std::cout << "You are "<< age << '\n' ;
    /* hàm về tên : name.length()
    name.empty :hàm này dùng để xem có kí tự trống k
    name.clear :hàm clear string
    name.append : thêm kí tự ở đuôi vd: name.append("@gmail.com");
    name.at(index) : Hiển thị kí tự mong muốn trong một chuỗi
    name.insert(index,"charater want to insert") 
    name.find('...')
    name.erase(begin index,end index)
    */


    /* if we have cin with getline behind there will be issue 
    when we take input we will have \n after so it will be wrong*/
    
    // math calculation syxtax
    // max = std::max(x,y);
    // min = std::min(x,y);
    //z = pow(2,4); 2 mũ 4
    //z = sqrt (9);
    //z = abs(-3);
    //z = round(value);
    //z = ceil(x); làm tròn lên 
    //z = floor(x); làm tròn xuống
    //if_statement();
    if_statement();
}
void cal_machine(){
    using namespace std;
    double temp;
    char unit;

    cout << "***********Temperature conversion********\n";
    cout << "What unit would you like to  convert to :";
    cin >> unit;

    // We have the formula F = 9/5 C +32
    if (unit == 'f' || unit == 'F')
    {
        cout << "Please enter the temperature in C\n";
        cin >> temp;
        temp = 1.8 * temp + 32.0 ; 
        cout << "Temperature is : " << temp << '\n';
    }
    else if (unit == 'c' || unit == 'C')
    {
        cout << "Please enter the temperature in F\n";
        cin >> temp;
        temp = (double)5/9 * (temp - 32.0) ; 
        cout << "Temperature is : " << temp <<" C\n";
    }
    else 
    {
         cout << "You enter wrong unit !!!!\n";
    }
        
    cout << "*****************************************\n";


}
void while_loop()
{
    using namespace std;
    string name;
    while (name.empty())
    {
        cout  << "Enter your name :";
        getline(cin ,name);
    }
    cout << "Hello " << name;


}
void w_loop()
{
    using namespace std;
    int temp;

/*  while()
{
    tasks or block of code will be executed
}*/
    do{
    cout << "Vui long nhap so cua m zo thang ngu :" <<'\n';
    cin >> temp; 
    }while(temp<0);
    cout << " So cua m la : " << temp;
}
void f_loop()
{
    int i;
    std::cout << "Enter the times to get over this year: ";
    std::cin >> i;
    for (i; i <= 10; i++){
        std::cout << i << '\n';
        // break; to get out the loop
        // continue; skip current iteration : bỏ qua lần lặp hiện tại
    }
    std::cout << "Happy new year!!\n";
}
void nest_l(){ //thằng ở trong chạy xong tới điều kiện ngoài chạy mà điều kiện ngoài chạy thì thằng ở trong chạy tiếp

    for (int i = 1; i <= 3; i++){
        for (int j = 1; j <= 10; j++){
            std::cout << j << ' ';
        
        }
        std::cout << "\n";
    }
}

void  point()
{
    using namespace std;

    int var = 10;
    int *ptr ;
    ptr = &var;
//  int *ptr = &var;
    cout << var <<'\n';
    cout << *ptr;

}

void ptr_array()
{
    int val[4] = { 3, 5, 100, 1 };
    int*ptr;
    // assign the adress of val[0] to ptr
    ptr = val;
    std::cout << "Elements of the array are : "<< '\n';
    std::cout << ptr[0] << ptr[1] <<ptr[2] ;


}
void inline_f(){
    //inline int cube (int s) {return s * s * s; }
}

void rnum()
{
    srand(time(NULL));

    int num = (rand() % 20) +1; // 20 là số random trong khoảng

    std::cout << num;

}
void revent()
{
    srand(time(0)) ;// using time current

    int randNum = (rand() % 5) + 1;

    switch(randNum)
    {
        case 1: std::cout << "You win something ";
            break;
        case 2: std::cout << "i ";
            break;
        case 3: std::cout << "h ";
            break;
        case 4: std::cout << "h ";
            break;
        case 5: std::cout << "g ";
            break;
    }
    
}

void guessgame(/*can use parameters here with data type*/)
{
    int num;
    int guess;
    int tries;


    srand(time(NULL));

    num = (rand() % 100) +1;

    std::cout << "************GUESSING_GAM**********\n";
    
    
    do{
        std::cout << "Enter the guess number from 1-100 :";
        std::cin >> guess; 
        tries++;

        if (guess > num)
        {
            std::cout << "Too high";
        }
        else if (guess < num)
        {
            std::cout << "Too low";
        }
        else {
            std::cout << "CORRECT! # OF TRIES " << tries << '\n';
        }

    }while(guess != num);

    std::cout << "**********************************";

}

/* Function with parameter 
double square (double length);
double square(double length)
{
    return length * length ;
}
 # Function can share same name but with different parameters
 or we can call overloaded function 
int main() 
{   
    double length = 5.0;
    double area = square(length);

    std::cout << "The area is : " << area;
    return 0;
}
*/
/* Global and local variable
    For global variables we can use it at any place but if
    in the function we have the same variable name with different
    value the function will use the variable in the function first
    - If we want to use the global we can 
    ex : std::cout << ::variable_name ;

*/

/* MEMORY LAYOUT OF C PROGRAM

        Stack

        Heap
        Uninitialiazed Data (BSS)
        Initialized Data (DS)
        Tex
*/
/* Banking acount
void showBalance(double balance);
double deposit();
double withdraw(double balance);
using namespace std;
int main() 
{   

    double balance = 400.01;
    int choice = 0;
    do {
        cout << "***************WELCOME OUR BANK*************\n";
        cout << "********************************************\n";
        cout << "Enter your choice\n";
        cout << "********************************************\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cin >> choice;
        std::cin.clear();
        fflush(stdin);
        switch(choice)
        {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance = balance + deposit();
                showBalance(balance);
                break;
            case 3:
                balance = balance - withdraw(balance);
                showBalance(balance);
                break;        
            case 4:
                cout << "Thanks for visiting!!!\n";
                break;
            default: cout << "That's not a valid choice\n";
        }
    }while(choice != 4);
    return 0;
}
void showBalance(double balance){
    cout << "Your balance is : " << setprecision(3) << fixed << balance <<'\n';
}
double deposit(){
    double amount = 0;
    cout << "Enter the amount of money : ";
    cin >> amount;
    if (amount > 0)
    {
        return amount;
    }
    else 
    {
        cout << "That's wrong number...\n";
        return 0;
    }
}
double withdraw(double balance){
    double amount = 0;
    cout << "Enter amount to be withdrawn :";
    cin >> amount;

    if (amount > balance)
    {
        cout << "Insufficent funds\n";
        return 0;
    }
    else
    {
        return amount;
    }
}
*/
/* Clear input Buffer
    A temporary storage area is called a buffer. 
    All standard input and output devices contain an input and output buffer. 
    In standard C/C++, streams are buffered. 
    For example, in the case of standard input, when we press the key on the keyboard, it isn’t sent to your program, 
    instead of that, it is sent to the buffer by the operating system, 
    till the time is allotted to that program.
*/
/*  Rock Paper and Scissors Game


char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);
int main() 
{   
    char player;
    char computer;

    player = getUserChoice();
    
    std::cout << "Lua chon cua ban la: ";
    showChoice(player);
    std::cout <<'\n';
    std::cout << "May tinh chon la: ";
    computer = getComputerChoice();
    showChoice(computer);
    std::cout <<'\n';
    chooseWinner(player, computer);

    return 0;
}
char getUserChoice(){
    char player;
    std::cout << "*****Welcome to the Rock Paper Scissors Game*****\n";
    
    do {
        std::cout << "Please choose one of the following\n";
        std::cout << "r for Rock\n";
        std::cout << "P for Paper\n";
        std::cout << "s for Scissors\n";
        std::cin >> player;
    }while(player != 's' && player != 'p' && player != 'r');
    return player;
}
char getComputerChoice(){
    char computer;
    int guess;
    srand(time(0));
    guess = (rand() % 3) + 1;
        switch(guess)
        {
            case 1:
                computer = 's';
                break;
            case 2:
                computer = 'r';
                break;
            case 3:
                computer = 'p';
                break;
        }
    return computer;
}
void showChoice(char choice){
    switch(choice){
        case 'r': std::cout << "Rock";
        break;
        case 'p': std::cout << "Paper";
        break;
        case 's': std::cout << "Scissor";
        break;
    }
}
void chooseWinner(char player, char computer){
    switch(player){
        case 'r':   if (computer == 'r'){
                        std::cout << "It a tie\n";     
                    }       
                    else if (computer == 'p'){
                        std::cout << "You lose\n"; 
                    }
                    else{
                        std::cout << "You win\n"; 
                    }
        break;
        case 'p':   if (computer == 'p'){
                        std::cout << "It a tie\n";     
                    }       
                    else if (computer == 'r'){
                        std::cout << "You win\n"; 
                    }
                    else{
                        std::cout << "You lose\n"; 
                    }
        break;
        case 's':   if (computer == 's'){
                        std::cout << "It a tie\n";     
                    }       
                    else if (computer == 'r'){
                        std::cout << "You lose\n"; 
                    }
                    else{
                        std::cout << "You win\n"; 
                    }
        break;
    }
}
*/
/*
void arr()
{
    std::string cars[] ={"Toyota", "Camry", "BWM"};
    cars[0] = "Camaro"; // change value inside the array
    std::cout << cars[0] <<'\n';
    std::cout << cars[1] <<'\n';
    std::cout << cars[2] <<'\n';
    // Another way to define an array
    std::string cars[];
    cars[0] = "Camaro";
    cars[1] = "Camaroghfh";
    cars[2] = "Camarghhjo";
}
*/
/*
We use sizeof() to determine the size in bytes of a : variables,...
sizeof(string) = 32 
sizeof(int) = 4
Ex : foreach loop = loop that eases the traversal over an iterable dataset
int main()
{   
    int grades[] = "60, 332, 212, 3";
    for(int grade : grades){
        std::cout << grade << '\n';
    }
}
Example:
int main()
{   std::string k[] = {"asd", "asdasd", "asdsad"};

    for(int i = 0; i < sizeof(k); i++)
    {
        std::cout << k[i] << '\n';
    }
    return 0;
}
*/
/*Search in the array
int searchArray(int array[], int size, int element);
int main()
{   
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int index;
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int myNum;

    std::cout << "Enter element to search for: " << '\n';
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);
    if(index != -1){
        std::cout << myNum << "is at index " << index;
    }
    else{
        std::cout << myNum << "is not in the array!!";
    }
    return 0;
}
int searchArray(int array[], int size, int element){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;            
        }
    }
    return -1;
}
*/
/* Vẽ hình chữ nhật theo dữ liệu nhập 
int main()
{   
    int n;
    std::cout << "Please enter the tall of rectangle : " <<'\n';
    std::cin >> n;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            std::cout << '*';
        }
    std::cout << '\n';
    }
    std::cout << "Here is your rectangle !!!" << '\n';
    return 0;
}
*/
/* Tam giác cạnh dài ở trên góc trái , nếu ở dưới góc phải thì dễ rồi j = i
int main()
{   
    int n;
    int a = 0;
    std::cout << "Please enter the tall of rectangle : " <<'\n';
    std::cin >> n;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++){
            std::cout << '*';
    
        }
    std::cout << '\n';
    }
    std::cout << "Here is your upside down triangle !!!" << '\n';
    return 0;
}
*/
/* Hình tam giác vuông cạnh dài góc dưới bên phải , nếu ngược lại thì j < i thì in dấu cách
int main()
{   
int n;
std::cout << "Please enter the tall of rectangle : " <<'\n';
std::cin >> n;
for (int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
        if(j <= (n - i) ){
            std::cout << ' ';
        }
        else {
            std::cout << '*';
        }
    }
std::cout << '\n';
}
std::cout << "Here is your left triangle !!!" << '\n';
return 0;
}

*/
/* Bubble sort
void sort(int array[], int size);
using namespace std;
int main()
{
    int array[] ={10, 6, 9, 1, 3, 5, 4, 2, 8, 7};
    int size = sizeof(array)/sizeof(array[0]);
    
    sort(array , size);

    for (int element : array)
    {
        cout << element <<" ";
    }

    return 0;
}
void sort(int array[], int size){
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++){
            if (array[j] > array[j + 1]){      // Muốn từ cao xuống thấp thì đổi dấu
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
*/
/* fill function
int main()
{
    // fill() = Fills a range of elements with a specified value fill
    // fill(begin, end, value)

    const int size = 50;
    std::string foods[size];


    fill(foods, foods + (size/2), "pizza");
    fill(foods + (size/2), foods + size, "hamburger");
    for(std::string food : foods){
        std::cout << food <<'\n';
    }
    return 0;
}
*/
/* Enter an input in a array 
int main()
{   // fill an array 
    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);

    for (int i = 0; i < size; i++){
        std::cout << "Enter a food you like # " << i << ": ";
        std::getline(std::cin,foods[i]); 
    }
    std::cout << "You like the following food:\n";
    for (int i = 0; !foods[i].empty(); i++){
        std::cout << food <<'\n';
    }
    return 0;
}
*/
/* Two dimension arrays
int main(){
    std::string cars[][3] = {{"asdfsdfd","sdsfsdf","sdfsdfd"},
                            {"ghf","ghff","ui"},
                            {"dfs","df","dfs"}};
    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            std::cout << cars[i][j] << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}
*/
int main(){
    std::string cars[][3] = {{"asdfsdfd","sdsfsdf","sdfsdfd"},
                            {"ghf","ghff","ui"},
                            {"dfs","df","dfs"}};
    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            std::cout << cars[i][j] << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}