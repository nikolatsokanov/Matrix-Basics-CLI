#include <iostream>
#include <random>
#include <string>
using namespace std;

int main() {

cout << "Enter sizes:" << endl;
int m,n;
cin>>m>>n;

if(m>5 || n>5){
cout<<"Wrong input!"<<endl;
return 0;}

int matrix [m][n];

cout<<"Enter matrix elements:"<<endl;

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>matrix[i][j];
    }
}

    cout<<"1. PrintMatrix"<<endl<<"2. SumOfEachRow"<<endl<<"3. SumOfEachColumn"<<endl<<"4. SumOfMainDiagonal"<<endl<<"5. MaxAndMinElement"<<endl<<"6. Exit"<<endl;

while(true){



string input;
    cin>>input;
if(input=="Exit" || input=="exit"){
    break;
}

if(input=="PrintMatrix"){
cout<<"matrix elements are:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";}
        cout<<endl;
    }
}else if(input=="SumOfEachRow"){

int sum=0;
for(int i = 0;i<m;i++){
sum = 0;
for(int j=0;j<n;j++){
sum+=matrix[i][j];}
cout<<"row "<<i+1<<" is: "<<sum<<endl;
}




}else if (input=="SumOfEachColumn"){
    int sum=0;
    for(int i = 0;i<n;i++){
        sum = 0;
        for(int j=0;j<m;j++){
            sum+=matrix[j][i];}
        cout<<"column "<<i+1<<" is: "<<sum<<endl;
    }


}else if (input=="SumOfMainDiagonal"){
    int sum=0;

    if(m>=n){
    for(int i=0;i<n;i++){
        sum+=matrix[i][i];
    }
    }else if(n>m){
        for(int i=0;i<m;i++){
            sum+=matrix[i][i];
        }
}
cout<<"sum of diagonal is: "<<sum<<endl;


}else if (input=="MaxAndMinElement"){
    int max = INT_MIN;
    int min = INT_MAX;
        for(int i = 0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]>max){
                    max = matrix[i][j];
                }
                if(matrix[i][j]<min){
                    min = matrix[i][j];
                }
               }
        }
    cout<<"min is:"<<min<<" max is:"<<max<<endl;
}

}

    return 0;
}
