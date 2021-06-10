<?php
$arr1 = array(1,5,10,15,7,5);
$arr2 = array(4,3,6,8,9,22,12);
$merge = array_merge($arr1, $arr2);
#array_multisort($merge, SORT_DESC, SORT_NUMERIC);

rsort($merge);
print_r($merge);
?>

