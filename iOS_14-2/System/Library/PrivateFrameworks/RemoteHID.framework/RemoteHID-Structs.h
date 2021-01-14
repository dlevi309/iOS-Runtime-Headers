/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteHID.framework/RemoteHID
*/

typedef struct BTSessionImpl* BTSessionImplRef;

typedef struct BTAccessoryManagerImpl* BTAccessoryManagerImplRef;

typedef struct BTDeviceImpl* BTDeviceImplRef;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct {
	unsigned field1 : 7;
	unsigned field2 : 10;
	0 field3;
	unsigned field4 : 3;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 9;
} SCD_Struct_HI4;

typedef struct {
	SCD_Struct_HI4 field1;
	unsigned char field2;
	unsigned long long field3;
	unsigned char field4[0];
} SCD_Struct_HI5;

typedef struct {
	SCD_Struct_HI4 field1;
	unsigned char field2;
	unsigned char field3[0];
} SCD_Struct_HI6;

typedef struct {
	SCD_Struct_HI4 field1;
	unsigned char field2[0];
} SCD_Struct_HI7;

