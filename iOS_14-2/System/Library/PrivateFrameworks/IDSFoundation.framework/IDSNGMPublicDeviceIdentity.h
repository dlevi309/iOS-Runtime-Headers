/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@interface IDSNGMPublicDeviceIdentity : NSObject
+(id)identityWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)identityWithIdentityData:(id)arg1 prekeyData:(id)arg2 error:(id*)arg3 ;
-(id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 error:(id*)arg3 ;
-(id)identityData;
-(id)prekeyData;
-(id)dataRepresentationWithError:(id*)arg1 ;
@end

