/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@interface IDSNGMFullDeviceIdentity : NSObject
+(id)identityWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)identityWithAccess:(id)arg1 usageIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(/*^block*/id)arg3 ;
-(BOOL)updateWithRegisteredTicket:(id)arg1 error:(id*)arg2 ;
-(id)keyRollingTicketWithError:(id*)arg1 ;
-(id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldRollEncryptionIdentity;
-(id)publicDeviceIdentityWithError:(id*)arg1 ;
-(BOOL)eraseFromKeyChain:(id*)arg1 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
@end

