#pragma once

enum tri_state {kTrue, kFalse, kIDontKnow};

auto is_even(auto const& number) -> tri_state ;