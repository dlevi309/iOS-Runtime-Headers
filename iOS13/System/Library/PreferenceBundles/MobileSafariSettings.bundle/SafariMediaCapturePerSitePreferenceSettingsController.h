/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <MobileSafariSettings/SafariPerSitePreferenceSettingsController.h>

@class _SFUserMediaPermissionController;

@interface SafariMediaCapturePerSitePreferenceSettingsController : SafariPerSitePreferenceSettingsController {

	_SFUserMediaPermissionController* _userMediaPermissionController;

}
-(id)preference;
-(void)perSitePreferenceValueDidChange;
-(void)notifyPerSitePreferenceValueDidChange;
-(id)preferenceManager;
@end

