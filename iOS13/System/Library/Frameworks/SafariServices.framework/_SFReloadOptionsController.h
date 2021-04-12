/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/_SFRequestDesktopSitePerSitePreferenceObserver.h>

@class _SFRequestDesktopSitePreferenceManager, NSDictionary, NSNumber, NSMutableDictionary, NSMutableSet, WKWebView, _SFInjectedJavaScriptController, NSString;

@interface _SFReloadOptionsController : NSObject <_SFRequestDesktopSitePerSitePreferenceObserver> {

	_SFRequestDesktopSitePreferenceManager* _perSitePreferenceManager;
	NSDictionary* _perSitePreferenceValues;
	NSNumber* _requestDesktopSiteDefaultValue;
	NSMutableDictionary* _domainToUserAgentPolicyMap;
	NSMutableSet* _domainsOverridenAsMobile;
	WKWebView* _webView;
	BOOL _tryUsingMobileIfPossible;
	_SFInjectedJavaScriptController* _activityJSController;
	long long _effectiveContentMode;

}

@property (nonatomic,readonly) _SFInjectedJavaScriptController * activityJSController;              //@synthesize activityJSController=_activityJSController - In the implementation block
@property (nonatomic,readonly) BOOL loadedUsingDesktopUserAgent; 
@property (assign,nonatomic) BOOL tryUsingMobileIfPossible;                                         //@synthesize tryUsingMobileIfPossible=_tryUsingMobileIfPossible - In the implementation block
@property (assign,nonatomic) long long effectiveContentMode;                                        //@synthesize effectiveContentMode=_effectiveContentMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(long long)effectiveContentMode;
-(void)didUpdateRequestDesktopSiteDefaultValue:(long long)arg1 ;
-(void)didUpdateRequestDesktopSitePerSitePreference:(id)arg1 ;
-(BOOL)loadedUsingDesktopUserAgent;
-(void)requestStandardSite;
-(void)requestDesktopSite;
-(void)customUserAgentSettingForMainFrameURL:(id)arg1 withTimeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithWebView:(id)arg1 activityJSController:(id)arg2 perSitePreferenceManager:(id)arg3 ;
-(void)setEffectiveContentMode:(long long)arg1 ;
-(void)logCompletedPageloadToDifferentialPrivacy:(id)arg1 ;
-(void)requestDesktopSiteWithURL:(id)arg1 ;
-(void)_loadPerSitePreferences;
-(BOOL)_updateSettingSource:(unsigned long long)arg1 domain:(id)arg2 ;
-(void)_overrideSettingIfNeeded:(long long)arg1 source:(unsigned long long)arg2 domain:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)didMarkURLAsNeedingDesktopUserAgent:(id)arg1 ;
-(void)didMarkURLAsNeedingStandardUserAgent:(id)arg1 ;
-(id)customUserAgentForSetting:(long long)arg1 ;
-(id)customNavigatorPlatformForSetting:(long long)arg1 ;
-(void)didSetRequestDesktopSiteDefaultValue:(long long)arg1 ;
-(void)didSetRequestDesktopSitePerSitePreferencesValues:(id)arg1 ;
-(_SFInjectedJavaScriptController *)activityJSController;
-(BOOL)tryUsingMobileIfPossible;
-(void)setTryUsingMobileIfPossible:(BOOL)arg1 ;
@end

