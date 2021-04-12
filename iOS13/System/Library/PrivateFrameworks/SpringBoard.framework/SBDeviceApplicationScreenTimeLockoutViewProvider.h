/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBDeviceApplicationSceneOverlayViewProvider.h>
#import <libobjc.A.dylib/LOViewControllerDelegate.h>

@protocol LOViewController;
@class UIViewController, NSString;

@interface SBDeviceApplicationScreenTimeLockoutViewProvider : SBDeviceApplicationSceneOverlayViewProvider <LOViewControllerDelegate> {

	UIViewController*<LOViewController> _lockoutViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)lockoutViewControllerDidFinishDismissing:(id)arg1 ;
-(id)initWithSceneHandle:(id)arg1 delegate:(id)arg2 ;
-(void)_handleInstalledAppsChanged:(id)arg1 ;
-(void)_activateIfPossible;
-(void)_deactivateIfPossible;
-(id)_newLockoutViewControllerWithBundleIdentifier:(id)arg1 ;
-(id)_realOverlayViewController;
@end

