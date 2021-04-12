/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HFCameraPlaybackEngineObserver <NSObject>
@optional
-(void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
-(void)playbackEngine:(id)arg1 didUpdateScrubbingStatus:(BOOL)arg2;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2;
-(void)playbackEngine:(id)arg1 didUpdateTimelineState:(unsigned long long)arg2;
-(void)playbackEngine:(id)arg1 didUpdateLiveCameraSource:(id)arg2;
-(void)playbackEngine:(id)arg1 didUpdateMicrophoneEnabled:(BOOL)arg2;
-(void)playbackEngine:(id)arg1 didUpdateEvents:(id)arg2;
-(void)playbackEngine:(id)arg1 didUpdateStreamAudioEnabled:(BOOL)arg2;
-(void)playbackEngine:(id)arg1 didUpdateStreamAudioVolume:(BOOL)arg2;
-(void)playbackEngine:(id)arg1 didUpdateClipPlayer:(id)arg2;
-(void)playbackEngine:(id)arg1 didRemoveEvents:(id)arg2;

@end

