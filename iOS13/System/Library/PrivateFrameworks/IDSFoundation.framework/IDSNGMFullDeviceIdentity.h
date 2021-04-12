/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@interface IDSNGMFullDeviceIdentity : NSObject
+(id)identityWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)identityWithAccess:(id)arg1 usageIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)publicDeviceIdentityWithError:(id*)arg1 ;
-(id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id*)arg3 ;
-(void)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(/*^block*/id)arg3 ;
-(BOOL)eraseFromKeyChain:(id*)arg1 ;
-(BOOL)shouldRollEncryptionIdentity;
-(id)keyRollingTicketWithError:(id*)arg1 ;
-(BOOL)updateWithRegisteredTicket:(id)arg1 error:(id*)arg2 ;
@end

