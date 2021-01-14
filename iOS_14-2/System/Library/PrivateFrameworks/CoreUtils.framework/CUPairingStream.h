/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


#import <CoreUtils/CoreUtils-Structs.h>
@class NSString;

@interface CUPairingStream : NSObject {

	CryptoAEADPrivateRef _decryptAEAD;
	unsigned char _decryptNonce[12];
	CryptoAEADPrivateRef _encryptAEAD;
	unsigned char _encryptNonce[12];
	unsigned long long _authTagLength;
	NSString* _name;

}

@property (assign,nonatomic) unsigned long long authTagLength;              //@synthesize authTagLength=_authTagLength - In the implementation block
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
-(void)_cleanup;
-(BOOL)encryptInputBytes:(const void*)arg1 inputLength:(unsigned long long)arg2 inputAADBytes:(const void*)arg3 inputAADLength:(unsigned long long)arg4 outputBytes:(void*)arg5 outputAuthTagBytes:(void*)arg6 outputAuthTagLength:(unsigned long long)arg7 error:(id*)arg8 ;
-(BOOL)decryptInputBytes:(const void*)arg1 inputLength:(unsigned long long)arg2 inputAADBytes:(const void*)arg3 inputAADLength:(unsigned long long)arg4 inputAuthTagPtr:(const void*)arg5 inputAuthTagLength:(unsigned long long)arg6 outputBytes:(void*)arg7 error:(id*)arg8 ;
-(id)init;
-(NSString *)name;
-(unsigned long long)authTagLength;
-(void)setAuthTagLength:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)prepareWithName:(id)arg1 isClient:(BOOL)arg2 pskData:(id)arg3 error:(id*)arg4 ;
-(id)encryptData:(id)arg1 aadData:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)encryptData:(id)arg1 aadBytes:(const void*)arg2 aadLength:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)decryptData:(id)arg1 aadData:(id)arg2 error:(id*)arg3 ;
-(id)decryptData:(id)arg1 aadBytes:(const void*)arg2 aadLength:(unsigned long long)arg3 error:(id*)arg4 ;
@end

