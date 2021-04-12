/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBDeviceApplicationSceneOverlayViewProvider.h>

@class STBlockingViewController;

@interface SBDeviceApplicationScreenTimeLockoutViewProvider : SBDeviceApplicationSceneOverlayViewProvider {

	STBlockingViewController* _blockingViewController;
	BOOL _isActive;

}
-(id)_newBlockingViewControllerWithBundleIdentifier:(id)arg1 ;
-(void)_deactivateIfPossible;
-(void)_activateIfPossible;
-(void)showContentWithAnimation:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleInstalledAppsChanged:(id)arg1 ;
-(id)initWithSceneHandle:(id)arg1 delegate:(id)arg2 ;
-(id)_realOverlayViewController;
-(long long)priority;
-(void)hideContentWithAnimation:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

