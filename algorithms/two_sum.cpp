/*****************************************************************************
* File          : two_sum.cpp
* Description   : https://leetcode.com/problems/two-sum/
* Author        : Du Jiangnan
* Version       : 1.0
* Copyright     :
* History       : 2017-01-02 初版
*                 xxxx-xx-xx xxxx
*****************************************************************************/

// Internal Includes
// - None

// C Standard Includes
#include <stdint.h>

// C++ Standard Includes
#include <vector>
#include <unordered_map>

// Third-party Includes
// - None

// Project Includes
// - None

class Solution_TwoSum {
public:
    /*****************************************************************************
    * Function      :
    * Description   :
    * Calls         :
    * Called By     :
    * Params        :
    * Return        :
    * Others        :
    *****************************************************************************/
    std::vector<int> twoSum(std::vector<int> &numbers, int target)
    {
        std::unordered_map<int, int> m;
        std::vector<int> result;
        for (int i = 0; i < numbers.size(); ++i) {
            if (m.count(target - numbers[i])) {
                result.push_back(m[target - numbers[i]]);
                result.push_back(i);
                return result;
            }
            m[numbers[i]] = i;
        }
        return result;
    }
};

