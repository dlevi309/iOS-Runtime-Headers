/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class IDSMPPublicLegacyIdentity, IDSNGMPublicDeviceIdentity, NSNumber;

@interface IDSMPPublicDeviceIdentityContainer : NSObject {

	IDSMPPublicLegacyIdentity* _legacyPublicIdentity;
	IDSNGMPublicDeviceIdentity* _ngmPublicDeviceIdentity;
	NSNumber* _ngmVersion;

}

@property (nonatomic,readonly) IDSMPPublicLegacyIdentity * legacyPublicIdentity;                  //@synthesize legacyPublicIdentity=_legacyPublicIdentity - In the implementation block
@property (nonatomic,readonly) IDSNGMPublicDeviceIdentity * ngmPublicDeviceIdentity;              //@synthesize ngmPublicDeviceIdentity=_ngmPublicDeviceIdentity - In the implementation block
@property (nonatomic,readonly) NSNumber * ngmVersion;                                             //@synthesize ngmVersion=_ngmVersion - In the implementation block
+(id)identityWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)identityWithLegacyPublicIdentity:(id)arg1 ngmPublicDeviceIdentity:(id)arg2 ngmVersion:(id)arg3 error:(id*)arg4 ;
-(id)debugDescription;
-(NSNumber *)ngmVersion;
-(id)description;
-(unsigned long long)hash;
-(IDSNGMPublicDeviceIdentity *)ngmPublicDeviceIdentity;
-(IDSMPPublicLegacyIdentity *)legacyPublicIdentity;
-(id)initWithLegacyPublicIdentity:(id)arg1 ngmPublicDeviceIdentity:(id)arg2 ngmVersion:(id)arg3 ;
-(id)_legacySealMessage:(id)arg1 signedWithFullIdentity:(id)arg2 error:(id*)arg3 ;
-(id)_ngmSealMessage:(id)arg1 signedWithFullIdentity:(id)arg2 error:(id*)arg3 ;
-(id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 usingIdentitiesWithIdentifier:(id)arg3 error:(id*)arg4 ;
-(id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 usedIdentityWithIdentifier:(id*)arg3 error:(id*)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
@end

