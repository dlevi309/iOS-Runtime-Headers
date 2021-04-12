/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSString, CRKASMCredentialStore;

@interface CRKASMIdentityVendor : NSObject {

	NSString* _userIdentifier;
	NSString* _commonNamePrefix;
	CRKASMCredentialStore* _credentialStore;

}

@property (nonatomic,copy,readonly) NSString * userIdentifier;                       //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * commonNamePrefix;                     //@synthesize commonNamePrefix=_commonNamePrefix - In the implementation block
@property (nonatomic,readonly) CRKASMCredentialStore * credentialStore;              //@synthesize credentialStore=_credentialStore - In the implementation block
@property (nonatomic,readonly) id<CRKIdentity> identity; 
-(NSString *)userIdentifier;
-(id<CRKIdentity>)identity;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(CRKASMCredentialStore *)credentialStore;
-(id)existingIdentity;
-(id)makeIdentityAndAddToKeychain;
-(id)makeIdentity;
-(NSString *)commonNamePrefix;
-(id)initWithUserIdentifier:(id)arg1 commonNamePrefix:(id)arg2 credentialStore:(id)arg3 ;
@end

