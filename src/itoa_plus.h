#pragma once
#include<stdint.h>

template<class a, class b>
uint32_t itoa_plus(a* buf, b value, b base, const char* lut = "0123456789abcdefghijklmnopqrstuvwxyz") {
    a* start = buf;
    a* temp = buf;

    if (value < 0) {
        buf[0] = '-';
        buf += 1;
        temp += 1;
    }
    do {
        auto i = value % base;
        buf[0] = lut[i < 0 ? -int32_t(i) : int32_t(i)];
        buf += 1;
        value /= base;
    } while (value != 0);

    for (int32_t len = buf - temp, i = 0; i < len / 2; i++) {
        auto t0 = buf[-i - 1];
        auto t1 = temp[i];
        buf[-i - 1] = t1;
        temp[i] = t0;
    }

    buf[0] = b(0);
    return buf - start;
}