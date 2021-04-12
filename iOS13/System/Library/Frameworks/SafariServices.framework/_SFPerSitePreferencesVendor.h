/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(WBSAutomaticReaderActivationManager *)automaticReaderActivationManager;
-(_SFContentBlockersPreferenceManager *)contentBlockersPreferenceManager;
-(_SFUserMediaPermissionController *)sharedUserMediaPermissionController;
-(_SFGeolocationPermissionManager *)sharedGeolocationPermissionManager;
-(_SFRequestDesktopSitePreferenceManager *)requestDesktopSitePreferenceManager;
-(_SFPageZoomPreferenceManager *)pageZoomPreferenceManager;
-(id)managerForPreference:(id)arg1 ;
@end

