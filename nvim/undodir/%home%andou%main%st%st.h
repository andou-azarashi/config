Vim�UnDo� �QM�Ldlq��5H���4I�gP}he��Ha+�   �                                   _/]V    _�                             ����                                                                                                                                                                                                                                                                                                                                                             _^^     �                E#define ATTRCMP(a, b)		((a).mode != (b).mode || (a).fg != (b).fg || \5�_�                          ����                                                                                                                                                                                                                                                                                                                                                             _^i     �             �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             _^k     �         �      r+#define ATTRCMP(a, b)		(((a).mode & (~ATTR_WRAP) & (~ATTR_LIGA)) != ((b).mode & (~ATTR_WRAP) & (~ATTR_LIGA)) || \5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             _^w     �         �    �         �    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             _^y     �         �      +				(a).fg != (b).fg || \5�_�                    $       ����                                                                                                                                                                                                                                                                                                                                                             _^�    �   #   &   �      	ATTR_WDUMMY     = 1 << 10,5�_�      	                      ����                                                                                                                                                                                                                                                                                                                                                             _/Z�     �                q#define ATTRCMP(a, b)		(((a).mode & (~ATTR_WRAP) & (~ATTR_LIGA)) != ((b).mode & (~ATTR_WRAP) & (~ATTR_LIGA)) || \5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             _/Z�     �                				(a).fg != (b).fg || \5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                             _/Z�     �                				(a).bg != (b).bg)5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                             _/Z�     �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             _/Z�     �         �       �         �    5�_�                    #       ����                                                                                                                                                                                                                                                                                                                                                             _/['    �   "   #              ATTR_LIGA       = 1 << 11,5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             _/]R     �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             _/]S     �         �    �         �    5�_�                             ����                                                                                                                                                                                                                                                                                                                                                             _/]U    �                 5�_�   
                         ����                                                                                                                                                                                                                                                                                                                                                             _/Z�     �             �               �##define ATTRCMP(a, b)		((a).mode != (b).mode || (a).fg != (b).fg || \define LIMIT(x, a, b)		(x) = (x) < (a) ? (a) : (x) > (b) ? (b) : (x)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             _^h     �             �               r+#define ATTRCMP(a, b)		(((a).mode & (~ATTR_WRAP) & (~ATTR_LIGA)) != ((b).mode & (~ATTR_WRAP) & (~ATTR_LIGA)) || \5��