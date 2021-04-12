/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class IDSMPFullLegacyIdentity, IDSNGMFullDeviceIdentity, NSNumber, NSData;

@interface IDSMPFullDeviceIdentityContainer : NSObject {

	IDSMPFullLegacyIdentity* _legacyFullIdentity;
	IDSNGMFullDeviceIdentity* _ngmFullDeviceIdentity;
	NSNumber* _ngmVersion;
	NSData* _cachedLegacySerializedData;

}

@property (nonatomic,retain) NSData * cachedLegacySerializedData;                             //@synthesize cachedLegacySerializedData=_cachedLegacySerializedData - In the implementation block
@property (nonatomic,readonly) IDSMPFullLegacyIdentity * legacyFullIdentity;                  //@synthesize legacyFullIdentity=_legacyFullIdentity - In the implementation block
@property (nonatomic,readonly) IDSNGMFullDeviceIdentity * ngmFullDeviceIdentity;              //@synthesize ngmFullDeviceIdentity=_ngmFullDeviceIdentity - In the implementation block
@property (nonatomic,readonly) NSNumber * ngmVersion;                                         //@synthesize ngmVersion=_ngmVersion - In the implementation block
+(id)_identityWithLegacyFullIdentity:(id)arg1 ngmFullDeviceIdentity:(id)arg2 ngmVersion:(id)arg3 legacyFullIdentitySerializedData:(id)arg4 error:(id*)arg5 ;
+(id)identityWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)identityWithLegacyFullIdentity:(id)arg1 ngmFullDeviceIdentity:(id)arg2 ngmVersion:(id)arg3 error:(id*)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)initWithFullLegacyIdentity:(id)arg1 ngmFullDeviceidentity:(id)arg2 ngmVersion:(id)arg3 legacyFullIdentitySerializedData:(id)arg4 ;
-(NSNumber *)ngmVersion;
-(IDSNGMFullDeviceIdentity *)ngmFullDeviceIdentity;
-(IDSMPFullLegacyIdentity *)legacyFullIdentity;
-(id)publicIdentityWithError:(id*)arg1 ;
-(id)_legacyUnsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id*)arg3 ;
-(id)_ngmSynchronouslyUnsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id*)arg3 ;
-(id)_ngmUnsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 ;
-(id)_ngmValidateEncryptingAndSigningIdentity:(id)arg1 forMessage:(id)arg2 ;
-(id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 usingIdentityWithIdentifier:(id)arg3 error:(id*)arg4 ;
-(id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 usingIdentityWithIdentifier:(id)arg3 ;
-(NSData *)cachedLegacySerializedData;
-(void)setCachedLegacySerializedData:(NSData *)arg1 ;
@end

