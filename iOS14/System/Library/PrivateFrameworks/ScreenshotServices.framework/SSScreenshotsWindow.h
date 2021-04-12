/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <UIKitCore/UIWindow.h>
#import <libobjc.A.dylib/SSDittoHostViewControllerDelegate.h>
#import <libobjc.A.dylib/SSActiveInterfaceOrientationObserverDelegate.h>

@protocol OS_dispatch_queue, SSScreenshotsWindowDelegate;
@class SSActiveInterfaceOrientationObserver, SSScreenshotsWindowRootViewController, NSObject;

@interface SSScreenshotsWindow : UIWindow <SSDittoHostViewControllerDelegate, SSActiveInterfaceOrientationObserverDelegate> {

	SSActiveInterfaceOrientationObserver* _activeInterfaceOrientationObserver;
	SSScreenshotsWindowRootViewController* _root;
	long long _lastActiveInterfaceOrientation;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	int _lockNotificationToken;
	int _backlightNotificationToken;
	id<SSScreenshotsWindowDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSScreenshotsWindowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)_isSecure;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2 ;
-(BOOL)_canBecomeKeyWindow;
-(void)_prepareRemoteViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(id<SSScreenshotsWindowDelegate>)delegate;
-(id)_hostViewControllerIfExists;
-(BOOL)_shouldControlAutorotation;
-(void)_dismiss;
-(void)activateRemoteViewControllerIfAppropriate;
-(void)setDelegate:(id<SSScreenshotsWindowDelegate>)arg1 ;
-(void)remoteViewControllerDisconnectedFromHostViewController:(id)arg1 withError:(id)arg2 ;
-(void)remoteViewControllerOfHostViewControllerHasDismissedScreenshots:(id)arg1 ;
-(void)_deviceLockStateChanged:(unsigned long long)arg1 ;
-(void)_deviceBacklightChanged:(unsigned long long)arg1 ;
-(void)activeInterfaceOrientationObserver:(id)arg1 observedChangeToInterfaceOrientation:(long long)arg2 withDuration:(double)arg3 ;
-(void)dealloc;
@end

