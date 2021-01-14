/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIViewServiceViewControllerOperator_RemoteViewControllerInterface <_UIViewServiceDeputy_UIViewServiceInterface,_UIViewServiceUIBehaviorInterface>
@required
-(void)__hostDidEnterBackground;
-(void)__hostWillEnterForeground;
-(void)__setHostViewUnderlapsStatusBar:(BOOL)arg1;
-(void)__hostViewWillDisappear:(BOOL)arg1;
-(void)__hostDidSetPresentationControllerClassName:(id)arg1;
-(void)__hostViewDidAppear:(BOOL)arg1;
-(void)__hostDidUpdateDisplay:(id)arg1;
-(void)__exchangeAccessibilityPortInformation:(id)arg1 replyHandler:(/*^block*/id)arg2;
-(void)__hostWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
-(void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(long long)arg1;
-(void)__createViewControllerWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)__hostSceneWillEnterForeground;
-(void)__hostDidBecomeActive;
-(void)__hostViewDidMoveToScreenWithFBSDisplayIdentity:(id)arg1 newHostingHandleReplyHandler:(/*^block*/id)arg2;
-(void)__undoActionWithToken:(long long)arg1;
-(void)__setHostTraitCollection:(id)arg1 deferIfAnimated:(BOOL)arg2;
-(void)__textServiceDidDismiss;
-(void)__hostViewWillTransitionToSize:(CGSize)arg1 withContextDescription:(id)arg2 boundingPath:(id)arg3 statusBarHeight:(double)arg4 underlapsStatusBar:(BOOL)arg5 fence:(id)arg6 whenDone:(/*^block*/id)arg7;
-(void)__setContentSize:(CGSize)arg1 boundingPath:(id)arg2 withFence:(id)arg3;
-(void)__hostDidRotateFromInterfaceOrientation:(long long)arg1 skipSelf:(BOOL)arg2;
-(void)__setContentSize:(CGSize)arg1 boundingPath:(id)arg2;
-(void)__hostWillResignActive;
-(void)__hostViewDidDisappear:(BOOL)arg1;
-(void)__hostDidSetContentOverlayInsets:(UIEdgeInsets)arg1 andLeftMargin:(double)arg2 rightMargin:(double)arg3;
-(void)__hostDidChangeStatusBarHeight:(double)arg1;
-(void)__setSheetConfiguration:(id)arg1;
-(void)__hostWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
-(void)__dimmingViewWasTapped;
-(void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2;
-(void)__hostDidAttachDisplay:(id)arg1;
-(void)__hostReadyToReceiveMessagesFromServiceViewController;
-(void)__hostWillTransitionToTraitCollection:(id)arg1 withContextDescription:(id)arg2 deferIfAnimated:(BOOL)arg3 inRemoteViewHierarchy:(BOOL)arg4;
-(void)__hostDidPromoteFirstResponder;
-(void)__setServiceInPopover:(BOOL)arg1;
-(void)__hostSceneDidEnterBackground;
-(void)__scrollToTopFromTouchAtViewLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2;
-(void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(long long)arg2;
-(void)__cancelAlertActionWithToken:(long long)arg1;
-(void)__redoActionWithToken:(long long)arg1;
-(void)__hostDisablesAutomaticKeyboardBehavior:(BOOL)arg1;
-(void)__hostDidDetachDisplay:(id)arg1;
-(void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2;
-(void)__hostViewWillAppear:(BOOL)arg1 inInterfaceOrientation:(long long)arg2 traitCollection:(id)arg3 statusBarHeight:(double)arg4 underlapsStatusBar:(BOOL)arg5 completionHandler:(/*^block*/id)arg6;
-(void)__setMediaOverridePID:(int)arg1;
-(void)__setBoundingPath:(id)arg1;

@end

