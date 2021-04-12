/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


@class SigningKey, NSMutableArray;

@interface NGMFullDeviceIdentity : NSObject {

	SigningKey* _deviceSigningKey;
	NSMutableArray* _devicePrekeys;

}

@property (nonatomic,retain) SigningKey * deviceSigningKey;               //@synthesize deviceSigningKey=_deviceSigningKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * devicePrekeys;              //@synthesize devicePrekeys=_devicePrekeys - In the implementation block
+(id)identityWithAccess:(id)arg1 error:(id*)arg2 ;
+(id)identityWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)identityWithAccess:(id)arg1 usageIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)unsealMessageAndAttributes:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(/*^block*/id)arg3 ;
-(void)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(/*^block*/id)arg3 ;
-(BOOL)updateWithRegisteredTicket:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(void)postMigrationKeychainCleanup;
-(id)keyRollingTicketWithError:(id*)arg1 ;
-(id)signDataWithFormatter:(id)arg1 error:(id*)arg2 ;
-(void)setDeviceSigningKey:(SigningKey *)arg1 ;
-(id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id*)arg3 ;
-(NSMutableArray *)devicePrekeys;
-(BOOL)shouldRollEncryptionIdentity;
-(id)initWithSigningKey:(id)arg1 devicePrekeys:(id)arg2 ;
-(void)setDevicePrekeys:(NSMutableArray *)arg1 ;
-(SigningKey *)deviceSigningKey;
-(BOOL)requiresMigration;
-(BOOL)deleteKeyWithTag:(id)arg1 ;
-(id)publicDeviceIdentityWithError:(id*)arg1 ;
-(BOOL)eraseFromKeyChain:(id*)arg1 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
@end

