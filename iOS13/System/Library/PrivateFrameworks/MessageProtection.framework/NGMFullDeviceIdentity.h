/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


@class SigningKey, NSMutableArray;

@interface NGMFullDeviceIdentity : NSObject {

	SigningKey* _deviceSigningKey;
	NSMutableArray* _devicePrekeys;

}

@property (nonatomic,retain) SigningKey * deviceSigningKey;               //@synthesize deviceSigningKey=_deviceSigningKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * devicePrekeys;              //@synthesize devicePrekeys=_devicePrekeys - In the implementation block
+(id)identityWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)identityWithAccess:(id)arg1 usageIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)identityWithAccess:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)publicDeviceIdentityWithError:(id*)arg1 ;
-(id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id*)arg3 ;
-(void)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(/*^block*/id)arg3 ;
-(BOOL)eraseFromKeyChain:(id*)arg1 ;
-(BOOL)shouldRollEncryptionIdentity;
-(id)keyRollingTicketWithError:(id*)arg1 ;
-(BOOL)updateWithRegisteredTicket:(id)arg1 error:(id*)arg2 ;
-(SigningKey *)deviceSigningKey;
-(NSMutableArray *)devicePrekeys;
-(BOOL)deleteKeyWithTag:(id)arg1 ;
-(BOOL)requiresMigration;
-(void)postMigrationKeychainCleanup;
-(id)signDataWithFormatter:(id)arg1 error:(id*)arg2 ;
-(void)setDeviceSigningKey:(SigningKey *)arg1 ;
-(void)setDevicePrekeys:(NSMutableArray *)arg1 ;
-(id)initWithSigningKey:(id)arg1 devicePrekeys:(id)arg2 ;
@end

