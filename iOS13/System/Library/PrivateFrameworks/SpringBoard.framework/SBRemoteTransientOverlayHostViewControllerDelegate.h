/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBRemoteTransientOverlayHostViewControllerDelegate <NSObject>
@required
-(void)remoteTransientOverlayHostViewControllerDidChangeContentOpaque:(id)arg1;
-(void)remoteTransientOverlayHostViewControllerDidChangeGestureDismissalStyles:(id)arg1;
-(void)remoteTransientOverlayHostViewControllerDidChangeFeaturePolicy:(id)arg1;
-(void)remoteTransientOverlayHostViewControllerDidChangePreferredSceneDeactivationReasonValue:(id)arg1;
-(void)remoteTransientOverlayHostViewControllerDidChangeShouldDisableOrientationUpdates:(id)arg1;
-(void)remoteTransientOverlayHostViewControllerRequestsDeactivation:(id)arg1;
-(void)remoteTransientOverlayHostViewControllerRequestsInvalidation:(id)arg1;
-(void)remoteTransientOverlayHostViewController:(id)arg1 didTerminateWithError:(id)arg2;
-(void)remoteTransientOverlayHostViewController:(id)arg1 requestsWallpaperEffectUpdateWithAnimationSettings:(id)arg2;
-(long long)defaultPreferredInterfaceOrientationForPresentationForRemoteTransientOverlayHostViewController:(id)arg1;
-(id)remoteTransientOverlayHostViewController:(id)arg1 requestsActionForHandlingButtonEvents:(unsigned long long)arg2;

@end

