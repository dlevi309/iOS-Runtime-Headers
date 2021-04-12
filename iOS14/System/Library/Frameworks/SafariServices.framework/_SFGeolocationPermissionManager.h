/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariShared/WBSGeolocationPreferenceManager.h>

@class UIWebGeolocationPolicyDecider, CLLocationManager;

@interface _SFGeolocationPermissionManager : WBSGeolocationPreferenceManager {

	UIWebGeolocationPolicyDecider* _policyDecider;
	CLLocationManager* _locationManager;

}
+(id)sharedManager;
-(void)_showDialogRequestingPermissionForURL:(id)arg1 frame:(id)arg2 dialogPresenter:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)hasPreciseLocationPermission;
-(void)requestPermissionForURL:(id)arg1 frame:(id)arg2 dialogPresenter:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

