
/*
-c 옵션은 링크를 하지 않고 컴파일만 하겠다는 의미
이 옵션을 생략하면 main 함수를 찾을 수 없다는 오류가 출력된다. 
*/


/*
리눅스 환경에서 프로그래밍을 하면
보통 프로그램을 컴파일할 때
make라는 프로그램을 사용한다. 

쉘 상에서 컴파일을 하려면 
어떤 파일들을 컴파일하고
어떤 방식으로 컴파일할 지 
직접 컴파일러에게 알려줘야 한다. 

하지만 프로젝트의 크기가 커지고 파일들이 많아진다면 매번 그렇게 친다는 것이 불가능에 가깝다. 
이 문제를 해결하기 위해 리눅스에서는 make라는 프로그램을 제공하는데 이 프로그램은 
makefile이라는 파일을 읽어서 주어진 방식대로 명령어를 처리하게 한다. 
덕분에 많은 수의 파일들을 명령어 한 번으로 컴파일 할 수 있다. 

*/


/*
컴파일러를 통해 프로그램을 빌드하게 되면 어떠한 방식으로 소스코드에서 하나의 프로그램이 완성되는가?

컴파일은 소스코드를 컴퓨터가 이해할 수 있는 어셈블리어로 변환하는 과정

링킹 - 서로 다른 파일에 흩어져 있던 함수나 클래스들을 한 데 묶어서 링크하는 작업

링킹 과정은 컴파일러에 목적파일을 전달함으로써 수행된다. 


-o 옵션은 그 뒤에 링킹 후에 생성할 실행 파일 이름을 이야기한다. 
위 경우 main이라는 실행 파일을 만들었고 만약에 이를 따로 지정하지 않는다면 그냥 ./a.out이라는 파일을 
디폴트로 생성하게 된다. 

단순하게 쉘 스크립트를 짠다면 
파일 하나만 바꿔도 전체 모든 파일을 컴파일하게 되므로 컴파일 시간이 매우 길어진다. 
하지만 make를 사용하면 일부 파일을 수정할 경우 필요한 명령만 빠르게 컴파일 할 수 있도록 도와준다. 
*/





 /*
make는 주어진 쉘 명령어들을 조건에 맞게 실행하는 프로그램
어떠한 조건으로 명령어를 실행할지 담은 파일을 makefile이라고 부르며, 
make를 터미널 상에서 실행하게된다면 해당 위치에 있는 makefile을 찾아서 읽어들이게 됩니다. 


makefile

target
make를 실행할 때 make abc과 같이 어떤 것을 make할 지 전달하는데 이를 target이라 부른다. 
make abc의 경우 타겟 중에 abc를 찾아서 이에 대응되는 명령을 실행해준다

실행할 명령어 (recipes)
주어진 타겟을 make할 때 실행할 명령어들의 나열
recipe 자리에 명령어를 쓸 때 
반드시 탭 한 번으로 들여쓰기를 해주어야

필요조건들 prerequisites
주어진 타겟을 make 할 때 사용될 파일들의 목록
의존파일. 왜냐하면 해당 타겟을 처리하기 위해 건드려야 할 파일들을 써놓았으므로
주어진 파일들의 수정시간보다 타겟이 더 나중에 수정되었다면 해당 타겟의 명령어를 실행하지 않는다. 
왜냐하면 이미 이전에 타겟이 만들어져 있다고 간주하므로


 */

