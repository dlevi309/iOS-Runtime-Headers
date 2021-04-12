/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@class NSArray, NSSet;

@interface INExplicitAppTrustCache : NSObject {

	BOOL _loadedManagedBundleIdentifiers;
	BOOL _loadedTrustedCodeSigningIdentities;
	BOOL _enterpriseAppTrustAllowedLoaded;
	BOOL _enterpriseAppTrustAllowed;
	NSArray* _managedBundleIdentifiers;
	NSArray* _trustedCodeSigningIdentities;
	NSSet* _signingIdentitiesRequiringExplicitTrust;

}

@property (assign,nonatomic) BOOL enterpriseAppTrustAllowed;                               //@synthesize enterpriseAppTrustAllowed=_enterpriseAppTrustAllowed - In the implementation block
@property (nonatomic,retain) NSArray * managedBundleIdentifiers;                           //@synthesize managedBundleIdentifiers=_managedBundleIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * trustedCodeSigningIdentities;                       //@synthesize trustedCodeSigningIdentities=_trustedCodeSigningIdentities - In the implementation block
@property (nonatomic,retain) NSSet * signingIdentitiesRequiringExplicitTrust;              //@synthesize signingIdentitiesRequiringExplicitTrust=_signingIdentitiesRequiringExplicitTrust - In the implementation block
-(BOOL)enterpriseAppTrustAllowed;
-(NSArray *)managedBundleIdentifiers;
-(NSSet *)signingIdentitiesRequiringExplicitTrust;
-(void)setEnterpriseAppTrustAllowed:(BOOL)arg1 ;
-(void)setManagedBundleIdentifiers:(NSArray *)arg1 ;
-(void)setSigningIdentitiesRequiringExplicitTrust:(NSSet *)arg1 ;
-(NSArray *)trustedCodeSigningIdentities;
-(void)setTrustedCodeSigningIdentities:(NSArray *)arg1 ;
@end

