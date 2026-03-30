# PBDS
*Policy Based Data Structures*<br><br>

```
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/exception.hpp>
#include <ext/pb_ds/hash_policy.hpp>
#include <ext/pb_ds/list_update_policy.hpp>
#include <ext/pb_ds/priority_queue.hpp>
#include <ext/pb_ds/tag_and_trait.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/trie_policy.hpp>
```
헤더를 추가해 사용 가능한 gcc 컴파일러에 있는 자료구조입니다.<br><br>

저 중에 골라 적거나, 귀찮다면 `#include <bits/extc++.h>`로 대체해도 됩니다.<br><br>

`__gnu_pbds`라는 `namespace`를 사용하므로, 편의상 `using namespace __gnu_pbds`과 함께 사용합니다.<br><br>

## Tree

<br>PBDS중 하나인 tree 컨테이너입니다.<br><br>
`tree< Key, Mapped, Cmp_Fn, Tag, Node_Update, _Alloc >`로 선언할 수 있습니다.<br>
