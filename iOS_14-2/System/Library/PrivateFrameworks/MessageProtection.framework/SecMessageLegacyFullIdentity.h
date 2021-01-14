/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


#import <MessageProtection/MessageProtection-Structs.h>
@class LegacySigningKeyPrivate, SecKeyRSAPrivate, NSData;

@interface SecMessageLegacyFullIdentity : NSObject {

	BOOL _isMigratedV2Key;
	LegacySigningKeyPrivate* _signingKey;
	SecKeyRSAPrivate* _encryptionKey;
	NSData* _encryptionKeyPersistentRef;
	NSData* _signingKeyPersistentRef;

}

@property (nonatomic,retain) LegacySigningKeyPrivate * signingKey;              //@synthesize signingKey=_signingKey - In the implementation block
@property (nonatomic,retain) SecKeyRSAPrivate * encryptionKey;                  //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (nonatomic,retain) NSData * encryptionKeyPersistentRef;               //@synthesize encryptionKeyPersistentRef=_encryptionKeyPersistentRef - In the implementation block
@property (nonatomic,retain) NSData * signingKeyPersistentRef;                  //@synthesize signingKeyPersistentRef=_signingKeyPersistentRef - In the implementation block
@property (assign,nonatomic) BOOL isMigratedV2Key;                              //@synthesize isMigratedV2Key=_isMigratedV2Key - In the implementation block
+(id)identity;
+(id)identityWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)populateIdentity:(id)arg1 withEncryptionKeyFromPersistentRef:(const char**)arg2 size:(unsigned long long*)arg3 ;
+(id)identityFromV2Bytes:(const char**)arg1 size:(unsigned long long*)arg2 error:(id*)arg3 ;
+(id)populateIdentity:(id)arg1 withSigningKeyFromPersistentRef:(const char**)arg2 size:(unsigned long long*)arg3 ;
-(void)setSigningKey:(LegacySigningKeyPrivate *)arg1 ;
-(SecKeyRSAPrivate *)encryptionKey;
-(NSData *)encryptionKeyPersistentRef;
-(id)initWithProtobufData:(id)arg1 ;
-(void)setSigningKeyPersistentRef:(NSData *)arg1 ;
-(NSData *)signingKeyPersistentRef;
-(BOOL)isMigratedV2Key;
-(void)deleteMigratedKeys;
-(LegacySigningKeyPrivate *)signingKey;
-(SecMPFullIdentity*)asRef;
-(id)initWithEncryptionKeyData:(id)arg1 signingKeyData:(id)arg2 ;
-(void)deleteItemWithPersistentRef:(id)arg1 ;
-(id)decryptMessage:(id)arg1 error:(id*)arg2 ;
-(void)setIsMigratedV2Key:(BOOL)arg1 ;
-(id)initWithEncryptionKey:(id)arg1 signingKey:(id)arg2 ;
-(void)setEncryptionKey:(SecKeyRSAPrivate *)arg1 ;
-(id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id*)arg3 ;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(void)setEncryptionKeyPersistentRef:(NSData *)arg1 ;
-(unsigned long long)encryptionSize;
-(id)publicIdentity;
-(id)initWithEncryptionSecKey:(_SecKey*)arg1 signingSecKey:(_SecKey*)arg2 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
@end

