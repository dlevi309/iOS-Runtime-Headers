/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
*/

typedef struct __SecCertificate* SecCertificateRef;

typedef struct {
	char* data;
	unsigned long long length;
} SCD_Struct_PT1;

typedef struct {
	SCD_Struct_PT1 version;
	SCD_Struct_PT1 assetACL;
	SCD_Struct_PT1 assetACLAttestation;
	SCD_Struct_PT1 keyBlob;
	SCD_Struct_PT1 encryptedWrappedKeyBlob;
} SCD_Struct_PT2;

typedef struct {
	SCD_Struct_PT1 version;
	SCD_Struct_PT1 instanceSerialNumber;
	SCD_Struct_PT1 publicKey;
	SCD_Struct_PT1 keyNumber;
	SCD_Struct_PT1 deviceInfos;
	SCD_Struct_PT1 counterLimit;
	SCD_Struct_PT1 counterIndex;
} SCD_Struct_PT3;

