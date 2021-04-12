/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCSessionParticipant.h>
#import <libobjc.A.dylib/VCVideoCaptureClient.h>
#import <libobjc.A.dylib/VCSessionUplinkVideoStreamControllerDelegate.h>
#import <libobjc.A.dylib/VCMomentTransportDelegate.h>

@class VCSessionUplinkBandwidthAllocator, NSMutableDictionary, VCSessionUplinkVideoStreamController, NSMutableArray, NSMutableSet, VCVideoRule, VCMoments, VCAudioPowerSpectrumSource, NSArray, NSSet, NSString;

@interface VCSessionParticipantLocal : VCSessionParticipant <VCVideoCaptureClient, VCSessionUplinkVideoStreamControllerDelegate, VCMomentTransportDelegate> {

	VCSessionUplinkBandwidthAllocator* _uplinkBandwidthAllocator;
	NSMutableDictionary* _activeUplinkAudioStreams;
	NSMutableDictionary* _pendingActiveUplinkVideoStreams;
	BOOL _encryptionInfoReceived;
	int _shouldUpdateActiveVideoStream;
	unsigned _currentUplinkTargetBitrate;
	opaqueCMSimpleQueueRef _audioStreamUpdateEventQueue;
	opaqueCMSimpleQueueRef _audioRedundancyChangeEventQueue;
	opaqueCMSimpleQueueRef _videoRedundancyChangeEventQueue;
	unsigned _lastSentAudioSampleTime;
	double _lastSentAudioHostTime;
	opaque_pthread_rwlock_t _audioTimestampRWLock;
	unsigned char _audioPriority;
	unsigned short _connectionStatsStreamID;
	VCSessionUplinkVideoStreamController* _uplinkVideoStreamController;
	tagVCMediaQueueRef _mediaQueue;
	unsigned _uplinkBitrateCapWifi;
	unsigned _uplinkBitrateCapCell;
	tagVCMemoryPool* _audioStreamUpdatePool;
	tagVCMemoryPool* _redundancyPool;
	tagVCMemoryPool* _videoRedundancyPool;
	AC _videoPriority;
	BOOL _shouldResize;
	BOOL _enableRedundancy;
	BOOL _enableVADFiltering;
	NSMutableArray* _peerSubscribedStreams;
	NSMutableSet* _localPublishedStreams;
	float _averageSilenceAudioPower;
	unsigned char _audioPriorityRampUp;
	unsigned char _audioPriorityDecaySlow;
	unsigned char _audioPriorityDecayFast;
	float _audioVoiceDetectionSensitivity;
	float _audioSilencePowerAverageMultiplier;
	unsigned char _forcedAudioPriorityValue;
	double _forcedAudioPriorityLastUpdateTime;
	BOOL _forcedAudioPriorityEnabled;
	VCVideoRule* _videoRule;
	BOOL _speechDetected;
	opaqueVCVoiceDetectorRef _voiceDetector;
	double _fecRatio;
	NSMutableSet* _audioPayloadTypes;
	NSMutableSet* _videoPayloadTypes;
	unsigned _currentUplinkTotalBitrateVideo;
	unsigned _currentUplinkTotalBitrateAudio;
	VCMoments* _moments;
	VCAudioPowerSpectrumSource* _powerSpectrumSource;

}

@property (assign,nonatomic) BOOL encryptionInfoReceived;                            //@synthesize encryptionInfoReceived=_encryptionInfoReceived - In the implementation block
@property (nonatomic,readonly) unsigned short connectionStatsStreamID;               //@synthesize connectionStatsStreamID=_connectionStatsStreamID - In the implementation block
@property (assign,nonatomic) tagVCMediaQueueRef mediaQueue;                          //@synthesize mediaQueue=_mediaQueue - In the implementation block
@property (assign,nonatomic) unsigned uplinkBitrateCapWifi;                          //@synthesize uplinkBitrateCapWifi=_uplinkBitrateCapWifi - In the implementation block
@property (assign,nonatomic) unsigned uplinkBitrateCapCell;                          //@synthesize uplinkBitrateCapCell=_uplinkBitrateCapCell - In the implementation block
@property (assign,nonatomic) BOOL enableVADFiltering;                                //@synthesize enableVADFiltering=_enableVADFiltering - In the implementation block
@property (nonatomic,copy) NSArray * peerSubscribedStreams;                          //@synthesize peerSubscribedStreams=_peerSubscribedStreams - In the implementation block
@property (nonatomic,readonly) NSSet * audioPayloadTypes;                            //@synthesize audioPayloadTypes=_audioPayloadTypes - In the implementation block
@property (nonatomic,readonly) NSSet * videoPayloadTypes;                            //@synthesize videoPayloadTypes=_videoPayloadTypes - In the implementation block
@property (nonatomic,readonly) unsigned currentUplinkTotalBitrateVideo;              //@synthesize currentUplinkTotalBitrateVideo=_currentUplinkTotalBitrateVideo - In the implementation block
@property (nonatomic,readonly) unsigned currentUplinkTotalBitrateAudio;              //@synthesize currentUplinkTotalBitrateAudio=_currentUplinkTotalBitrateAudio - In the implementation block
@property (nonatomic,readonly) VCMoments * moments;                                  //@synthesize moments=_moments - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)stop;
-(void)start;
-(BOOL)setState:(unsigned)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(VCMoments *)moments;
-(tagVCMediaQueueRef)mediaQueue;
-(void)setMediaQueue:(tagVCMediaQueueRef)arg1 ;
-(void)pushAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned)arg2 ;
-(void)handleActiveConnectionChange:(id)arg1 ;
-(void)controller:(id)arg1 didChangeActiveVideoStreams:(id)arg2 ;
-(void)generateKeyFrameWithStreamID:(unsigned short)arg1 ;
-(void)moments:(id)arg1 shouldProcessRequest:(id)arg2 recipientID:(id)arg3 ;
-(void)updateMediaSettingsWithConfig:(id)arg1 ;
-(id)setupStreamRTP:(id)arg1 ;
-(void)stopAudioIOCompletion;
-(BOOL)configureAudioIOWithDeviceRole:(int)arg1 ;
-(id)getAudioDumpName;
-(void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2 ;
-(void)collectVideoChannelMetrics:(SCD_Struct_VC69*)arg1 ;
-(void)collectAudioChannelMetrics:(SCD_Struct_VC69*)arg1 ;
-(void)thermalLevelDidChange:(int)arg1 ;
-(id)clientCaptureRule;
-(BOOL)onCaptureFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_AV77)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4 ;
-(void)avConferencePreviewError:(id)arg1 ;
-(void)sourceFrameRateDidChange:(unsigned)arg1 ;
-(void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(BOOL)arg2 powerLevelDidChange:(BOOL)arg3 ;
-(id)initWithIDSDestination:(id)arg1 negotiationData:(id)arg2 delegate:(id)arg3 processId:(int)arg4 sessionUUID:(id)arg5 ;
-(unsigned short)connectionStatsStreamID;
-(unsigned)currentUplinkTotalBitrateAudio;
-(unsigned)currentUplinkTotalBitrateVideo;
-(void)updateUplinkTargetBitrate:(unsigned)arg1 ;
-(NSSet *)videoPayloadTypes;
-(NSSet *)audioPayloadTypes;
-(void)setPeerSubscribedStreams:(NSArray *)arg1 ;
-(void)setUplinkBitrateCapWifi:(unsigned)arg1 ;
-(void)setUplinkBitrateCapCell:(unsigned)arg1 ;
-(id)supportedAudioRules;
-(void)updateSupportedAudioRules:(id)arg1 ;
-(void)updateMomentsCapabillities:(unsigned)arg1 imageType:(int)arg2 videoCodec:(int)arg3 ;
-(void)setEncryptionInfoReceived:(BOOL)arg1 ;
-(void)setEnableVADFiltering:(BOOL)arg1 ;
-(unsigned short)generateStreamID;
-(BOOL)setupAudioStreamsWithConfigProvider:(id)arg1 mediaNegotiatorConfig:(id)arg2 ;
-(BOOL)setupVideoStreamsWithConfigProvider:(id)arg1 mediaNegotiatorConfig:(id)arg2 ;
-(void)updatePayloadTypesWithConfigProvider:(id)arg1 ;
-(void)initializeUplinkVideoStreamController;
-(BOOL)initializeMediaNegotiator;
-(BOOL)createParticipantInfo;
-(void)createOpaqueData;
-(void)flushAudioEventQueue;
-(void)flushAudioRedundancyEventQueue;
-(void)flushVideoRedundancyEventQueue;
-(void)enableRedundancy:(BOOL)arg1 ;
-(void)startVoiceActivityDetection;
-(void)updateActiveVoiceOnly;
-(void)registerForVideoCapture;
-(void)deregisterForVideoCapture;
-(void)dispatchedUpdateUplinkMediaStreamsWithTargetBitrate:(unsigned)arg1 ;
-(void)stopVoiceActivityDetection;
-(BOOL)applyCachedMediaStreams:(id)arg1 toMultiwayConfig:(id)arg2 ;
-(BOOL)setupAudioStreamsWithConfigProvider:(id)arg1 ;
-(BOOL)setupAudioStreamWithConfiguration:(id)arg1 ;
-(BOOL)setupAudioStreamWithConfiguration:(id)arg1 idsDestination:(id)arg2 ;
-(BOOL)setupVideoStreamsWithConfigProvider:(id)arg1 ;
-(BOOL)setupVideoStreamWithConfiguration:(id)arg1 ;
-(BOOL)setupVideoStreamWithConfiguration:(id)arg1 idsDestination:(id)arg2 ;
-(id)newMediaNegotiatorAudioConfiguration;
-(id)multiwayAudioStreamNegotiatorConfigForStreamConfig:(id)arg1 ;
-(id)multiwayVideoStreamNegotiatorConfigForStreamConfig:(id)arg1 isSubstream:(BOOL)arg2 ;
-(BOOL)containsStreamWithSSRC:(unsigned)arg1 ;
-(BOOL)containsStreamWithIDSStreamID:(unsigned short)arg1 ;
-(id)audioRuleCollectionWithAudioStreamConfig:(id)arg1 ;
-(void)addCallInfoBlobToParticipantInfo:(id)arg1 ;
-(void)updateActiveAudioStreams:(id)arg1 allStreamIds:(id)arg2 ;
-(void)processAudioStreamUpdateEvent;
-(void)processAudioRedundancyChangeEvent;
-(unsigned)generateSSRC;
-(void)setupEncodingModeWithVideoStreamConfig:(id)arg1 ;
-(BOOL)checkSubscribedStreamsConsistency:(id)arg1 ;
-(void)updateUplinkStreamsForPeerSubscribedStreams:(id)arg1 ;
-(void)updateActiveAudioStreamWithTargetBitrate:(unsigned)arg1 ;
-(void)updateActiveVideoStreamWithTargetBitrate:(unsigned)arg1 ;
-(unsigned)calculateUplinkTotalBitrateForMediaStreams:(id)arg1 ;
-(void)generateKeyFrameForStreamsWithNewCompoundStreamIDsWithActiveVideoStreams:(id)arg1 ;
-(void)processVideoEventQueue;
-(void)processEventQueues;
-(void)updateAudioPriorityWithSampleBuffer:(opaqueVCAudioBufferListRef)arg1 ;
-(void)updateStreamIDsWithActiveVideoStreams:(id)arg1 ;
-(void)applyVideoEnabledSetting:(BOOL)arg1 ;
-(void)updateVideoPaused:(BOOL)arg1 ;
-(id)multiwayVideoStreamConfigs;
-(BOOL)isHighPriorityAudioWithPower:(float)arg1 voiceActive:(BOOL)arg2 ;
-(void)setupVideoStreamConfig:(id)arg1 initialConfiguration:(id)arg2 ;
-(BOOL)encryptionInfoReceived;
-(unsigned)uplinkBitrateCapWifi;
-(unsigned)uplinkBitrateCapCell;
-(BOOL)enableVADFiltering;
-(NSArray *)peerSubscribedStreams;
@end

