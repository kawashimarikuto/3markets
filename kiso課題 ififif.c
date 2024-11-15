##include <stdio.h>

int main(void)
{
int enpitu, kesigomu, akapen;
enpitu = 20; //鉛筆の個数
kesigomu = 30; //消しゴムの個数
akapen = 15; //赤ペンの個数
//変数と定数の比較
 if(enpitu == 20)
  printf("鉛筆は20個あります\n");
 if(kesigomu !=20)
 printf("消しゴムは20個ではありません\n");
 if(kesigomu>=20)
 printf("消しゴム20個以上あります\n");
 if(akapen < 20)
 printf("赤ペンは20個未満です\n");
 
 //変数と変数の比
 if(enpitu>akapen)
 printf("鉛筆の数は赤ペンの数より多いです\n");
 if(kesigomu >akapen)
 printf("消しゴムは赤ペンより多いです\n");
 
    
    return 0;
}
