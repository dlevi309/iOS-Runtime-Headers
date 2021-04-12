/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariShared/WBSGeolocationPreferenceManager.h>

@class UIWebGeolocationPolicyDecider;

@interface _SFGeolocationPermissionManager : WBSGeolocationPreferenceManager {

	UIWebGeolocationPolicyDecider* _policyDecider;

}
+(id)sharedManager;
-(void)requestPermissionForURL:(id)arg1 frame:(id)arg2 dialogPresenter:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_showDialogRequestingPermissionForURL:(id)arg1 frame:(id)arg2 dialogPresenter:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

