/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBRemoteTransientOverlaySessionManagerDelegate
@required
-(long long)remoteTransientOverlaySessionManager:(id)arg1 activeWallpaperVariantForSession:(id)arg2;
-(BOOL)remoteTransientOverlaySessionManager:(id)arg1 shouldActivateOverlayWithContext:(id)arg2 forSession:(id)arg3;
-(BOOL)remoteTransientOverlaySessionManager:(id)arg1 performDismissalRequest:(id)arg2 forSession:(id)arg3;
-(BOOL)remoteTransientOverlaySessionManager:(id)arg1 performPresentationRequest:(id)arg2 forSession:(id)arg3;
-(BOOL)remoteTransientOverlaySessionManager:(id)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg2 forSession:(id)arg3;
-(void)remoteTransientOverlaySessionManager:(id)arg1 requestsHandlingForButtonEvents:(unsigned long long)arg2 forSession:(id)arg3 viewController:(id)arg4;

@end

