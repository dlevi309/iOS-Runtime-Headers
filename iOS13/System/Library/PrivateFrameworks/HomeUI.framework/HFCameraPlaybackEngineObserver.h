/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HFCameraPlaybackEngineObserver <NSObject>
@optional
-(void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
-(void)playbackEngine:(id)arg1 didUpdateScrubbingStatus:(BOOL)arg2;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2;
-(void)playbackEngine:(id)arg1 didUpdateLiveCameraSource:(id)arg2;
-(void)playbackEngine:(id)arg1 didUpdateMicrophoneEnabled:(BOOL)arg2;
-(void)playbackEngine:(id)arg1 didUpdateStreamAudioEnabled:(BOOL)arg2;
-(void)playbackEngine:(id)arg1 didUpdateStreamAudioVolume:(BOOL)arg2;
-(void)playbackEngine:(id)arg1 didUpdateClipManager:(id)arg2;
-(void)playbackEngine:(id)arg1 didUpdateClipPlayer:(id)arg2;
-(void)playbackEngine:(id)arg1 didUpdateClips:(id)arg2;
-(void)playbackEngine:(id)arg1 didRemoveClips:(id)arg2;

@end

