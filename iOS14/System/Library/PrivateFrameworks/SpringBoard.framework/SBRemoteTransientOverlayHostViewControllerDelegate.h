/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

