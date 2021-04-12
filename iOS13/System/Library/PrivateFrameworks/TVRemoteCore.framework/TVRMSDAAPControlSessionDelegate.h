/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol TVRMSDAAPControlSessionDelegate <NSObject>
@required
-(void)controlSession:(id)arg1 didUpdateNowPlayingInfo:(id)arg2;
-(void)controlSession:(id)arg1 artworkDataDidBecomeAvailable:(id)arg2 identifier:(id)arg3;
-(void)controlSession:(id)arg1 didUpdateAudioRoutes:(id)arg2;
-(void)controlSession:(id)arg1 didUpdateVolume:(float)arg2;
-(void)controlSessionDidEnd:(id)arg1;
-(void)controlSession:(id)arg1 keyboardEditingDidBegin:(id)arg2;
-(void)controlSession:(id)arg1 keyboardEditingDidEnd:(id)arg2;
-(void)controlSession:(id)arg1 didUpdateKeyboardEditingInfo:(id)arg2;

@end

