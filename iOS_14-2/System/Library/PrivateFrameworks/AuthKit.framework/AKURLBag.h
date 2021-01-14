/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol AKURLBagDictionaryProvider;
@class NSString, NSURL, NSSet, NSArray;

@interface AKURLBag : NSObject {

	NSString* _altDSID;
	id<AKURLBagDictionaryProvider> _bagProvider;

}

@property (nonatomic,copy) NSString * altDSID;                                                                   //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,readonly) NSURL * escapeHatchURL; 
@property (nonatomic,retain) id<AKURLBagDictionaryProvider> bagProvider;                                         //@synthesize bagProvider=_bagProvider - In the implementation block
@property (nonatomic,readonly) NSURL * basicAuthURL; 
@property (nonatomic,readonly) NSURL * startProvisioningURL; 
@property (nonatomic,readonly) NSURL * endProvisioningURL; 
@property (nonatomic,readonly) NSURL * syncAnisetteURL; 
@property (nonatomic,readonly) NSURL * upgradeEligibilityCheckURL; 
@property (nonatomic,readonly) NSURL * upgradeUIURL; 
@property (nonatomic,readonly) NSURL * validateCodeURL; 
@property (nonatomic,readonly) NSURL * checkInURL; 
@property (nonatomic,readonly) NSURL * notificationAckURL; 
@property (nonatomic,readonly) NSURL * iForgotURL; 
@property (nonatomic,readonly) NSURL * iForgotContinuationURL; 
@property (nonatomic,readonly) NSURL * createAppleIDURL; 
@property (nonatomic,readonly) NSURL * deviceListURL; 
@property (nonatomic,readonly) NSURL * trustedDevicesURL; 
@property (nonatomic,readonly) NSURL * trustedDevicesSummaryURL; 
@property (nonatomic,readonly) NSURL * absintheCertURL; 
@property (nonatomic,readonly) NSURL * absintheSessionURL; 
@property (nonatomic,readonly) NSURL * tokenUpgradeURL; 
@property (nonatomic,readonly) NSURL * configurationInfoURL; 
@property (nonatomic,readonly) NSURL * fetchConfigDataURL; 
@property (nonatomic,readonly) NSURL * changePasswordURL; 
@property (nonatomic,readonly) NSURL * validateVettingTokenURL; 
@property (nonatomic,readonly) NSURL * renewRecoveryTokenURL; 
@property (nonatomic,readonly) NSURL * circleURL; 
@property (nonatomic,readonly) NSURL * fetchFollowUps; 
@property (nonatomic,readonly) NSURL * fetchUserInfoURL; 
@property (nonatomic,readonly) NSURL * fetchAppInfoURL; 
@property (nonatomic,readonly) NSURL * fetchPrimaryBundleIDURL; 
@property (nonatomic,readonly) NSURL * fetchAuthenticationModeURL; 
@property (nonatomic,readonly) NSURL * storeModernRecoveryURL; 
@property (nonatomic,readonly) NSURL * acsURL; 
@property (nonatomic,readonly) NSURL * repairURL; 
@property (nonatomic,readonly) NSURL * userVerificationURL; 
@property (nonatomic,readonly) NSURL * appleIDAuthorizeHTMLResponseURL; 
@property (nonatomic,readonly) NSURL * createChildAccountURL; 
@property (nonatomic,readonly) NSURL * deleteAuthorizedAppURL; 
@property (nonatomic,readonly) NSSet * appleOwnedDomains; 
@property (nonatomic,readonly) NSSet * appleIDAuthorizationURLs; 
@property (nonatomic,readonly) NSString * APSEnvironment; 
@property (nonatomic,readonly) unsigned long long IDMSEnvironment; 
@property (nonatomic,readonly) unsigned long long lastKnownIDMSEnvironment; 
@property (getter=isPhoneNumberSupportedConfig,nonatomic,readonly) BOOL phoneNumberSupportedConfig; 
@property (getter=IsInlineFlowSupportedConfig,nonatomic,readonly) BOOL inlineFlowSupportedConfig; 
@property (nonatomic,readonly) NSString * continuationHeaderPrefix; 
@property (nonatomic,readonly) NSArray * securityUpgradeServiceNames; 
+(id)sharedBag;
+(id)_requestEnvironmentsWithBag:(id)arg1 ;
+(id)bagForAltDSID:(id)arg1 ;
+(unsigned long long)IDMSEnvironmentFromBag:(id)arg1 ;
+(unsigned long long)_IDMSEnvironmentFromString:(id)arg1 ;
+(id)keyForEscapeHatchURL;
+(id)_currentBags;
+(BOOL)looksLikeiForgotURLKey:(id)arg1 ;
-(NSURL *)iForgotURL;
-(NSArray *)securityUpgradeServiceNames;
-(BOOL)IsInlineFlowSupportedConfig;
-(void)_fetchURLBagWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)syncAnisetteURL;
-(id)configurationAtKey:(id)arg1 ;
-(unsigned long long)IDMSEnvironment;
-(NSURL *)startProvisioningURL;
-(id)_urlAtKey:(id)arg1 ;
-(NSURL *)trustedDevicesSummaryURL;
-(NSURL *)endProvisioningURL;
-(NSURL *)appleIDAuthorizeHTMLResponseURL;
-(NSURL *)trustedDevicesURL;
-(id)urlAtKey:(id)arg1 ;
-(NSURL *)escapeHatchURL;
-(NSURL *)deleteAuthorizedAppURL;
-(id)_urlBagFromCache:(BOOL)arg1 withError:(id*)arg2 ;
-(NSSet *)appleOwnedDomains;
-(NSURL *)userVerificationURL;
-(NSURL *)deviceListURL;
-(NSURL *)fetchUserInfoURL;
-(NSURL *)fetchPrimaryBundleIDURL;
-(void)forceUpdateBagWithUrlSwitchData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSSet *)appleIDAuthorizationURLs;
-(NSURL *)acsURL;
-(NSURL *)validateCodeURL;
-(NSURL *)upgradeEligibilityCheckURL;
-(NSURL *)tokenUpgradeURL;
-(NSURL *)validateVettingTokenURL;
-(NSURL *)fetchAuthenticationModeURL;
-(NSString *)altDSID;
-(id)configurationAtKey:(id)arg1 fromCache:(BOOL)arg2 ;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSURL *)fetchAppInfoURL;
-(NSURL *)iForgotContinuationURL;
-(id)initWithAltDSID:(id)arg1 ;
-(NSURL *)storeModernRecoveryURL;
-(BOOL)isPhoneNumberSupportedConfig;
-(id<AKURLBagDictionaryProvider>)bagProvider;
-(NSURL *)changePasswordURL;
-(NSString *)APSEnvironment;
-(unsigned long long)lastKnownIDMSEnvironment;
-(NSURL *)fetchConfigDataURL;
-(NSURL *)fetchFollowUps;
-(NSURL *)checkInURL;
-(void)requestNewURLBagIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)absintheCertURL;
-(NSURL *)upgradeUIURL;
-(id)_configurationsFromCache:(BOOL)arg1 withError:(id*)arg2 ;
-(NSURL *)createAppleIDURL;
-(id)_requestEnvironmentsWithError:(id*)arg1 ;
-(NSURL *)notificationAckURL;
-(BOOL)requestNewURLBagIfNecessaryWithError:(id*)arg1 ;
-(NSURL *)basicAuthURL;
-(NSURL *)renewRecoveryTokenURL;
-(id)_requestNewURLBagIfNecessaryWithError:(id*)arg1 ;
-(NSURL *)absintheSessionURL;
-(NSURL *)circleURL;
-(NSURL *)repairURL;
-(void)setBagProvider:(id<AKURLBagDictionaryProvider>)arg1 ;
-(NSURL *)createChildAccountURL;
-(NSString *)continuationHeaderPrefix;
-(NSURL *)configurationInfoURL;
@end

