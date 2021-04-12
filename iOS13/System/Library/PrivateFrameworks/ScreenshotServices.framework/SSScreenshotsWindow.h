/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <UIKitCore/UIWindow.h>
#import <libobjc.A.dylib/SSDittoHostViewControllerDelegate.h>
#import <libobjc.A.dylib/SSActiveInterfaceOrientationObserverDelegate.h>

@protocol OS_dispatch_queue;
@class SSActiveInterfaceOrientationObserver, SSScreenshotsWindowRootViewController, NSObject;

@interface SSScreenshotsWindow : UIWindow <SSDittoHostViewControllerDelegate, SSActiveInterfaceOrientationObserverDelegate> {

	SSActiveInterfaceOrientationObserver* _activeInterfaceOrientationObserver;
	SSScreenshotsWindowRootViewController* _root;
	long long _lastActiveInterfaceOrientation;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	int _lockNotificationToken;
	int _backlightNotificationToken;

}
+(BOOL)_isSecure;
-(id)init;
-(void)dealloc;
-(void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2 ;
-(void)_dismiss;
-(BOOL)_shouldControlAutorotation;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)_canBecomeKeyWindow;
-(void)remoteViewControllerDisconnectedFromHostViewController:(id)arg1 withError:(id)arg2 ;
-(void)remoteViewControllerOfHostViewControllerHasDismissedScreenshots:(id)arg1 ;
-(void)_deviceLockStateChanged:(unsigned long long)arg1 ;
-(void)_deviceBacklightChanged:(unsigned long long)arg1 ;
-(void)_prepareRemoteViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_hostViewControllerIfExists;
-(void)activeInterfaceOrientationObserver:(id)arg1 observedChangeToInterfaceOrientation:(long long)arg2 withDuration:(double)arg3 ;
-(void)activateRemoteViewControllerIfAppropriate;
@end

