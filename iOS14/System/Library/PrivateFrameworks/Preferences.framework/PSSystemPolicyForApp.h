/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@protocol PSSystemPolicyForAppDelegate;
#import <Preferences/Preferences-Structs.h>
@class PSPhotosPolicyController, PSContactsPolicyController, PSAccountEnumerator, NEConfiguration, NSString;

@interface PSSystemPolicyForApp : NSObject {

	unsigned long long _policyOptions;
	BOOL _forcePolicyOptions;
	PSPhotosPolicyController* _photosPrivacyController;
	PSContactsPolicyController* _contactsPrivacyController;
	PSAccountEnumerator* _accountEnumerator;
	NEConfiguration* _pathControllerConfiguration;
	BOOL _enServiceMatched;
	id<PSSystemPolicyForAppDelegate> _delegate;
	NSString* _bundleIdentifier;
	NSString* _matchingBundleIdentifier;

}

@property (assign,nonatomic) BOOL enServiceMatched;                                         //@synthesize enServiceMatched=_enServiceMatched - In the implementation block
@property (nonatomic,retain) NSString * matchingBundleIdentifier;                           //@synthesize matchingBundleIdentifier=_matchingBundleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<PSSystemPolicyForAppDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)isServiceRestricted:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)specifiers;
-(id<PSSystemPolicyForAppDelegate>)delegate;
-(NSString *)bundleIdentifier;
-(void)setDelegate:(id<PSSystemPolicyForAppDelegate>)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)specifiersForPolicyOptions:(unsigned long long)arg1 force:(BOOL)arg2 ;
-(id)privacySpecifiers;
-(id)assistantAndSearchSpecifiers;
-(id)notificationSpecifier;
-(id)privacySpecifierForService:(CFStringRef)arg1 ;
-(id)backgroundAppRefreshSpecifier;
-(id)documentsSpecifier;
-(id)wirelessDataSpecifierWithAppName:(id)arg1 ;
-(id)exposureSpecifiers;
-(id)defaultBrowserSpecifier;
-(id)defaultMailAppSpecifier;
-(id)trackingSpecifiers;
-(id)preferredLanguageSpecifier;
-(id)accountsSpecifier;
-(void)_handleAddAccountButtonAction:(id)arg1 ;
-(id)dataUsageWorkspaceInfo;
-(BOOL)_accountModificationDisabledByRestrictions;
-(BOOL)isCellularBundleID:(id)arg1 ;
-(id)locationStatus:(id)arg1 ;
-(BOOL)_isWirelessDataRestricted;
-(BOOL)_supportsBackgroundAppRefresh;
-(void)setBackgroundRefreshEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)isBackgroundRefreshEnabled:(id)arg1 ;
-(BOOL)_isBackgroundAppRefreshAllowed;
-(BOOL)getMulticastAllowed:(BOOL*)arg1 ;
-(void)loadNetworkConfigurationsForceRefresh:(BOOL)arg1 ;
-(id)pathRuleForBundleID:(id)arg1 create:(BOOL)arg2 ;
-(void)saveNetworkConfiguration;
-(void)setupNetworkConfiguration;
-(id)isLocalNetworkEnabled:(id)arg1 ;
-(void)setLocalNetworkEnabled:(id)arg1 specifier:(id)arg2 ;
-(BOOL)_isLocationServicesRestricted;
-(id)authLevelStringForStatus:(unsigned long long)arg1 ;
-(id)locationServicesSpecifier;
-(id)photosServicesSpecifier;
-(id)networkServicesSpecifier;
-(id)_privacyAccessForService:(CFStringRef)arg1 ;
-(void)setPrivacyAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)privacyAccessForSpecifier:(id)arg1 ;
-(BOOL)enServiceMatched;
-(CFBundleRef)copyTCCBundleForService:(CFStringRef)arg1 ;
-(id)documentSource:(id)arg1 ;
-(void)setEnServiceMatched:(BOOL)arg1 ;
-(NSString *)matchingBundleIdentifier;
-(void)setMatchingBundleIdentifier:(NSString *)arg1 ;
-(id)preferredLanguage:(id)arg1 ;
-(id)defaultBrowser:(id)arg1 ;
-(void)setDefaultBrowser:(id)arg1 specifier:(id)arg2 ;
-(id)defaultMailApp:(id)arg1 ;
-(void)headerLinkWasTapped;
-(id)defaultAppSpecifierWithAppRecordsMatchingBlock:(/*^block*/id)arg1 getter:(SEL)arg2 setter:(SEL)arg3 title:(id)arg4 ;
-(void)setDefaultMailApp:(id)arg1 specifier:(id)arg2 ;
-(id)contactsServicesSpecifier;
@end

