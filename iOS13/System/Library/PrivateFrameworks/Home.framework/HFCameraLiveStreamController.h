/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFCameraObserver.h>
#import <libobjc.A.dylib/HFCameraLiveStreamControlling.h>

@protocol HFCameraLiveStreamControllerDelegate;
@class HMCameraSource, NSError, HMHome, HMCameraProfile, HFCameraAudioManager, NSString;

@interface HFCameraLiveStreamController : NSObject <HFCameraObserver, HFCameraLiveStreamControlling> {

	BOOL _microphoneEnabled;
	BOOL _streamAudioEnabled;
	BOOL _startStreamingAfterStop;
	float _streamAudioVolume;
	id<HFCameraLiveStreamControllerDelegate> _delegate;
	HMCameraSource* _liveCameraSource;
	NSError* _streamError;
	HMHome* _home;
	HMCameraProfile* _cameraProfile;
	HFCameraAudioManager* _audioManager;
	unsigned long long _inferredStreamState;

}

@property (nonatomic,retain) HFCameraAudioManager * audioManager;                                   //@synthesize audioManager=_audioManager - In the implementation block
@property (assign,nonatomic) unsigned long long inferredStreamState;                                //@synthesize inferredStreamState=_inferredStreamState - In the implementation block
@property (assign,nonatomic) BOOL startStreamingAfterStop;                                          //@synthesize startStreamingAfterStop=_startStreamingAfterStop - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                       //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMCameraProfile * cameraProfile;                                     //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HFCameraLiveStreamControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isStreamingEnabled,nonatomic,readonly) BOOL streamingEnabled; 
@property (nonatomic,readonly) unsigned long long streamState; 
@property (nonatomic,readonly) HMCameraSource * liveCameraSource;                                   //@synthesize liveCameraSource=_liveCameraSource - In the implementation block
@property (nonatomic,readonly) NSError * streamError;                                               //@synthesize streamError=_streamError - In the implementation block
@property (assign,getter=isStreamAudioEnabled,nonatomic) BOOL streamAudioEnabled;                   //@synthesize streamAudioEnabled=_streamAudioEnabled - In the implementation block
@property (assign,nonatomic) float streamAudioVolume;                                               //@synthesize streamAudioVolume=_streamAudioVolume - In the implementation block
@property (assign,getter=isMicrophoneEnabled,nonatomic) BOOL microphoneEnabled;                     //@synthesize microphoneEnabled=_microphoneEnabled - In the implementation block
-(id)init;
-(void)dealloc;
-(id<HFCameraLiveStreamControllerDelegate>)delegate;
-(void)setDelegate:(id<HFCameraLiveStreamControllerDelegate>)arg1 ;
-(NSError *)streamError;
-(HMHome *)home;
-(HMCameraProfile *)cameraProfile;
-(void)setMicrophoneEnabled:(BOOL)arg1 ;
-(BOOL)isMicrophoneEnabled;
-(unsigned long long)streamState;
-(void)cameraStreamControlDidStartStream:(id)arg1 ;
-(void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2 ;
-(id)mostRecentSnapshot;
-(void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1 ;
-(void)cameraStreamControlDidUpdateStreamState:(id)arg1 ;
-(void)cameraStreamControlDidUpdateManagerState:(id)arg1 ;
-(void)setStreamAudioEnabled:(BOOL)arg1 ;
-(void)setStreamAudioVolume:(float)arg1 ;
-(id)initWithHome:(id)arg1 cameraProfile:(id)arg2 ;
-(HMCameraSource *)liveCameraSource;
-(BOOL)isStreamingEnabled;
-(void)startStreaming;
-(void)stopStreaming;
-(BOOL)isStreamAudioEnabled;
-(float)streamAudioVolume;
-(id)activeStream;
-(unsigned long long)inferredStreamState;
-(void)setStartStreamingAfterStop:(BOOL)arg1 ;
-(void)setInferredStreamState:(unsigned long long)arg1 ;
-(void)_updateAudioManagerState;
-(HFCameraAudioManager *)audioManager;
-(void)setAudioManager:(HFCameraAudioManager *)arg1 ;
-(unsigned long long)_derivedAudioStreamSetting;
-(BOOL)startStreamingAfterStop;
@end

