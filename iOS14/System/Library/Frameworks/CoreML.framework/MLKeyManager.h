/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@interface MLKeyManager : NSObject
+(id)syncQueue;
+(BOOL)isModelEncrypted:(id)arg1 ;
+(id)extractKeyIdentifierFromModelAtURL:(id)arg1 usesCodeSigningIdentityForEncryption:(BOOL*)arg2 error:(id*)arg3 ;
+(id)createPersistentKeyBlobForKeyID:(id)arg1 usesCodeSigningIdentityForEncryption:(BOOL)arg2 error:(id*)arg3 ;
+(id)loadDecryptionKeyForModelAtURL:(id)arg1 error:(id*)arg2 ;
+(id)decryptSessionForModelAtURL:(id)arg1 error:(id*)arg2 ;
@end

