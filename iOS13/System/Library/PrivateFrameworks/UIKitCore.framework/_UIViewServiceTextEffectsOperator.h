/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIHostedWindowDelegate.h>
#import <UIKitCore/_UIViewServiceTextEffectsOperator_RemoteViewControllerInterface.h>
#import <UIKitCore/_UIViewServiceDeputy.h>
#import <UIKitCore/_UIViewServiceDeputyRotationDelegate.h>

@class _UIAsyncInvocation, _UIHostedWindow, NSArray, NSString;

@interface _UIViewServiceTextEffectsOperator : NSObject <_UIHostedWindowDelegate, _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate> {

	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;
	id _remoteViewControllerProxy;
	BOOL _wasInvalidated;
	_UIAsyncInvocation* _prepareForDisconnectionInvocation;
	_UIAsyncInvocation* _invalidationInvocation;
	_UIHostedWindow* _hostedWindow;
	CGPoint _windowOffset;
	UIEdgeInsets _safeAreaInsets;
	CGSize _sceneSize;
	BOOL _canRestoreInputViews;
	BOOL _isRestoringInputViews;
	BOOL _didResignForDisappear;
	BOOL _localVCDisablesAutomaticBehaviors;
	NSArray* _allowedNotifications;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)XPCInterface;
+(BOOL)_shouldAddServiceOperator;
+(id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 ;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)invalidate;
-(id)_queue;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(int)__automatic_invalidation_logic;
-(void)__setWindowOffset:(CGPoint)arg1 ;
-(void)__setSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)__setSceneSize:(CGSize)arg1 ;
-(void)__createHostedTextEffectsWithReplyHandler:(/*^block*/id)arg1 ;
-(void)__setHostAllowedNotifications:(id)arg1 ;
-(void)__hostWillEnterForeground;
-(void)__hostDidEnterBackground;
-(void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2 ;
-(void)__hostViewWillAppear:(BOOL)arg1 ;
-(void)__hostViewWillDisappear:(BOOL)arg1 ;
-(void)__prepareForDisconnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_invalidateUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)_prepareForDisconnectionUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)forceSyncToStatusBarOrientation;
-(void)_reloadSafeInsets;
-(void)makeHostWindowKey;
-(void)_viewServiceHostWillEnterForeground:(id)arg1 ;
-(void)_resetSceneSize;
-(void)_restoreInputViews;
-(void)performOnRelevantWindows:(/*^block*/id)arg1 ;
-(void)rotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)finishRotationFromInterfaceOrientation:(long long)arg1 ;
-(void)hostedWindow:(id)arg1 didSetFirstResponder:(id)arg2 ;
-(void)hostedWindow:(id)arg1 didSetResponderTargetForCalloutBar:(id)arg2 ;
-(void)setHostedWindow:(id)arg1 disableAutomaticBehaviors:(BOOL)arg2 ;
@end

