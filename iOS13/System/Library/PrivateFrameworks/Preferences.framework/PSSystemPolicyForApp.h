/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


#import <Preferences/Preferences-Structs.h>
@class PSPhotosPolicyController, NSString;

@interface PSSystemPolicyForApp : NSObject {

	unsigned long long _policyOptions;
	BOOL _forcePolicyOptions;
	PSPhotosPolicyController* _photosPrivacyController;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)isServiceRestricted:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)specifiers;
-(id)specifiersForPolicyOptions:(unsigned long long)arg1 force:(BOOL)arg2 ;
-(id)privacySpecifiers;
-(id)assistantAndSearchSpecifiers;
-(id)notificationSpecifier;
-(id)privacySpecifierForService:(CFStringRef)arg1 ;
-(id)backgroundAppRefreshSpecifier;
-(id)wirelessDataSpecifierWithAppName:(id)arg1 ;
-(id)documentsSpecifier;
-(id)preferredLanguageSpecifier;
-(id)dataUsageWorkspaceInfo;
-(BOOL)isCellularBundleID:(id)arg1 ;
-(BOOL)_isWirelessDataRestricted;
-(BOOL)_supportsBackgroundAppRefresh;
-(void)setBackgroundRefreshEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)isBackgroundRefreshEnabled:(id)arg1 ;
-(BOOL)_isBackgroundAppRefreshAllowed;
-(id)locationStatus:(id)arg1 ;
-(BOOL)_isLocationServicesRestricted;
-(id)authLevelStringForStatus:(unsigned long long)arg1 ;
-(id)locationServicesSpecifier;
-(id)photosServicesSpecifier;
-(id)_privacyAccessForService:(CFStringRef)arg1 ;
-(void)setPrivacyAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)privacyAccessForSpecifier:(id)arg1 ;
-(CFBundleRef)copyTCCBundleForService:(CFStringRef)arg1 ;
-(id)documentSource:(id)arg1 ;
-(id)preferredLanguage:(id)arg1 ;
@end

