/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class <VCMediaStreamDelegate>, VCAudioStream, <VCMediaStreamSyncSourceDelegate>, <VCMomentsCollectorDelegate>, VCAudioPowerSpectrumSource, VCSessionParticipantRemote, <VCAudioIOSink><VCAudioIOSource>, NSObject<OS_dispatch_semaphore>, NSObject<OS_nw_connection>, <VCTextFrameReceiver>;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned maxMediaBitrate : 1;
	unsigned maxNetworkBitrate : 1;
	unsigned maxPacketsPerSecond : 1;
	unsigned metadata : 1;
	unsigned repairedMaxNetworkBitrate : 1;
	unsigned repairedStreamID : 1;
} SCD_Struct_VC1;

typedef struct VCSingleLinkedList {
	_VCSingleLinkedListEntry head;
	BOOL initialized;
	/*function pointer*/void* compare;
} VCSingleLinkedList;

typedef struct VCAudioIOControllerIOState {
	BOOL timestampInitialized;
	double lastHostTime;
	unsigned lastInputTimestamp;
	unsigned lastInputSampleCount;
	double lastBlockSize;
	unsigned long long lastTimestamp;
	VCSingleLinkedList clientIOList;
	opaqueCMSimpleQueue eventQueue;
	opaqueVCAudioLimiter audioLimiter;
	opaqueVCAudioBufferList secondarySampleBuffer;
} VCAudioIOControllerIOState;

typedef struct opaqueCMSimpleQueue* opaqueCMSimpleQueueRef;

typedef struct AVCRateControlConfig {
	unsigned mode;
	unsigned localRadioAccessTechnology;
	unsigned remoteRadioAccessTechnology;
	unsigned maxBitrate;
	unsigned minBitrate;
} AVCRateControlConfig;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	double field6;
	double field7;
	double field8;
	double field9;
	char field10[64];
} SCD_Struct_AV7;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
	unsigned field9;
	unsigned field10;
	unsigned field11;
	double field12;
	unsigned field13;
	unsigned field14;
	double field15;
	unsigned field16;
} SCD_Struct_AV8;

typedef struct {
	double field1;
	double field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	unsigned long long field8;
} SCD_Struct_AV9;

typedef struct {
	unsigned field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
	unsigned field5;
	unsigned field6;
	double field7;
	unsigned field8;
} SCD_Struct_AV10;

typedef struct {
	unsigned char field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
	unsigned field9;
	unsigned field10;
	double field11;
	double field12;
	double field13;
	unsigned field14;
	unsigned field15;
	unsigned field16;
} SCD_Struct_AV11;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	double field4;
	unsigned field5;
} SCD_Struct_AV12;

typedef struct {
	int field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	double field5;
	double field6;
	double field7;
	unsigned field8;
	unsigned field9;
} SCD_Struct_AV13;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
} SCD_Struct_AV14;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	BOOL field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
} SCD_Struct_AV15;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
	unsigned long long field9;
	int field10;
} SCD_Struct_AV16;

typedef struct {
	int field1;
	double field2;
	BOOL field3;
	BOOL( field4;
	/*function pointer*/void* field5;
	= field6;
	AVCRateControlConfig field7;
	SCD_Struct_AV7 field8;
	SCD_Struct_AV8 field9;
	SCD_Struct_AV9 field10;
	SCD_Struct_AV10 field11;
	SCD_Struct_AV11 field12;
	SCD_Struct_AV12 field13;
	SCD_Struct_AV13 field14;
	SCD_Struct_AV14 field15;
	SCD_Struct_AV15 field16;
	SCD_Struct_AV16) field17;
} SCD_Struct_AV17;

typedef struct {
	unsigned queueDepth1;
	unsigned queueDepth2;
	unsigned txBitrate;
	unsigned averageBitrate;
	unsigned averageBitrateLong;
	double expectedQueuingDelay;
	double bdcd;
	double normalizedBDCD;
	double normalizedDelay;
	char bbString[64];
} SCD_Struct_VC18;

typedef struct {
	unsigned sendTimestamp;
	unsigned queuingDelay;
	unsigned remoteBWEstimation;
	unsigned maxVideoBurstyLoss;
	unsigned audioConsecutiveLoss;
	unsigned mostBurstyLoss;
	unsigned audioReceivedPackets;
	unsigned videoReceivedPackets;
	unsigned totalSentPackets;
	unsigned echoedSendTimestamp;
	unsigned owrd;
	double packetLossRate;
	unsigned actualBitrate;
	unsigned instantBitrate;
	double roundTripTime;
	unsigned receiveQueueTarget;
} SCD_Struct_VC19;

typedef struct {
	double packetLossPercentage;
	double packetLossPercentageVideo;
	unsigned burstPacketLoss;
	unsigned roundTripTimeMilliseconds;
	unsigned isNetworkCongested;
	unsigned owrd;
	unsigned targetBitrate;
	unsigned long long statisticsID;
} SCD_Struct_VC20;

typedef struct {
	unsigned estimatorID;
	BOOL deregisterEstimator;
	BOOL isProbingSequence;
	BOOL isEndOfProbingSequence;
	unsigned probingSequenceID;
	unsigned messageLength;
	double arrivalTime;
	unsigned mediaTimestamp;
} SCD_Struct_VC21;

typedef struct {
	unsigned char linkID;
	unsigned sendTimestamp;
	unsigned receiveTimestamp;
	unsigned totalPacketSent;
	unsigned totalPacketReceived;
	unsigned totalByteSent;
	unsigned totalByteReceived;
	unsigned serverStatsByteUsed;
	unsigned bandwidthSample;
	unsigned bandwidthEstimation;
	double roundTripTime;
	double owrd;
	double packetLossRate;
	unsigned actualBitrate;
	unsigned serverStatsBitrate;
	unsigned expectedBitrate;
} SCD_Struct_VC22;

typedef struct {
	unsigned packetId;
	unsigned totalPacketsSent;
	unsigned totalBytesSent;
	double sendTimestamp;
	unsigned afrcVideoBitrate;
} SCD_Struct_VC23;

typedef struct {
	int packetType;
	unsigned packetId;
	unsigned sampleRate;
	unsigned totalPacketsReceived;
	double receiveTimestamp;
	double owrd;
	double targetJitterQueueSize;
	unsigned bandwidthEstimation;
	unsigned localBurstyLoss;
} SCD_Struct_VC24;

typedef struct {
	unsigned ssrc;
	unsigned packetLossPercentage;
	unsigned lastSequenceNumber;
	unsigned roundTripTimeMilliseconds;
} SCD_Struct_VC25;

typedef struct {
	unsigned mediaEventType;
	unsigned additionalFlushCount;
	unsigned transactionID;
	unsigned audioStallBitrate;
	BOOL isKeyFrame;
	unsigned refreshFrameTimestamp;
	unsigned refreshFramePayloadType;
	unsigned refreshFramePacketCount;
} SCD_Struct_VC26;

typedef struct {
	unsigned char version;
	unsigned char direction;
	unsigned long long timestamp;
	unsigned long long maxThroughputBps;
	unsigned long long totalByteCount;
	unsigned flushableQueueSize;
	unsigned nonFlushableQueueSize;
	unsigned averageDelayMillisecond;
	unsigned long long averageThroughputBps;
	int rateTrendSuggestion;
} SCD_Struct_VC27;

typedef struct {
	int type;
	double arrivalTime;
	BOOL isVCRCInternal;
	BOOL shouldDrainAndProcess;
	/*function pointer*/void* ;
	SCD_Struct_VC18 baseband;
	SCD_Struct_VC19 feedback;
	SCD_Struct_VC20 network;
	SCD_Struct_VC21 probing;
	SCD_Struct_VC22 serverStats;
	SCD_Struct_VC23 packetSent;
	SCD_Struct_VC24 packetReceived;
	SCD_Struct_VC25 rtcpRR;
	AVCRateControlConfig config;
	SCD_Struct_VC26 mediaEvent;
	SCD_Struct_VC27) nwConnection;
} SCD_Struct_VC28;

typedef struct {
	int field1;
	double field2;
	BOOL field3;
	BOOL( field4;
	/*function pointer*/void* field5;
	= field6;
	SCD_Struct_VC1 field7;
	8 field8;
	SCD_Struct_VC1 field9;
	9 field10;
	AVCRateControlConfig field11;
	SCD_Struct_VC20 field12;
	SCD_Struct_VC21 field13;
	SCD_Struct_VC22 field14;
	SCD_Struct_VC23 field15;
	SCD_Struct_VC24 field16;
	SCD_Struct_VC25 field17;
	SCD_Struct_VC26 field18;
	SCD_Struct_VC27) field19;
} SCD_Struct_AV29;

typedef struct {
	unsigned isFinal : 1;
	unsigned isLocal : 1;
} SCD_Struct_VC30;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct VCRange {
	float min;
	float max;
} VCRange;

typedef struct VCAudioPowerSpectrumRealtimeContext {
	BOOL powerSpectrumConfigured;
	AudioStreamBasicDescription format;
	VCRange frequencyRange;
	unsigned sampleRate;
	unsigned fftSampleCount;
	float hanningWindow;
	unsigned octave2IndexTable6;
	unsigned octave2IndexTable6Count;
	unsigned outputBinCount;
	float lerpIdxs;
	float fftNormFactor;
	opaqueVCAudioBufferList sampleBuffer;
	_VCAudioPowerSpectrumChannel channels;
	void sinkContext;
	/*function pointer*/void* sinkCallback;
} VCAudioPowerSpectrumRealtimeContext;

typedef struct opaque_pthread_rwlock_t {
	long long __sig;
	char __opaque[192];
} opaque_pthread_rwlock_t;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct {
	int field1;
	unsigned char field2[12];
} SCD_Struct_GK36;

typedef struct PacketThread_s* PacketThread_sRef;

typedef struct opaqueVCAudioBufferList* opaqueVCAudioBufferListRef;

typedef struct VCRemoteCodecInfo {
	unsigned codecType;
	double sampleRate;
} VCRemoteCodecInfo;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct OpaqueAudioConverter* OpaqueAudioConverterRef;

typedef struct VCAudioPowerSpectrumSourceRealtimeContext {
	VCSingleLinkedList powerSpectrumSinks;
	opaqueCMSimpleQueue eventQueue;
	id powerSpectrumSourceDelegate;
} VCAudioPowerSpectrumSourceRealtimeContext;

typedef struct OWRDList {
	double time[100];
	double owrd[100];
	int frontIndex;
	int rearIndex;
	int size;
} OWRDList;

typedef struct {
	unsigned configurationExtension : 1;
} SCD_Struct_VC45;

typedef struct {
	double field1[100];
	double field2[100];
	int field3;
	int field4;
	unsigned field5;
	double field6;
	double field7;
	double field8;
	BOOL field9;
} SCD_Struct_VC46;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct __CVPixelBufferPool* CVPixelBufferPoolRef;

typedef struct OpaqueVTPixelTransferSession* OpaqueVTPixelTransferSessionRef;

typedef struct __CFAllocator* CFAllocatorRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_VC52;

typedef struct {
	unsigned multiwayCapabilities : 1;
	unsigned supportedImageTypes : 1;
	unsigned supportedVideoCodecs : 1;
} SCD_Struct_VC53;

typedef struct VCRateControlAlgorithmConfig {
	unsigned tierBitrates;
	int initialTierIndex;
	int maxTierIndex;
	int minTierIndex;
	int lowestNonEmergencyTierIndex;
	int lowestEffectiveBWETierIndex;
	int lowestTierIndexReactToNoServerActivity;
	int rampUpTierNumber;
	int rampDownTierNumber;
	int rampUpAdditionalTierAtInitial;
	int rampDownAdditionalTierAtInitial;
	int rampDownBurstyLossThreshold;
	int lowestTierForBurstyLossRampDown;
	double rampDownNOWRDThreshold;
	double rampDownNOWRDAccThreshold;
	double rampDownAggressiveNOWRDThreshold;
	double rampDownAggressiveNOWRDAccThreshold;
	double rampDownConstantOWRDDuration;
	double rampDownOvershootDuration;
	double rampDownOvershootNextTierRatio;
	double rampUpFrozenDuration;
	double rampUpSettleDuration;
	double rampUpOWRDThreshold;
	double rampUpNOWRDThreshold;
	double rampUpNOWRDAccThreshold;
	double rampUpOverBandwidthCalmDuration;
	int rampUpOverBandwidthTierNumber;
	int rampDownLossEventThreshold;
	double rampUpFrozenPLRThreshold;
	double rampUpRateLimitedRatio;
	double unstableRateLimitedDuration;
	double congestionWaitDuration;
	double owrdWindowDuration;
	double owrdShortWindowDuration;
	double minimumNOWRDTimeDifference;
	double owrdInitialRampUpReadyDuration;
	unsigned owrdHistorySize;
	unsigned owrdMininumHistorySize;
	unsigned fastRampDownBitrateRange;
	unsigned fastRampUpBitrateRange;
	unsigned consecutiveRampDownThresholdForCongestion;
	BOOL receivedBandwidthEstimationEnabled;
	BOOL basebandAdaptationEnabled;
	BOOL rateLimitedEnabled;
	int stabilizationScheme;
	double rampDownNBDCDThreshold;
	double rampDownAggressiveNBDCDThreshold;
	double rampDownNormalizedQueuingDelayThreshold;
	double rampDownMediumQueuingDelayThreshold;
	double rampDownHighQueuingDelayThreshold;
	double rampDownEmergencyTierCoolDownTime;
	double rampUpNBDCDThreshold;
	double rampUpQueuingDelayThreshold;
	double rampUpNBDCDCoolDownTime;
	double rampUpAudioFractionCoolDownTime;
	double autoResumeDurationAfterPaused;
	BOOL oscillationDetectionEnabled;
	double oscillationCoolDownTime;
	int oscillationDeviationTierNumber;
	int oscillationDeviationCountThreshold;
} VCRateControlAlgorithmConfig;

typedef struct {
	double time[100];
	double owrd[100];
	int frontIndex;
	int rearIndex;
	unsigned size;
	double nowrd;
	double nowrdShort;
	double nowrdAcc;
	BOOL isOWRDListTooShortDuringInitialRampUp;
} SCD_Struct_VC55;

typedef struct in_addr {
	unsigned s_addr;
} in_addr;

typedef struct sockaddr_in {
	unsigned char sin_len;
	unsigned char sin_family;
	unsigned short sin_port;
	in_addr sin_addr;
	char sin_zero[8];
} sockaddr_in;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct tagSRTPTransformPolicy {
	int cipherMode;
	int masterKeyLength;
	int sessionKeyLength;
	int sessionSaltLength;
	int authenticationMode;
	int sessionAuthenticationKeyLength;
	int sessionAuthenticationTagLength;
} tagSRTPTransformPolicy;

typedef struct tagSRTPCryptContext {
	_CCCryptor ccCryptorRef;
} tagSRTPCryptContext;

typedef struct tagSRTPINFO {
	int fSRTPInitialized;
	int fCancelled;
	opaque_pthread_mutex_t xWait;
	opaque_pthread_cond_t cWait;
	unsigned dwSSRC;
	unsigned dwRTPROC;
	unsigned short wFirstRTPSeq;
	unsigned short wHighestRTPSeq;
	unsigned dwFirstRTCPSeq;
	unsigned dwHighestRTCPSeq;
	unsigned long long SRTPIndex;
	int masterKeyLength;
	int sessionKeyLength;
	unsigned char MasterKey[32];
	unsigned char MasterSalt[14];
	unsigned char SessionKey[32];
	unsigned char SessionSalt[14];
	unsigned char SessionAuthenticationKey[20];
	opaque_pthread_mutex_t MKIAccess;
	void masterKeyIndex;
	void masterKeyIndexInPacket;
	unsigned SRTCPIndex;
	unsigned dwDerivationRate;
	os_unfair_lock_s cryptContextLock;
	tagSRTPCryptContext cryptContext;
	tagSRTPTransformPolicy policy;
	unsigned operatingMode;
} tagSRTPINFO;

typedef struct opaqueCMBufferQueue* opaqueCMBufferQueueRef;

typedef struct opaqueRTCReporting* opaqueRTCReportingRef;

typedef struct {
	/*function pointer*/void* encoderVTable;
	int type;
	tagHANDLE encoderHandle;
} SCD_Struct_VC64;

typedef struct METER_INFO {
	BOOL frequencyMeteringEnabled;
	opaqueVCFFTMeter fftMeter;
} METER_INFO;

typedef struct VCAudioStreamSinkContext {
	METER_INFO soundMeter;
} VCAudioStreamSinkContext;

typedef struct VCAudioStreamSourceContext {
	BOOL isRemoteMuted;
	METER_INFO soundMeter;
	tagVCAudioReceiver audioReceiver;
	unsigned framesProcessed;
	float volume;
	BOOL shouldPostProcessSamples;
	BOOL isSendOnly;
	BOOL isRemoteMediaStalled;
	double lastReceivedAudioTimestamp;
	int packetsSinceStallCount;
	double remoteMediaStallTimeout;
	unsigned awdTime;
	VCSingleLinkedList transports;
	<VCMediaStreamDelegate>* delegate;
	VCAudioStream* self;
	<VCMediaStreamSyncSourceDelegate>* syncSourceDelegate;
	<VCMomentsCollectorDelegate>* momentsCollectorDelegate;
} VCAudioStreamSourceContext;

typedef struct __CFString* CFStringRef;

typedef struct {
	unsigned field1;
	unsigned field2;
	double field3;
} SCD_Struct_VC69;

typedef struct OpaqueFigVirtualDisplaySession* OpaqueFigVirtualDisplaySessionRef;

typedef struct OpaqueVTImageRotationSession* OpaqueVTImageRotationSessionRef;

typedef struct {
	char field1;
	unsigned short field2;
	unsigned short field3;
	unsigned char field4;
} SCD_Struct_VC72;

typedef struct {
	unsigned short field1;
	unsigned short field2;
	unsigned short field3;
	unsigned short field4;
	unsigned short field5;
} SCD_Struct_VC73;

typedef struct {
	unsigned field1;
	unsigned long long field2;
	unsigned short field3;
	unsigned char field4;
	char field5;
	unsigned short field6[12];
	unsigned char field7;
	unsigned short field8;
	SCD_Struct_VC73 field9;
	double field10;
	unsigned long long field11;
} SCD_Struct_VC74;

typedef struct {
	double requestTime;
	unsigned char linkID;
	unsigned short statsIdentifier;
	unsigned totalLocalMediaPacketSent;
	unsigned totalLocalMediaPacketReceived;
	unsigned totalServerStatsByteUsed;
} SCD_Struct_VC75;

typedef struct tagVCAudioRedPayload {
	int payloadType;
	char* buffer;
	int bufferLength;
	unsigned timestamp;
	BOOL isRedAudio;
	unsigned char redCount;
	unsigned char sequenceOffset;
	unsigned char priority;
} tagVCAudioRedPayload;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_AV77;

typedef struct {
	double field1;
	int field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
} SCD_Struct_VC78;

typedef struct atomic_flag {
	AB _Value;
} atomic_flag;

typedef struct VCAudioPowerSpectrumMeterRealtimeContext {
	VCSingleLinkedList streams;
	opaqueCMSimpleQueue eventQueue;
	double nextDeliveryTime;
	double audioSpectrumRefreshRate;
	atomic_flag isProcessingOutput;
	__CFDictionary outputPowerSpectrums;
	id powerSpectrumMeterDelegate;
	void powerSpectrumMeterDelegateContext;
} VCAudioPowerSpectrumMeterRealtimeContext;

typedef struct opaqueCMSession* opaqueCMSessionRef;

typedef struct OpaqueCMMemoryPool* OpaqueCMMemoryPoolRef;

typedef struct OpaqueVTDecompressionSession* OpaqueVTDecompressionSessionRef;

typedef struct opaqueCMFormatDescription* opaqueCMFormatDescriptionRef;

typedef struct OpaqueFigThread* OpaqueFigThreadRef;

typedef struct VideoPacketBuffer_t* VideoPacketBuffer_tRef;

typedef struct VCSessionParticipantProminenceInfo {
	BOOL isAudioActive;
	unsigned audioActiveProbabilityThreshold;
	unsigned audioInactiveProbabilityThreshold;
	unsigned audioActiveAccumulationThreshold;
	unsigned audioInactiveAccumulationThreshold;
	unsigned audioActiveCount;
	unsigned lastProminence;
	unsigned refreshCounter;
} VCSessionParticipantProminenceInfo;

typedef struct VCSessionParticipantSourceIO {
	opaqueVCAudioBufferList sourceBuffer;
	VCSessionParticipantProminenceInfo prominenceInfo;
	unsigned processedAudioFramesCount;
	BOOL sharedIsAudioSpectrumActive;
	VCAudioPowerSpectrumSource* audioPowerSpectrumSource;
	VCSessionParticipantRemote* self;
	unsigned long long idsParticipantId;
	BOOL audioStreamsPaused;
	_VCSessionParticipantSourceIOStream audioStreams;
} VCSessionParticipantSourceIO;

typedef struct tagVCVideoReceiverStreamConfig {
	tagHANDLE rtpHandle;
	unsigned short streamID;
	unsigned short repairStreamID;
	BOOL onDemandIDR;
	unsigned subStreamCount;
	unsigned short subStreamIDs[9];
	unsigned short subStreamRepairIDs[9];
	unsigned short framerate;
	unsigned char tileIndex;
} tagVCVideoReceiverStreamConfig;

typedef struct tagVCVideoReceiverConfig {
	unsigned streamCount;
	tagVCVideoReceiverStreamConfig streamConfigs[9];
	int mode;
	long long streamToken;
	int audioTSRate;
	int videoTSRate;
	int enableVPBLogging;
	unsigned dumpID;
	int enableControlByte;
	int enableBitstreamCapture;
	int enable2vuyCapture;
	int enableUEP;
	int enableRecvBitstreamDump;
	int reportingParentID;
	BOOL shouldEnableFaceZoom;
	BOOL useDisplayLink;
	void callbackContext;
	/*function pointer*/void* remoteFrameCallback;
	/*function pointer*/void* streamSwitchCallback;
	/*function pointer*/void* keyFrameGenerationCallback;
	unsigned long long idsParticipantID;
	BOOL triggerSoundAlarmOnRTPReceive;
	unsigned short decoderNumOfTiles;
	BOOL useInternalRTPThreading;
	tagWRMMetricsInfo wrmInfo;
	BOOL enableJitterBuffer;
	__CFDictionary featureListStrings;
	BOOL isLTRPEnabled;
	BOOL isRTCPForLTRPAckEnabled;
	BOOL isAsyncDecodingEnabled;
	BOOL isReceiverSideVCRCFeedbackEnabled;
	BOOL isVCRCStatsCollectionEnabled;
	BOOL fecHeaderV1Enabled;
} tagVCVideoReceiverConfig;

typedef struct {
	double lastReceivedPacketTime;
	double lastReceivedPacketOnPrimaryTime;
	double lastReportTime;
	double maxPrimaryNoPacketInterval;
	double noPacketInterval;
	BOOL isConnectionPaused;
	int type;
} SCD_Struct_VC91;

typedef struct {
	int field1;
	int field2;
	unsigned long long field3;
	char* field4;
	unsigned long long field5;
	unsigned long long field6;
} SCD_Struct_VC92;

typedef struct {
	unsigned long long field1;
} SCD_Struct_VC93;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
	unsigned field9;
} SCD_Struct_VC94;

typedef struct {
	int field1;
	int field2;
	int field3;
	unsigned field4;
} SCD_Struct_VC95;

typedef struct _CAImageQueue* CAImageQueueRef;

typedef struct OpaqueFigImageQueue* OpaqueFigImageQueueRef;

typedef struct VCAudioClientSettings {
	BOOL isValid;
	BOOL enableAudioPreWarming;
	int operatingMode;
	int deviceRole;
} VCAudioClientSettings;

typedef struct {
	unsigned short radioTechnology;
	unsigned char transmissionAntenna;
	unsigned short numberOfFlows;
	unsigned char flowType;
	char transmissionPower;
	unsigned queueDepth1;
	unsigned queueDepth2;
	unsigned basebandTransmissionBytes;
	unsigned lastTransmissionTimestamp;
} SCD_Struct_VC99;

typedef struct {
	unsigned char payloadType;
	unsigned short numberOfPacketDropped;
	unsigned short awDroppedSN[500];
} SCD_Struct_VC100;

typedef struct {
	unsigned short currentBitrate;
	unsigned short suggestedBitrate;
} SCD_Struct_VC101;

typedef struct {
	unsigned short transactionID;
	unsigned short totalNumDropped;
	unsigned short numberOfPayloadTypes;
	SCD_Struct_VC100 PTSpecific[6];
} SCD_Struct_VC102;

typedef struct {
	int type;
	unsigned short version;
	double arrivalTime;
	/*function pointer*/void* notes;
	SCD_Struct_VC99 report;
	SCD_Struct_VC102 dropAck;
	SCD_Struct_VC101) codecRateChange;
} SCD_Struct_VC103;

typedef struct {
	double time[15];
	double bdcd[15];
	double delay[15];
	int frontIndex;
	int rearIndex;
	unsigned size;
} SCD_Struct_VC104;

typedef struct {
	double time[15];
	unsigned transmittedBytes[15];
	unsigned nonFlushableQueueDepth[15];
	int frontIndex;
	int rearIndex;
	unsigned size;
} SCD_Struct_VC105;

typedef struct {
	int field1;
	unsigned short field2;
	double( field3;
	/*function pointer*/void* field4;
	= field5;
	SCD_Struct_VC1 field6;
	SCD_Struct_VC1 field7;
	0 field8;
	2 field9;
	SCD_Struct_VC99 field10;
	0 field11;
	1) field12;
} SCD_Struct_VC106;

typedef struct tagIPPORT {
	int iFlags;
	char szIfName[16];
	/*function pointer*/void* IP;
	unsigned dwIPv4;
	unsigned char abIPv6[16];
	unsigned short wPort;
} tagIPPORT;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct SKEStateOpaque* SKEStateOpaqueRef;

typedef struct __CFData* CFDataRef;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
	unsigned long long field6;
	unsigned long long field7;
	unsigned long long field8;
	unsigned long long field9;
	unsigned long long field10;
	unsigned long long field11;
	unsigned long long field12;
	unsigned long long field13;
	unsigned long long field14;
	unsigned long long field15;
	unsigned long long field16;
	unsigned long long field17;
	unsigned long long field18;
	unsigned long long field19;
	unsigned long long field20;
	unsigned long long field21;
	unsigned long long field22;
	unsigned long long field23;
	unsigned long long field24;
	unsigned long long field25;
	unsigned long long field26;
	unsigned long long field27;
	unsigned long long field28;
	unsigned long long field29;
	unsigned long long field30;
	unsigned long long field31;
	unsigned long long field32;
	unsigned long long field33;
	unsigned long long field34;
	unsigned long long field35;
	unsigned long long field36;
	unsigned long long field37;
	unsigned long long field38;
} SCD_Struct_VC111;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct opaqueVCFFTMeter* opaqueVCFFTMeterRef;

typedef struct VoiceIOFarEndVersionInfo {
	unsigned char farEndHwModel[64];
	unsigned char farEndOSVersion[64];
	unsigned farEndAUVersion;
} VoiceIOFarEndVersionInfo;

typedef struct tagVCMediaQueue* tagVCMediaQueueRef;

typedef struct AudioEventQueue_t* AudioEventQueue_tRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct VCTextTransmitterConfiguration {
	tagHANDLE rtpHandle;
	unsigned sampleRate;
	BOOL isRedEnabled;
	unsigned numRedundantPayloads;
	float txIntervalMin;
} VCTextTransmitterConfiguration;

typedef struct opaqueVCVoiceDetector* opaqueVCVoiceDetectorRef;

typedef struct VCAudioEndpointData {
	SoundDec_t converter;
	BOOL isConverterNeeded;
	opaqueVCAudioBufferList converterBuffer;
	BOOL isLastHostTimeValid;
	double lastHostTime;
	unsigned lastTimestamp;
	unsigned timestampOffset;
	BOOL controllerChanged;
	BOOL isMuted;
	unsigned framesProcessed;
	<VCAudioIOSink><VCAudioIOSource>* delegate;
	/*function pointer*/void* clientCallback;
	void clientContext;
} VCAudioEndpointData;

typedef struct {
	unsigned queueDepth1;
	unsigned queueDepth2;
	unsigned txBitrate;
	unsigned averageBitrate;
	unsigned averageBitrateLong;
	double expectedQueuingDelay;
	double bdcd;
	double normalizedBDCD;
	double normalizedDelay;
	64c bbString;
} SCD_Struct_VC122;

typedef struct {
	int type;
	double arrivalTime;
	BOOL isVCRCInternal;
	BOOL shouldDrainAndProcess;
	/*function pointer*/void* ;
	SCD_Struct_VC122 baseband;
	SCD_Struct_VC19 feedback;
	SCD_Struct_VC20 network;
	SCD_Struct_VC21 probing;
	SCD_Struct_VC22 serverStats;
	SCD_Struct_VC23 packetSent;
	SCD_Struct_VC24 packetReceived;
	SCD_Struct_VC25 rtcpRR;
	AVCRateControlConfig config;
	SCD_Struct_VC26 mediaEvent;
	SCD_Struct_VC27) nwConnection;
} SCD_Struct_VC123;

typedef struct VCAudioIOControllerClientIO {
	void processSamplesContext;
	/*function pointer*/void* processSamples;
	NSObject<OS_dispatch_semaphore>* runLock;
} VCAudioIOControllerClientIO;

typedef struct {
	int rtpSocket;
	int rtcpSocket;
} SCD_Struct_VC125;

typedef struct {
	NSObject<OS_nw_connection>* connection;
	tagVCNWConnectionMonitor monitor;
	int isCallbackSet;
} SCD_Struct_VC126;

typedef struct {
	tagIPPORT srcIPPORT;
	tagIPPORT srcRTPIPPort;
} SCD_Struct_VC127;

typedef struct VCMediaStreamTransportSetupInfo {
	unsigned char setupType;
	/*function pointer*/void* ;
	SCD_Struct_VC125 socketInfo;
	SCD_Struct_VC127 ipInfo;
	SCD_Struct_VC126) nwInfo;
	unsigned sourceRate;
	unsigned datagramChannelToken;
	BOOL isSessionIDValid;
} VCMediaStreamTransportSetupInfo;

typedef struct {
	id field1;
	tagVCNWConnectionMonitor field2;
	int field3;
} SCD_Struct_VC129;

typedef struct tagVCNWConnectionMonitor* tagVCNWConnectionMonitorRef;

typedef struct {
	BOOL reportImmediateMetricsEnabled;
	BOOL reportRtpErasureMetricsEnabled;
	BOOL allowPreWarmCellEnabled;
} SCD_Struct_WR131;

typedef struct ConnectionStats {
	unsigned char totalPacketsReceived;
	unsigned char connectionStats[2];
	unsigned char currentIndex;
	double startTime;
} ConnectionStats;

typedef struct ConnectionStatsHistory {
	unsigned char latestConnectionStatsIndex;
	unsigned char totalPacketsReceived[5];
	unsigned char connectionStats[2][5];
	unsigned char connectionStatsRatio[2][5];
} ConnectionStatsHistory;

typedef struct {
	char field1[65];
	int field2;
	char field3[65];
	int field4;
	void field5;
} SCD_Struct_VC134;

typedef struct OpaqueFigCFWeakReferenceHolder* OpaqueFigCFWeakReferenceHolderRef;

typedef struct {
	tagSRTPExchangeInfo field1;
	unsigned field2;
	tagSRTPExchangeInfo field3;
	unsigned field4;
	int field5;
	int field6;
} SCD_Struct_VC136;

typedef struct {
	unsigned short field1[12];
	unsigned char field2;
	BOOL field3;
	unsigned short field4;
	unsigned char field5;
	BOOL field6;
	BOOL field7;
	unsigned long long field8;
	BOOL field9;
	BOOL field10;
	BOOL field11;
	unsigned short field12;
	SCD_Struct_VC73 field13;
	BOOL field14;
} SCD_Struct_VC137;

typedef struct tagVCTextJitterBufferConfiguration {
	unsigned sampleRate;
	<VCTextFrameReceiver>* delegate;
} tagVCTextJitterBufferConfiguration;

typedef struct JitterPreloadQueue_t* JitterPreloadQueue_tRef;

typedef struct JitterQueue_t* JitterQueue_tRef;

typedef struct tagAccessUnitHeaderInfo {
	unsigned short accessUnitCount;
	unsigned short accessUnitSize[3];
} tagAccessUnitHeaderInfo;

typedef struct _tls_record_s* tls_record_sRef;

typedef struct {
	double responseTime;
	unsigned char linkID;
	unsigned short statsIdentifier;
	unsigned short remoteTimestamp;
	unsigned short serverPacketInterval;
	unsigned short uplinkBandwidthSample;
	unsigned short totalRemoteMediaPacketSent;
	unsigned short totalRemoteMediaPacketReceived;
} SCD_Struct_VC143;

typedef struct {
	unsigned char field1;
	double field2;
	unsigned char field3[1472];
	int field4;
	int field5;
	SCD_Struct_VC1 field6;
	3 field7;
	7 field8;
} SCD_Struct_VC144;

typedef struct sockaddr {
	unsigned char sa_len;
	unsigned char sa_family;
	char sa_data[14];
} sockaddr;

typedef struct tagVCMediaStreamSyncTime {
	double ntpTime;
	long long sampleRate;
	unsigned rtpTimestampOfNTP;
} tagVCMediaStreamSyncTime;

typedef struct tagCONNRESULT {
	unsigned dwCallID;
	int iResultCount;
	int iRole;
	unsigned dwRemoteCallID;
	int proto;
	int bIfRelay;
	unsigned short wRelayServType;
	unsigned short wChannelNumber;
	tagIPPORT mbLocal;
	tagIPPORT mbRemote;
	tagIPPORT mbSrc;
	tagIPPORT mbDst;
	tagIPPORT mbRemoteSrc;
	tagIPPORT mbRelayExt;
	unsigned dwRTT;
	int bIfLocalCellularQoS;
	int bIfRemoteCellularQoS;
	int iLocalCellTech;
	int iRemoteCellTech;
	unsigned short wCellularMTU;
	int bIfUpgrade;
	int bIfPrimary;
	int bIfReplaceOnly;
	tagCONNRESULT next;
} tagCONNRESULT;

typedef struct sockaddr_storage {
	unsigned char ss_len;
	unsigned char ss_family;
	char __ss_pad1[6];
	long long __ss_align;
	char __ss_pad2[112];
} sockaddr_storage;

typedef struct {
	void info;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
} SCD_Struct_VC149;

typedef struct tagWRMMetricsInfo {
	BOOL bInitialized;
	tagHANDLE hRTPHandle;
	unsigned dwReportInterval;
	unsigned dwWrmTime;
	unsigned dwPlaybackCount;
	unsigned dwPlaybackCountSpeech;
	unsigned dwErasureCount;
	unsigned dwErasureSilence;
	unsigned videoFrameErasureCount;
	unsigned dwTimeOfLastRRPacket;
	unsigned dwEstimatedRTTMilliSeconds;
	unsigned dwJitter;
	unsigned dwTotalPacketRecv;
	unsigned dwDTXPacketRecv;
	unsigned long long callId;
	unsigned long long nominalJitterBufferDelay;
	unsigned long long targetJitterQueueSize;
	int nFraction;
	/*function pointer*/void* reportWRMMetricsCallback;
	SCD_Struct_VC149 wrmMetricsReportingContext;
	opaque_pthread_mutex_t wrmMetricsReportingLock;
	unsigned dwInternalTSRate;
	unsigned dwPacketSent;
	unsigned isCallAudioOnly;
	unsigned bwEstimation;
	unsigned targetBitrate;
	unsigned oneWayRelativeDelay;
	unsigned adaptationPacketLossPercentage;
	unsigned isLocalCellular;
	unsigned isVideoPaused;
	unsigned primaryVideoPacketReceived;
	unsigned primaryAudioPacketReceived;
	unsigned totalVideoPacketReceived;
	unsigned totalAudioPacketReceived;
	unsigned totalVideoPacketExpected;
	unsigned totalAudioPacketExpected;
} tagWRMMetricsInfo;

typedef struct VCAudioStreamTransportRealtimeContext {
	tagWRMMetricsInfo wrmInfo;
	tagHANDLE rtpHandle;
} VCAudioStreamTransportRealtimeContext;

typedef struct OpaqueFigCFWeakReference* OpaqueFigCFWeakReferenceRef;

typedef struct __IOSurfaceAccelerator* IOSurfaceAcceleratorRef;

typedef struct OpaqueFigAssetWriter* OpaqueFigAssetWriterRef;

typedef struct OpaqueVTCompressionSession* OpaqueVTCompressionSessionRef;

typedef struct VCStatisticsStatsHistoryElement {
	unsigned char linkID;
	double statsUpdateTime;
	unsigned statsTimestamp;
	unsigned totalPacketSent;
	unsigned totalPacketReceived;
	unsigned long long totalByteSent;
	unsigned long long totalByteReceived;
	unsigned long long totalByteServerStatsUsed;
	unsigned maxBurstyLoss;
} VCStatisticsStatsHistoryElement;

typedef struct {
	unsigned averageNetworkBitrate;
	unsigned averageMediaBitrate;
	double averageFramerate;
} SCD_Struct_VC157;

typedef struct {
	unsigned short serverTimestamp;
	unsigned short serverPacketInterval;
	unsigned short totalServerPacketReceived;
	unsigned short totalServerPacketSent;
	unsigned short uplinkBandwidthEstimate;
} SCD_Struct_VC158;

typedef struct {
	unsigned short streamIDs[12];
	unsigned char numOfStreamIDs;
	BOOL probingGroupIDIsSet;
	unsigned short probingGroupID;
	unsigned char priority;
	BOOL pktCountingFlag;
	BOOL participantIDIsSet;
	unsigned long long participantID;
	BOOL participantGenerationCounterIsSet;
	BOOL ignorePriority;
	BOOL statsIDIsSet;
	unsigned short statsID;
	SCD_Struct_VC158 statsPayload;
	BOOL isTransitionPacket;
} SCD_Struct_VC159;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct fd_set {
	int fds_bits[32];
} fd_set;

typedef struct {
	unsigned char field1;
	double field2;
	unsigned char field3[1472];
	int field4;
	int field5;
	SCD_Struct_VC1 field6;
	5 field7;
	9 field8;
} SCD_Struct_VC162;

typedef struct {
	unsigned short field1;
	unsigned short field2;
	unsigned short field3;
	unsigned short field4;
	unsigned short field5;
	unsigned short field6;
	unsigned field7;
	unsigned field8;
	unsigned field9;
	unsigned short field10;
	unsigned field11;
	unsigned field12;
} SCD_Struct_VC163;

typedef struct {
	unsigned short timeStamp;
	unsigned short bandwithEstimation;
	unsigned short videoBurstLoss;
	unsigned short videoReceviedPkts;
	unsigned short audioBurstLoss;
	unsigned short audioReceviedPkts;
	unsigned totalReceviedKbits;
	unsigned receiveQueueTarget;
	unsigned queuingDelay;
	unsigned short sendTimestamp;
	unsigned owrd;
	unsigned connectionStatsBuffer;
} SCD_Struct_VC164;

typedef struct {
	unsigned frac;
	unsigned sec;
} SCD_Struct_VC165;

typedef union tagNTP {
	unsigned long long wide;
	SCD_Struct_VC165 time;
} tagNTP;

