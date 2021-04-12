/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>
#import <libobjc.A.dylib/VCMediaStreamDelegate.h>
#import <libobjc.A.dylib/VCSecurityEventHandler.h>
#import <libobjc.A.dylib/VCAudioIOSink.h>
#import <libobjc.A.dylib/VCAudioIODelegate.h>
#import <libobjc.A.dylib/VCConnectionChangedHandler.h>
#import <libobjc.A.dylib/VCRedundancyControllerDelegate.h>
#import <libobjc.A.dylib/VCAudioPowerSpectrumSourceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSData, VCCallInfoBlob, NSDictionary, VCAudioRuleCollection, NSMutableSet, NSMutableArray, NSMutableDictionary, AVCStatisticsCollector, AVCBasebandCongestionDetector, VCAudioIO, VCMediaNegotiator, VCRedundancyControllerAudio, VCRedundancyControllerVideo, NSArray;

@interface VCSessionParticipant : VCObject <VCMediaStreamDelegate, VCSecurityEventHandler, VCAudioIOSink, VCAudioIODelegate, VCConnectionChangedHandler, VCRedundancyControllerDelegate, VCAudioPowerSpectrumSourceDelegate> {

	unsigned _state;
	tagNTP _creationTime;
	NSObject*<OS_dispatch_queue> _participantQueue;
	int _processId;
	id _delegate;
	id _streamDelegate;
	long long _participantVideoToken;
	unsigned long long _spatialAudioSourceID;
	NSString* _uuid;
	NSString* _sessionUUID;
	NSString* _idsDestination;
	unsigned long long _idsParticipantID;
	NSData* _opaqueData;
	VCCallInfoBlob* _callInfoBlob;
	NSData* _mediaBlobCompressed;
	NSDictionary* _participantInfo;
	unsigned _transportSessionID;
	VCAudioRuleCollection* _supportedAudioRules;
	int _deviceRole;
	NSMutableSet* _startingAudioStreams;
	NSMutableSet* _stoppingAudioStreams;
	NSMutableSet* _runningAudioStreams;
	NSMutableSet* _pausingAudioStreams;
	NSMutableSet* _resumingAudioStreams;
	NSMutableSet* _pausedAudioStreams;
	NSMutableSet* _startingVideoStreams;
	NSMutableSet* _stoppingVideoStreams;
	NSMutableSet* _runningVideoStreams;
	NSMutableSet* _pausingVideoStreams;
	NSMutableSet* _resumingVideoStreams;
	NSMutableSet* _pausedVideoStreams;
	NSMutableArray* _audioStreams;
	NSMutableArray* _videoStreams;
	NSMutableDictionary* _streamMap;
	AVCStatisticsCollector* _statisticsCollector;
	AVCBasebandCongestionDetector* _basebandCongestionDetector;
	unsigned _cellularUniqueTag;
	float _volume;
	float _audioPosition;
	BOOL _isMuted;
	BOOL _audioEnabled;
	BOOL _videoEnabled;
	BOOL _audioPaused;
	BOOL _videoPaused;
	BOOL _audioPausedToStart;
	BOOL _videoPausedToStart;
	BOOL _audioStateChangeInProgress;
	BOOL _videoStateChangeInProgress;
	BOOL _audioIOStateChangeInProgress;
	VCAudioIO* _audioIO;
	VCMediaNegotiator* _mediaNegotiator;
	BOOL _localOnWiFi;
	VCRedundancyControllerAudio* _audioRedundancyController;
	VCRedundancyControllerVideo* _videoRedundancyController;
	id _reportingAgentWeak;

}

@property (nonatomic,readonly) NSString * uuid;                                                       //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) unsigned long long idsParticipantID;                                   //@synthesize idsParticipantID=_idsParticipantID - In the implementation block
@property (nonatomic,readonly) NSData * opaqueData;                                                   //@synthesize opaqueData=_opaqueData - In the implementation block
@property (nonatomic,readonly) id<VCSessionParticipantDelegate> delegate; 
@property (assign,nonatomic) id<VCSessionParticipantStreamDelegate> streamDelegate; 
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                               //@synthesize isMuted=_isMuted - In the implementation block
@property (assign,getter=isAudioEnabled,nonatomic) BOOL audioEnabled;                                 //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled;                                 //@synthesize videoEnabled=_videoEnabled - In the implementation block
@property (assign,getter=isAudioPaused,nonatomic) BOOL audioPaused;                                   //@synthesize audioPaused=_audioPaused - In the implementation block
@property (assign,getter=isVideoPaused,nonatomic) BOOL videoPaused;                                   //@synthesize videoPaused=_videoPaused - In the implementation block
@property (nonatomic,readonly) float audioPosition;                                                   //@synthesize audioPosition=_audioPosition - In the implementation block
@property (nonatomic,readonly) float volume;                                                          //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) NSArray * audioStreams; 
@property (nonatomic,readonly) NSArray * allParticipantStreamInfo; 
@property (nonatomic,readonly) tagNTP creationTime;                                                   //@synthesize creationTime=_creationTime - In the implementation block
@property (nonatomic,readonly) long long participantVideoToken;                                       //@synthesize participantVideoToken=_participantVideoToken - In the implementation block
@property (nonatomic,readonly) unsigned long long spatialAudioSourceID;                               //@synthesize spatialAudioSourceID=_spatialAudioSourceID - In the implementation block
@property (nonatomic,retain) AVCStatisticsCollector * statisticsCollector;                            //@synthesize statisticsCollector=_statisticsCollector - In the implementation block
@property (nonatomic,retain) AVCBasebandCongestionDetector * basebandCongestionDetector;              //@synthesize basebandCongestionDetector=_basebandCongestionDetector - In the implementation block
@property (assign,nonatomic) unsigned cellularUniqueTag;                                              //@synthesize cellularUniqueTag=_cellularUniqueTag - In the implementation block
@property (nonatomic,readonly) VCAudioRuleCollection * supportedAudioRules;                           //@synthesize supportedAudioRules=_supportedAudioRules - In the implementation block
@property (nonatomic,readonly) VCMediaNegotiator * mediaNegotiator;                                   //@synthesize mediaNegotiator=_mediaNegotiator - In the implementation block
@property (assign,getter=isLocalOnWiFi,nonatomic) BOOL localOnWiFi;                                   //@synthesize localOnWiFi=_localOnWiFi - In the implementation block
@property (assign,nonatomic) opaqueRTCReportingRef reportingAgent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id<VCSessionParticipantDelegate>)delegate;
-(void)stop;
-(void)start;
-(NSString *)uuid;
-(BOOL)setState:(unsigned)arg1 ;
-(tagNTP)creationTime;
-(float)volume;
-(BOOL)setVolume:(float)arg1 ;
-(void)tearDown;
-(void)setMuted:(BOOL)arg1 ;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(BOOL)isAudioEnabled;
-(BOOL)isMuted;
-(BOOL)isVideoEnabled;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(BOOL)isVideoPaused;
-(void)setVideoPaused:(BOOL)arg1 ;
-(void)didUpdateBasebandCodec:(const VCRemoteCodecInfo*)arg1 ;
-(void)setStatisticsCollector:(AVCStatisticsCollector *)arg1 ;
-(opaqueRTCReportingRef)reportingAgent;
-(AVCBasebandCongestionDetector *)basebandCongestionDetector;
-(void)setBasebandCongestionDetector:(AVCBasebandCongestionDetector *)arg1 ;
-(AVCStatisticsCollector *)statisticsCollector;
-(BOOL)isAudioPaused;
-(void)audioPowerSpectrumSinkDidUnregister;
-(void)pushAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(void)audioPowerSpectrumSinkDidRegister;
-(void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned)arg2 ;
-(void)handleActiveConnectionChange:(id)arg1 ;
-(void)setReportingAgent:(opaqueRTCReportingRef)arg1 ;
-(void)didSuspendAudioIO:(id)arg1 ;
-(void)didResumeAudioIO:(id)arg1 ;
-(void)spatialAudioSourceIDChanged:(unsigned long long)arg1 ;
-(void)pullAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(void)vcMediaStream:(id)arg1 didStartStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStreamDidStop:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didPauseStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStream:(id)arg1 didResumeStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStream:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 ;
-(BOOL)isLocalOnWiFi;
-(long long)participantVideoToken;
-(unsigned long long)idsParticipantID;
-(unsigned long long)spatialAudioSourceID;
-(NSData *)opaqueData;
-(BOOL)setAudioPosition:(float)arg1 ;
-(void)setAudioPaused:(BOOL)arg1 ;
-(id)initWithIDSDestination:(id)arg1 delegate:(id)arg2 processId:(int)arg3 sessionUUID:(id)arg4 ;
-(float)audioPosition;
-(void)updateAudioSpectrumState;
-(void)callDelegateWithBlock:(/*^block*/id)arg1 ;
-(void)completeStreamSetup:(id)arg1 ;
-(void)stopAudioIOCompletion;
-(void)onStartAudioIO;
-(void)onDidResumeAudioStream:(id)arg1 ;
-(void)onPauseAudioStreams;
-(BOOL)configureAudioIOWithDeviceRole:(int)arg1 ;
-(id)getAudioDumpName;
-(void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2 ;
-(void)collectVideoChannelMetrics:(SCD_Struct_VC157*)arg1 ;
-(void)collectAudioChannelMetrics:(SCD_Struct_VC157*)arg1 ;
-(void)setStreamDelegate:(id<VCSessionParticipantStreamDelegate>)arg1 ;
-(void)setCellularUniqueTag:(unsigned)arg1 ;
-(NSArray *)audioStreams;
-(BOOL)configureWithDeviceRole:(int)arg1 ;
-(void)dispatchedStart;
-(VCAudioRuleCollection *)supportedAudioRules;
-(VCMediaNegotiator *)mediaNegotiator;
-(NSArray *)allParticipantStreamInfo;
-(BOOL)handleEncryptionInfoChange:(id)arg1 ;
-(void)resetDecryptionTimeout;
-(BOOL)updateConfigurationWithDeviceRole:(int)arg1 ;
-(void)applyVideoEnabledSetting:(BOOL)arg1 ;
-(void)updateVideoPaused:(BOOL)arg1 ;
-(unsigned)cellularUniqueTag;
-(void)callStreamDelegateWithBlock:(/*^block*/id)arg1 ;
-(void)startAudioStreams;
-(void)startVideoStreams;
-(id)streamsToString;
-(void)processStartedStream:(id)arg1 didStart:(BOOL)arg2 ;
-(BOOL)allStartingStreamsStarted;
-(void)processStoppedStream:(id)arg1 ;
-(BOOL)allStoppingStreamsStopped;
-(BOOL)allResumingStreamsResumed;
-(BOOL)allPausingStreamsPaused;
-(BOOL)isAnyStreamRunningOrPaused;
-(void)stopAudioDump;
-(void)processResumedStream:(id)arg1 didResume:(BOOL)arg2 ;
-(void)processPausedStream:(id)arg1 didPause:(BOOL)arg2 ;
-(void)stopAudioStreams;
-(char*)participantStateToString:(unsigned)arg1 ;
-(void)stopVideoStreams;
-(void)pauseAudioStreams;
-(void)resumeAudioStreams;
-(void)pauseVideoStreams;
-(void)resumeVideoStreams;
-(void)startAudioDump;
-(void)stopAudioStreamsCompletion;
-(BOOL)isAudioStream:(id)arg1 ;
-(BOOL)shouldStartAudioIO;
-(void)startAudioIO;
-(BOOL)isVideoStream:(id)arg1 ;
-(id)generateEncryptionKey;
-(void)setupNetworkAddressesForMediaConfig:(id)arg1 ;
-(void)dispatchedStop;
-(void)dispatchedSetAudioEnabled:(BOOL)arg1 ;
-(void)dispatchedSetVideoEnabled:(BOOL)arg1 ;
-(void)dispatchedSetAudioPaused:(BOOL)arg1 ;
-(void)dispatchedSetVideoPaused:(BOOL)arg1 ;
-(void)createRedundancyControllers;
-(void)dispatchedStream:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3 ;
-(void)dispatchedStreamDidStop:(id)arg1 ;
-(void)dispatchedStream:(id)arg1 didPause:(BOOL)arg2 error:(id)arg3 ;
-(void)dispatchedStream:(id)arg1 didResume:(BOOL)arg2 error:(id)arg3 ;
-(void)sendAudioPowerSpectrumSourceRegistration:(BOOL)arg1 ;
-(id<VCSessionParticipantStreamDelegate>)streamDelegate;
-(void)setLocalOnWiFi:(BOOL)arg1 ;
@end

