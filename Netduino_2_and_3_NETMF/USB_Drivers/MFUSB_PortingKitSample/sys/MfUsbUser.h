#ifndef _H_MFUSB_USER_
#define _H_MFUSB_USER_

#pragma LOCKEDDATA
static GUID MfUsbGuidOperations = { 0x09343630L, 0xa794, 0x10ef, 0x33, 0x4f, 0x82, 0xea, 0x33, 0x2c, 0x49, 0xf3 };

#pragma LOCKEDDATA
static GUID MfUsbGuidInquiries  = { 0x265820CEL, 0x19E5, 0x4530, 0x88, 0x61, 0x26, 0x2E, 0x97, 0xE7, 0x85, 0x75 };
 

#define IOCTL_MFUSB_READ_AVAILABLE CTL_CODE(FILE_DEVICE_UNKNOWN, 0, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_MFUSB_DEVICE_HASH    CTL_CODE(FILE_DEVICE_UNKNOWN, 1, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_MFUSB_MANUFACTURER   CTL_CODE(FILE_DEVICE_UNKNOWN, 2, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_MFUSB_PRODUCT        CTL_CODE(FILE_DEVICE_UNKNOWN, 3, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_MFUSB_SERIAL_NUMBER  CTL_CODE(FILE_DEVICE_UNKNOWN, 4, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_MFUSB_VENDOR_ID      CTL_CODE(FILE_DEVICE_UNKNOWN, 5, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_MFUSB_PRODUCT_ID     CTL_CODE(FILE_DEVICE_UNKNOWN, 6, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_MFUSB_DISPLAY_NAME   CTL_CODE(FILE_DEVICE_UNKNOWN, 7, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_MFUSB_PORT_NAME      CTL_CODE(FILE_DEVICE_UNKNOWN, 8, METHOD_BUFFERED, FILE_ANY_ACCESS)

#endif

