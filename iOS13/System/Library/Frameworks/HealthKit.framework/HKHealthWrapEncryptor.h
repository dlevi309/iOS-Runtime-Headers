/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSOutputStream, NSMutableData, NSUUID, HKHealthWrapCodableMessageHeader;

@interface HKHealthWrapEncryptor : NSObject {

	NSOutputStream* _outputStream;
	SecCertificateRef _certificate;
	unsigned _algorithm;
	unsigned _options;
	unsigned _keySize;
	CCCryptorRef _cryptor;
	unsigned _hmacAlgorithm;
	SCD_Struct_HK25 _hmacContext;
	CC_SHA256state_st _sha256Context;
	NSMutableData* _buffer;
	NSUUID* _studyUUID;
	NSUUID* _uuid;
	HKHealthWrapCodableMessageHeader* _header;
	BOOL _compressionEnabled;
	unsigned long long _encryptedBytesCount;

}
-(void)dealloc;
-(BOOL)startWithError:(id*)arg1 ;
-(id)initWithOutputStream:(id)arg1 certificate:(SecCertificateRef)arg2 algorithm:(unsigned)arg3 options:(unsigned)arg4 keySize:(unsigned)arg5 uuid:(id)arg6 studyUUID:(id)arg7 compressionEnabled:(BOOL)arg8 ;
-(BOOL)appendData:(id)arg1 error:(id*)arg2 ;
-(BOOL)finalizeWithError:(id*)arg1 ;
-(SecKeyRef)_copyAndVerifyPublicKeyFromCertificate:(SecCertificateRef)arg1 error:(id*)arg2 ;
-(id)_encryptData:(id)arg1 withCertificate:(SecCertificateRef)arg2 error:(id*)arg3 ;
-(BOOL)_updateHeaderWithKey:(id)arg1 iv:(id)arg2 hmacKey:(id)arg3 error:(id*)arg4 ;
-(BOOL)_startCryptorWithError:(id*)arg1 ;
-(BOOL)_writeStream:(const char*)arg1 length:(unsigned long long)arg2 hash:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_appendEncryptedBytes:(const char*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_updateCryptorWithData:(id)arg1 error:(id*)arg2 ;
-(BOOL)_finalizeCryptorWithError:(id*)arg1 ;
@end

