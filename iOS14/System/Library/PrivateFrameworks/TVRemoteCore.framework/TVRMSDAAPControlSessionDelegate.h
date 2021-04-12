/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

