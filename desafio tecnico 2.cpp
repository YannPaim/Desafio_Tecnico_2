/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{   int escolha = 2;
    int verdadementira;
    char simnao;
    //int repeti = 0;
    while(true){
    for(int p = 0; p < 3; p++)
    {
    std::cout<<"Olá meu nome é Shoya Ishida gostária de me juntar a vocês já que ouvi dizer que vocês ajudam pessoas surdos ao redor do mundo " << endl;
    std::cout<<"Olá Shoya Ishida por que você gostaria de se juntar a ONG A voz do silêncio?" << endl;
    std::cout<<"Bem eu gostaria de me juntar a vocês pois... (escolha o que o personagem dirá)" << endl;
    std::cout<<"digite 1 para ele dizer que é por causa de ações suas quando era uma criança ou digite 2 para ele arranjar outra desculpa" << endl;
    std::cin >> escolha;
    do {
        
    switch (escolha){
        case 1:
         std::cout<<"Bem eu gostaria de me juntar a vocês pois quando criança eu fazia bullying com uma colega que era surda e espero poder me redimir com isso" << endl;
         std::cout<<"Entendo... você não é o primeiro que vem aqui por esse motivo mas caso não se importe eu poderia saber o que você fazia com ela?"<<endl;
         std::cout<<"Bem eu fazia coisas como tirar o aparelho auditivo dela e jogar no lixo, jogar seus materiais na água, rabiscar sua carteira e essas coisas."<<endl;
         std::cout<<"Meu Deus você era bem maldoso com ela e os outros colegas não te impediam ou algo assim?"<<endl;
         std::cout<<"Não eles faziam o mesmo que eu até ela sair da escola"<<endl;
         std::cout<<"E o que aconteceu depois dela sair da escola?"<<endl;
         std::cout<<"Digite 1 para dizer a verdade ou 2 para dizer mentiras"<<endl;
         std::cin >> verdadementira;
         
         if (verdadementira == 1){
             std::cout<<"Quando ela saiu eu comecei a virar o alvo das coisas que eu fazia com ela só depois disso pude entender pelo que ela passava"<<endl;
             std::cout<<"Entendi então depois de tudo que você fez para ela você virou o alvo das mesmas coisas pelo menos é bom saber que você quer mudar"<<endl;
             std::cout<<"Sempre devemos melhoras eu ainda não encontrei com ela mas espero que um dia eu possa pedir desculpas para ela e devolvel seu caderno"<<endl;
             std::cout<<"algum você vai encontra-lá não se preocupe mas então vamos lá fazer seu registro para você oficialmente fazer parte de nós"<<endl;
             std::cout<<"Claro vamos lá muito obrigado"<<endl;
             break;
         }
             else if (verdadementira == 2) {
                 std::cout<<"Bem todos nós ficamos arrependidos e esperavamos que talvez a noticia dela ter saido fosse mentira"<<endl;
                 std::cout<<"vocês deveriam ter percebido isso antes infelizmente mas antes tarde do que nunca eu suponho"<<endl;
                 std::cout<<"Com certeza mas ainda sim dói lembrar do que faziamos com ela"<<endl;
                 std::cout<<"Imagino mas então vamos lá fazer o seu registro para que você seja oficialmente um de nós ishida "<<endl;
                 std::cout<<"Claro vamos lá muito obrigado não quero que mais ninguem passe pelo o que ela passou"<<endl;
                 break;
             }
             
         case 2:
         std::cout<<"Bem eu gostaria de me juntar a vocês pois acho nobre o que vocês fazem e gostaria de poder fazer algo maior para ajudar os surdos" << endl;
         std::cout<<"Muito bem esse é o espirito sermos melhores para as outras pessoas e poder ajuda-las mas se prepare que não é tão facil ok?"<<endl;
         std::cout<<"Claro nunca esperei que fosse ser fácil to pronto pra qualquer dificuldade"<<endl;
         std::cout<<"Bom saber então vamos lá fazer seu registro para você fazer parte de nós"<<endl;
         std::cout<<"Claro vamos lá"<<endl;
         break;
    }
      std::cout<<"para encerrar digite s: " << endl;
      std::cin >> encerrar = 's';
      break;
    } while (encerrar = 's');
    cout<<"Eles continuam conversando por horas após fazer o registro de Shouya Ishida até se tornarem bons amigos e futuramente ajudar varias pessoas." << endl;
    return 0;
}
}
}
