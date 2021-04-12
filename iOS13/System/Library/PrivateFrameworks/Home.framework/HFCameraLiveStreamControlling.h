/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

@class HMCameraSource, NSError;


@protocol HFCameraLiveStreamControlling <NSObject>
@property (assign,nonatomic,__weak) id<HFCameraLiveStreamControllerDelegate> delegate; 
@property (getter=isStreamingEnabled,nonatomic,readonly) BOOL streamingEnabled; 
@property (nonatomic,readonly) unsigned long long streamState; 
@property (nonatomic,readonly) HMCameraSource * liveCameraSource; 
@property (nonatomic,readonly) NSError * streamError; 
@property (assign,getter=isStreamAudioEnabled,nonatomic) BOOL streamAudioEnabled; 
@property (assign,nonatomic) float streamAudioVolume; 
@property (assign,getter=isMicrophoneEnabled,nonatomic) BOOL microphoneEnabled; 
@required
-(id<HFCameraLiveStreamControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSError *)streamError;
-(void)setMicrophoneEnabled:(BOOL)arg1;
-(BOOL)isMicrophoneEnabled;
-(unsigned long long)streamState;
-(void)setStreamAudioEnabled:(BOOL)arg1;
-(void)setStreamAudioVolume:(float)arg1;
-(HMCameraSource *)liveCameraSource;
-(BOOL)isStreamingEnabled;
-(void)startStreaming;
-(void)stopStreaming;
-(BOOL)isStreamAudioEnabled;
-(float)streamAudioVolume;

@end

