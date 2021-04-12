/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBRemoteTransientOverlayViewControllerDelegate <NSObject>
@optional
-(void)remoteTransientOverlayViewController:(id)arg1 didAppearAnimated:(BOOL)arg2;
-(void)remoteTransientOverlayViewController:(id)arg1 didDisappearAnimated:(BOOL)arg2;
-(void)remoteTransientOverlayViewController:(id)arg1 willAppearAnimated:(BOOL)arg2;
-(void)remoteTransientOverlayViewController:(id)arg1 willDisappearAnimated:(BOOL)arg2;

@required
-(void)remoteTransientOverlayViewControllerRequestsDeactivation:(id)arg1;
-(void)remoteTransientOverlayViewControllerRequestsInvalidation:(id)arg1;
-(void)remoteTransientOverlayViewController:(id)arg1 didTerminateWithError:(id)arg2;
-(id)remoteTransientOverlayViewController:(id)arg1 requestsActionForHandlingButtonEvents:(unsigned long long)arg2;
-(BOOL)remoteTransientOverlayViewController:(id)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg2;
-(void)remoteTransientOverlayViewControllerDidInvalidate:(id)arg1;

@end

