/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBRemoteTransientOverlaySessionHostDelegate <NSObject>
@required
-(BOOL)remoteTransientOverlaySession:(id)arg1 shouldActivateWithContext:(id)arg2;
-(void)remoteTransientOverlaySession:(id)arg1 didInvalidateWithReason:(long long)arg2 error:(id)arg3;
-(void)remoteTransientOverlaySession:(id)arg1 requestsHandlingForButtonEvents:(unsigned long long)arg2 viewController:(id)arg3;
-(BOOL)remoteTransientOverlaySession:(id)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg2;
-(BOOL)remoteTransientOverlaySession:(id)arg1 performDismissalRequest:(id)arg2;
-(BOOL)remoteTransientOverlaySession:(id)arg1 performPresentationRequest:(id)arg2;
-(long long)activeWallpaperVariantForRemoteTransientOverlaySession:(id)arg1;

@end

