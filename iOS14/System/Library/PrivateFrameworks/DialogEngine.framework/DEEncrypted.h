/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@interface DEEncrypted : NSObject
+(BOOL)isSymmetric:(unsigned long long)arg1 ;
+(id)getKeyWithVersion:(id)arg1 symmetric:(BOOL*)arg2 ;
+(id)getSymmetricSrc:(id)arg1 publicKey:(id)arg2 ;
+(id)decryptAll:(id)arg1 ;
+(id)getSymmetricKey:(id)arg1 symmetricKeyIV:(id)arg2 signature:(id)arg3 ;
+(BOOL)decryptFrom:(id)arg1 to:(id)arg2 allowAllKeys:(BOOL)arg3 keyVersion:(id*)arg4 ;
+(BOOL)isPrivateKey:(id)arg1 publicKey:(id)arg2 ;
+(id)getSymmetricKey:(id)arg1 publicKey:(id)arg2 symmetricKeyIV:(id*)arg3 signature:(id*)arg4 ;
+(BOOL)encryptFrom:(id)arg1 to:(id)arg2 keyId:(unsigned long long)arg3 privateKey:(id)arg4 encryptedPb:(Encrypted*)arg5 ;
+(BOOL)wrapFrom:(id)arg1 to:(id)arg2 encryptedPb:(Encrypted*)arg3 multipart:(BOOL)arg4 ;
+(BOOL)decryptFrom:(id)arg1 to:(id)arg2 version:(id)arg3 allowAllKeys:(BOOL)arg4 ;
+(id)decrypt:(id)arg1 keyVersion:(id*)arg2 ;
+(BOOL)decryptAllFrom:(id)arg1 to:(id)arg2 ;
+(BOOL)encryptFrom:(id)arg1 to:(id)arg2 keyId:(unsigned long long)arg3 privateKey:(id)arg4 multipart:(BOOL)arg5 ;
+(id)toEnvelope:(BOOL)arg1 iv:(id)arg2 hmac:(id)arg3 keyVersion:(id)arg4 payload:(id)arg5 ;
+(id)getKey:(unsigned long long)arg1 ;
+(id)encrypt:(id)arg1 keyId:(unsigned long long)arg2 privateKey:(id)arg3 multipart:(BOOL)arg4 ;
+(id)decrypt:(id)arg1 ;
+(id)versionFile:(id)arg1 ;
+(id)getKeyWithVersion:(id)arg1 ;
+(id)encryptFrom:(id)arg1 name:(id)arg2 base:(id)arg3 keyId:(unsigned long long)arg4 privateKey:(id)arg5 multipart:(BOOL)arg6 ;
+(id)decrypt:(id)arg1 allowAllKeys:(BOOL)arg2 keyVersion:(id*)arg3 ;
+(id)decryptFrom:(id)arg1 name:(id)arg2 base:(id)arg3 ;
+(BOOL)decryptFrom:(id)arg1 to:(id)arg2 version:(id)arg3 ;
@end

