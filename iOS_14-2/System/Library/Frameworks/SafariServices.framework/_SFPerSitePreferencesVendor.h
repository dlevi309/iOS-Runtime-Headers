/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSMutableDictionary, WBSAutomaticReaderActivationManager, _SFContentBlockersPreferenceManager, _SFRequestDesktopSitePreferenceManager, _SFPageZoomPreferenceManager, _SFUserMediaPermissionController, _SFGeolocationPermissionManager;

@interface _SFPerSitePreferencesVendor : NSObject {

	NSMutableDictionary* _preferenceToManager;
	WBSAutomaticReaderActivationManager* _automaticReaderPreferenceManager;
	_SFContentBlockersPreferenceManager* _contentBlockersPreferenceManager;
	_SFRequestDesktopSitePreferenceManager* _requestDesktopSitePreferenceManager;
	_SFPageZoomPreferenceManager* _pageZoomPreferenceManager;

}

@property (nonatomic,readonly) WBSAutomaticReaderActivationManager * automaticReaderActivationManager;                    //@synthesize automaticReaderPreferenceManager=_automaticReaderPreferenceManager - In the implementation block
@property (nonatomic,readonly) _SFContentBlockersPreferenceManager * contentBlockersPreferenceManager;                    //@synthesize contentBlockersPreferenceManager=_contentBlockersPreferenceManager - In the implementation block
@property (nonatomic,readonly) _SFUserMediaPermissionController * sharedUserMediaPermissionController; 
@property (nonatomic,readonly) _SFRequestDesktopSitePreferenceManager * requestDesktopSitePreferenceManager;              //@synthesize requestDesktopSitePreferenceManager=_requestDesktopSitePreferenceManager - In the implementation block
@property (nonatomic,readonly) _SFGeolocationPermissionManager * sharedGeolocationPermissionManager; 
@property (nonatomic,readonly) _SFPageZoomPreferenceManager * pageZoomPreferenceManager;                                  //@synthesize pageZoomPreferenceManager=_pageZoomPreferenceManager - In the implementation block
-(_SFGeolocationPermissionManager *)sharedGeolocationPermissionManager;
-(WBSAutomaticReaderActivationManager *)automaticReaderActivationManager;
-(id)managerForPreference:(id)arg1 ;
-(_SFRequestDesktopSitePreferenceManager *)requestDesktopSitePreferenceManager;
-(_SFPageZoomPreferenceManager *)pageZoomPreferenceManager;
-(_SFContentBlockersPreferenceManager *)contentBlockersPreferenceManager;
-(_SFUserMediaPermissionController *)sharedUserMediaPermissionController;
-(void)dealloc;
@end

