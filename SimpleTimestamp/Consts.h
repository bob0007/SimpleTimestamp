#pragma once

const char tsqHeader[] {0x30, 0x39, 0x02, 0x01, 0x01, 0x30, 0x31, 0x30, 0x0D, 0x06, 0x09, 0x60, 0x86, 0x48, 0x01, 0x65, 0x03, 0x04, 0x02, 0x01, 0x05, 0x00, 0x04, 0x20};
const char tsqFooter[] {0x01, 0x01, 0xFF};

const int tsqFooterLength{ 3 };
const int tsqHeaderLength{ 24 };