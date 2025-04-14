#include "IsEven.h"
auto is_even(auto const& number) -> tri_state {
    if (number == 0) {
        return kTrue;
    }
    if (number == 1) {
        return kFalse;
    }
    if (number == 2) {
        return kTrue;
    }
    if (number == 3) {
        return kFalse;
    }
    if (number == 4) {
        return kTrue;
    }
    if (number == 5) {
        return kFalse;
    }
    if (number == 6) {
        return kTrue;
    }
    if (number == 7) {
        return kFalse;
    }
    if (number == 8) {
        return kTrue;
    }
    if (number == 9) {
        return kFalse;
    }
    return kIDontKnow;
}