/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol AKURLBagDictionaryProvider;
@class NSString, NSURL, NSSet;

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
@property (nonatomic,readonly) NSSet * appleOwnedDomains; 
@property (nonatomic,readonly) NSSet * appleIDAuthorizationURLs; 
@property (nonatomic,readonly) NSString * APSEnvironment; 
@property (nonatomic,readonly) unsigned long long IDMSEnvironment; 
@property (nonatomic,readonly) unsigned long long lastKnownIDMSEnvironment; 
@property (getter=isPhoneNumberSupportedConfig,nonatomic,readonly) BOOL phoneNumberSupportedConfig; 
@property (getter=IsInlineFlowSupportedConfig,nonatomic,readonly) BOOL inlineFlowSupportedConfig; 
+(id)sharedBag;
+(id)_currentBags;
+(unsigned long long)_IDMSEnvironmentFromString:(id)arg1 ;
+(id)_requestEnvironmentsWithBag:(id)arg1 ;
+(id)bagForAltDSID:(id)arg1 ;
+(id)keyForEscapeHatchURL;
+(BOOL)looksLikeiForgotURLKey:(id)arg1 ;
+(unsigned long long)IDMSEnvironmentFromBag:(id)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSURL *)createAppleIDURL;
-(NSURL *)iForgotURL;
-(NSURL *)trustedDevicesSummaryURL;
-(void)requestNewURLBagIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)deviceListURL;
-(id)initWithAltDSID:(id)arg1 ;
-(unsigned long long)lastKnownIDMSEnvironment;
-(id)_urlAtKey:(id)arg1 ;
-(id)configurationAtKey:(id)arg1 ;
-(id)configurationAtKey:(id)arg1 fromCache:(BOOL)arg2 ;
-(id)_requestEnvironmentsWithError:(id*)arg1 ;
-(id)_configurationsFromCache:(BOOL)arg1 withError:(id*)arg2 ;
-(void)_fetchURLBagWithCompletion:(/*^block*/id)arg1 ;
-(id)_requestNewURLBagIfNecessaryWithError:(id*)arg1 ;
-(id)_urlBagFromCache:(BOOL)arg1 withError:(id*)arg2 ;
-(id<AKURLBagDictionaryProvider>)bagProvider;
-(NSURL *)basicAuthURL;
-(NSURL *)startProvisioningURL;
-(NSURL *)endProvisioningURL;
-(NSURL *)syncAnisetteURL;
-(NSURL *)upgradeEligibilityCheckURL;
-(NSURL *)upgradeUIURL;
-(NSURL *)validateCodeURL;
-(NSURL *)escapeHatchURL;
-(NSURL *)checkInURL;
-(NSURL *)notificationAckURL;
-(NSURL *)iForgotContinuationURL;
-(NSURL *)trustedDevicesURL;
-(NSURL *)absintheCertURL;
-(NSURL *)absintheSessionURL;
-(NSURL *)tokenUpgradeURL;
-(NSURL *)configurationInfoURL;
-(NSURL *)fetchConfigDataURL;
-(NSURL *)changePasswordURL;
-(NSURL *)validateVettingTokenURL;
-(NSURL *)renewRecoveryTokenURL;
-(NSURL *)circleURL;
-(NSURL *)fetchFollowUps;
-(NSURL *)fetchUserInfoURL;
-(NSURL *)fetchAppInfoURL;
-(NSURL *)fetchPrimaryBundleIDURL;
-(NSURL *)fetchAuthenticationModeURL;
-(NSURL *)storeModernRecoveryURL;
-(BOOL)isPhoneNumberSupportedConfig;
-(NSURL *)acsURL;
-(NSURL *)repairURL;
-(NSURL *)userVerificationURL;
-(NSSet *)appleOwnedDomains;
-(NSSet *)appleIDAuthorizationURLs;
-(NSURL *)appleIDAuthorizeHTMLResponseURL;
-(NSString *)APSEnvironment;
-(unsigned long long)IDMSEnvironment;
-(BOOL)IsInlineFlowSupportedConfig;
-(BOOL)requestNewURLBagIfNecessaryWithError:(id*)arg1 ;
-(id)urlAtKey:(id)arg1 ;
-(void)forceUpdateBagWithUrlSwitchData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBagProvider:(id<AKURLBagDictionaryProvider>)arg1 ;
@end

