/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>
#import <libobjc.A.dylib/BWAudioSourceRecordingReadinessDelegate.h>
#import <libobjc.A.dylib/BWZoomCompletionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class BWNodeOutput, NSObject, NSArray, NSString;

@interface BWAudioSourceNode : BWSourceNode <BWAudioSourceRecordingReadinessDelegate, BWZoomCompletionDelegate> {

	BWNodeOutput* _outputsByMicSourcePosition[3];
	opaqueCMSessionRef _CMSession;
	CFStringRef _CMSessionAudioMode;
	BOOL _configuresSession;
	BOOL _doEndInterruption;
	BOOL _useDecoupledIO;
	BOOL _isAppAudioSession;
	BOOL _didBeginInterruption;
	SCD_Struct_BW60 _clientAuditToken;
	BOOL _clientAuditTokenIsValid;
	int _clientPID;
	OpaqueCMClockRef _clock;
	opaqueCMFormatDescriptionRef _auOutputFormatDescription;
	unsigned _pullDuration;
	OpaqueAudioComponentInstanceRef _audioUnit;
	unsigned _auSubType;
	opaqueCMSimpleQueueRef _renderProcErrorQueue;
	opaqueCMSimpleQueueRef _inactiveBuffersQueue;
	opaqueCMSimpleQueueRef _activeBuffersQueue;
	unsigned long long _nextExpectedHostTime;
	SCD_Struct_BW2 _nextExpectedSampleTime;
	SCD_Struct_BW2 _ioprocTimeStampDeltaLimit;
	SCD_Struct_BW2 _prevPTS;
	unsigned _prevNumFrames;
	NSObject*<OS_dispatch_queue> _generateSamplesDispatchQueue;
	BOOL _streamStarted;
	BOOL _streamInterrupted;
	BOOL _levelMeteringEnabled;
	int _audioLevelUnits;
	SCD_Struct_BW2 _latencyOffset;
	NSObject*<OS_dispatch_source> _silenceTimer;
	long long _auRenderCount;
	long long _silenceFramesGeneratedSinceLastAURenderProc;
	TimestampedAudioBufferList* _currentSilenceBuffer;
	NSObject*<OS_dispatch_queue> _cmSessionOrientationLockQueue;
	NSObject*<OS_dispatch_queue> _preparedToRecordHandlerCallbackQueue;
	BOOL _livePhotoCaptureEnabled;
	BOOL _stereoAudioCaptureEnabled;
	BOOL _videoRecordingEnabled;
	BOOL _isMultiCamSession;
	float _stereoAudioCapturePairedCameraBaseFieldOfView;
	float _stereoAudioCapturePairedCameraZoomFactor;

}

@property (nonatomic,readonly) NSArray * audioLevels; 
@property (nonatomic,readonly) BOOL didBeginInterruption;                                 //@synthesize didBeginInterruption=_didBeginInterruption - In the implementation block
@property (assign,nonatomic) BOOL interrupted;                                            //@synthesize streamInterrupted=_streamInterrupted - In the implementation block
@property (assign,nonatomic) float stereoAudioCapturePairedCameraZoomFactor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(double)_desiredSampleRate;
+(id)audioSourceNodeWithAttributes:(id)arg1 clock:(OpaqueCMClockRef)arg2 CMSession:(opaqueCMSessionRef)arg3 configureSession:(BOOL)arg4 doEndInterruption:(BOOL)arg5 clientToken:(id)arg6 clientPID:(int)arg7 clientVersionOfLinkedSDK:(unsigned)arg8 audioCaptureConnectionConfigurations:(id)arg9 isMultiCamSession:(BOOL)arg10 ;
-(void)dealloc;
-(BOOL)interrupted;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(void)setInterrupted:(BOOL)arg1 ;
-(OpaqueCMClockRef)clock;
-(BOOL)livePhotoCaptureEnabled;
-(void)setLivePhotoCaptureEnabled:(BOOL)arg1 ;
-(id)nodeSubType;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(BOOL)didBeginInterruption;
-(NSArray *)audioLevels;
-(int)_setCMSessionAudioModeAndSelectMic:(BOOL*)arg1 ;
-(BOOL)_cmSessionBooleanPropertyIsTrue:(CFStringRef)arg1 ;
-(int)_updatePullFormatDescription;
-(int)_setCMSessionPropertyWithKey:(CFStringRef)arg1 value:(void*)arg2 ;
-(void)_generateSilenceIfNeeded;
-(void)makeOutputsLiveIfNeeded;
-(id)_initWithAttributes:(id)arg1 clock:(OpaqueCMClockRef)arg2 CMSession:(opaqueCMSessionRef)arg3 configureSession:(BOOL)arg4 doEndInterruption:(BOOL)arg5 clientToken:(id)arg6 clientPID:(int)arg7 clientVersionOfLinkedSDK:(unsigned)arg8 audioCaptureConnectionConfigurations:(id)arg9 isMultiCamSession:(BOOL)arg10 ;
-(int)_setupAudioUnit;
-(void)setStereoAudioCapturePairedCameraZoomFactor:(float)arg1 ;
-(int)_deactivateCMSessionIfNecessary:(BOOL*)arg1 ;
-(unsigned)_virtualAudioDeviceCameraMics;
-(void)_updateCMSessionAudioMode;
-(int)_configureCMSessionWithDefaultHardwareSampleRate:(double)arg1 didCallDoNotNotifyOtherSessionsOnNextInactive:(BOOL*)arg2 ;
-(int)_selectMicForAudioRoute:(id)arg1 ;
-(int)_getAudioDevicePullFrames:(unsigned*)arg1 ;
-(int)_generatePullBuffers;
-(unsigned)_audioCombinedLatency;
-(opaqueCMSampleBufferRef)_createSampleBufferForTimestampedAudioBufferList:(TimestampedAudioBufferList*)arg1 audioBufferIndex:(int)arg2 ;
-(void)_setupPrepareToRecordStateWithFlags:(unsigned)arg1 ;
-(void)prepareToStartRecordingWithOrientation:(int)arg1 recordingSettingsID:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)unprepareForRecording;
-(void)zoomCommandHandler:(id)arg1 didApplyZoomFactor:(float)arg2 zoomFactorWithoutFudge:(float)arg3 rampComplete:(BOOL)arg4 rampCommandID:(int)arg5 ;
-(void)makeCurrentConfigurationLive;
-(BOOL)hasNonLiveConfigurationChanges;
-(BOOL)levelMeteringEnabled;
-(void)setLevelMeteringEnabled:(BOOL)arg1 ;
-(BOOL)stereoAudioCaptureEnabled;
-(void)setStereoAudioCaptureEnabled:(BOOL)arg1 ;
-(BOOL)videoRecordingEnabled;
-(void)setVideoRecordingEnabled:(BOOL)arg1 ;
-(id)outputForMicSourcePosition:(int)arg1 ;
-(float)stereoAudioCapturePairedCameraBaseFieldOfView;
-(void)setStereoAudioCapturePairedCameraBaseFieldOfView:(float)arg1 ;
-(float)stereoAudioCapturePairedCameraZoomFactor;
-(void)_generateSamples;
@end

