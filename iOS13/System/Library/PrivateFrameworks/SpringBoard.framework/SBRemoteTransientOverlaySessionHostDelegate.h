/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBRemoteTransientOverlaySessionHostDelegate <NSObject>
@required
-(long long)activeWallpaperVariantForRemoteTransientOverlaySession:(id)arg1;
-(void)remoteTransientOverlaySession:(id)arg1 requestsHandlingForButtonEvents:(unsigned long long)arg2 viewController:(id)arg3;
-(BOOL)remoteTransientOverlaySession:(id)arg1 shouldActivateWithContext:(id)arg2;
-(BOOL)remoteTransientOverlaySession:(id)arg1 performDismissalRequest:(id)arg2;
-(BOOL)remoteTransientOverlaySession:(id)arg1 performPresentationRequest:(id)arg2;
-(BOOL)remoteTransientOverlaySession:(id)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg2;
-(void)remoteTransientOverlaySession:(id)arg1 didInvalidateWithReason:(long long)arg2 error:(id)arg3;

@end

