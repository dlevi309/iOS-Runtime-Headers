/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <MobileSafariSettings/SafariPerSitePreferenceSettingsController.h>

@class _SFUserMediaPermissionController;

@interface SafariMediaCapturePerSitePreferenceSettingsController : SafariPerSitePreferenceSettingsController {

	_SFUserMediaPermissionController* _userMediaPermissionController;

}
-(void)perSitePreferenceValueDidChange;
-(void)notifyPerSitePreferenceValueDidChange;
-(id)preference;
-(id)preferenceManager;
@end

