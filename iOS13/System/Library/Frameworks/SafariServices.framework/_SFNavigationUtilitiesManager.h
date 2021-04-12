/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class _SFPerSitePreferencesVendor, NSNumber, _SFReloadOptionsController;

@interface _SFNavigationUtilitiesManager : NSObject {

	_SFPerSitePreferencesVendor* _preferencesVendor;
	NSNumber* _cachedPlayingPauseQuirkEnabled;
	NSNumber* _cachedPerDocumentAutoplayBehaviorQuirkEnabled;
	_SFReloadOptionsController* _reloadOptionsController;
	unsigned long long _persona;

}

@property (assign,nonatomic,__weak) _SFReloadOptionsController * reloadOptionsController;              //@synthesize reloadOptionsController=_reloadOptionsController - In the implementation block
@property (assign,nonatomic) unsigned long long persona;                                               //@synthesize persona=_persona - In the implementation block
-(void)websitePoliciesForURL:(id)arg1 isForMainFrameNavigation:(BOOL)arg2 navigationType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(_SFReloadOptionsController *)reloadOptionsController;
-(void)_applyAutoplayQuirksToWebsitePolicies:(id)arg1 desktopSiteSetting:(long long)arg2 ;
-(BOOL)_shouldOverrideUserAgentSettingForFacebookAuthURL:(id)arg1 ;
-(id)initWithPerSitePreferencesVendor:(id)arg1 ;
-(void)setReloadOptionsController:(_SFReloadOptionsController *)arg1 ;
-(unsigned long long)persona;
-(void)setPersona:(unsigned long long)arg1 ;
@end

