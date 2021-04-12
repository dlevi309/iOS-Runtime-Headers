/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class AVCStatisticsCollector, NSMutableArray, VCAudioPayload, VCTransportSession, NSArray;

@interface VCAudioTransmitterConfig : NSObject {

	tagHANDLE* _rtpHandle;
	tagHANDLE* _rtpVideo;
	tagHANDLE* _mediaQueue;
	tagHANDLE* _afrcHandle;
	void* _controlInfoGenerator;
	AVCStatisticsCollector* _statisticsCollector;
	NSMutableArray* _audioPayloads;
	VCAudioPayload* _chosenAudioPayload;
	VCAudioPayload* _chosenDTXPayload;
	unsigned char _packetsPerBundle;
	BOOL _useRateControl;
	int _bundlingScheme;
	BOOL _isUseCaseWatchContinuity;
	BOOL _allowAudioSwitching;
	BOOL _supportsAdaptation;
	int _chosenRedPayloadType;
	BOOL _redEnabled;
	BOOL _includeRedSequenceOffset;
	unsigned _redNumPayloads;
	unsigned _redMaxDelay20ms;
	BOOL _transmitROC;
	BOOL _needsPacketThread;
	int _operatingMode;
	AudioStreamBasicDescription _inputFormat;
	opaqueRTCReportingRef _reportingAgent;
	int _reportingParentID;
	VCTransportSession* _transportSession;
	BOOL _ignoreSilence;
	unsigned _maxIDSStreamIdCount;
	NSArray* _streamIDs;
	unsigned _tierNetworkBitrate;
	NSArray* _supportedNumRedundantPayload;
	BOOL _sendActiveVoiceOnly;
	BOOL _currentDTXEnable;
	unsigned char _mediaControlInfoVersion;
	BOOL _alwaysOnAudioRedundancyEnabled;
	BOOL _cellularAllowRedLowBitratesEnabled;
	BOOL _wifiAllowRedLowBitratesEnabled;

}

@property (assign,nonatomic) tagHANDLE* rtpHandle;                                          //@synthesize rtpHandle=_rtpHandle - In the implementation block
@property (assign,nonatomic) tagHANDLE* afrcHandle;                                         //@synthesize afrcHandle=_afrcHandle - In the implementation block
@property (assign,nonatomic) tagHANDLE* mediaQueue;                                         //@synthesize mediaQueue=_mediaQueue - In the implementation block
@property (assign,nonatomic) tagHANDLE* rtpVideo;                                           //@synthesize rtpVideo=_rtpVideo - In the implementation block
@property (assign,nonatomic) void* controlInfoGenerator;                                    //@synthesize controlInfoGenerator=_controlInfoGenerator - In the implementation block
@property (nonatomic,retain) NSMutableArray * audioPayloads;                                //@synthesize audioPayloads=_audioPayloads - In the implementation block
@property (nonatomic,retain) VCAudioPayload * chosenAudioPayload;                           //@synthesize chosenAudioPayload=_chosenAudioPayload - In the implementation block
@property (nonatomic,retain) VCAudioPayload * chosenDTXPayload;                             //@synthesize chosenDTXPayload=_chosenDTXPayload - In the implementation block
@property (assign,nonatomic) unsigned char packetsPerBundle;                                //@synthesize packetsPerBundle=_packetsPerBundle - In the implementation block
@property (assign,nonatomic) BOOL useRateControl;                                           //@synthesize useRateControl=_useRateControl - In the implementation block
@property (assign,nonatomic) int bundlingScheme;                                            //@synthesize bundlingScheme=_bundlingScheme - In the implementation block
@property (assign,nonatomic) BOOL isUseCaseWatchContinuity;                                 //@synthesize isUseCaseWatchContinuity=_isUseCaseWatchContinuity - In the implementation block
@property (assign,nonatomic) BOOL allowAudioSwitching;                                      //@synthesize allowAudioSwitching=_allowAudioSwitching - In the implementation block
@property (assign,nonatomic) BOOL supportsAdaptation;                                       //@synthesize supportsAdaptation=_supportsAdaptation - In the implementation block
@property (assign,nonatomic) BOOL needsPacketThread;                                        //@synthesize needsPacketThread=_needsPacketThread - In the implementation block
@property (assign,nonatomic) int chosenRedPayloadType;                                      //@synthesize chosenRedPayloadType=_chosenRedPayloadType - In the implementation block
@property (assign,getter=isRedEnabled,nonatomic) BOOL redEnabled;                           //@synthesize redEnabled=_redEnabled - In the implementation block
@property (assign,nonatomic) BOOL includeRedSequenceOffset;                                 //@synthesize includeRedSequenceOffset=_includeRedSequenceOffset - In the implementation block
@property (assign,nonatomic) unsigned redNumPayloads;                                       //@synthesize redNumPayloads=_redNumPayloads - In the implementation block
@property (assign,nonatomic) unsigned redMaxDelay20ms;                                      //@synthesize redMaxDelay20ms=_redMaxDelay20ms - In the implementation block
@property (assign,nonatomic) BOOL transmitROC;                                              //@synthesize transmitROC=_transmitROC - In the implementation block
@property (assign,nonatomic) int operatingMode;                                             //@synthesize operatingMode=_operatingMode - In the implementation block
@property (nonatomic,retain) VCTransportSession * transportSession;                         //@synthesize transportSession=_transportSession - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription inputFormat;                       //@synthesize inputFormat=_inputFormat - In the implementation block
@property (assign,nonatomic) opaqueRTCReportingRef reportingAgent;                          //@synthesize reportingAgent=_reportingAgent - In the implementation block
@property (assign,nonatomic) int reportingParentID;                                         //@synthesize reportingParentID=_reportingParentID - In the implementation block
@property (nonatomic,retain) AVCStatisticsCollector * statisticsCollector;                  //@synthesize statisticsCollector=_statisticsCollector - In the implementation block
@property (assign,nonatomic) BOOL ignoreSilence;                                            //@synthesize ignoreSilence=_ignoreSilence - In the implementation block
@property (nonatomic,retain) NSArray * streamIDs;                                           //@synthesize streamIDs=_streamIDs - In the implementation block
@property (assign,nonatomic) unsigned tierNetworkBitrate;                                   //@synthesize tierNetworkBitrate=_tierNetworkBitrate - In the implementation block
@property (assign,nonatomic) unsigned maxIDSStreamIdCount;                                  //@synthesize maxIDSStreamIdCount=_maxIDSStreamIdCount - In the implementation block
@property (nonatomic,retain) NSArray * supportedNumRedundantPayload;                        //@synthesize supportedNumRedundantPayload=_supportedNumRedundantPayload - In the implementation block
@property (assign,nonatomic) BOOL sendActiveVoiceOnly;                                      //@synthesize sendActiveVoiceOnly=_sendActiveVoiceOnly - In the implementation block
@property (assign,getter=isCurrentDTXEnabled,nonatomic) BOOL currentDTXEnable;              //@synthesize currentDTXEnable=_currentDTXEnable - In the implementation block
@property (assign,nonatomic) unsigned char mediaControlInfoVersion;                         //@synthesize mediaControlInfoVersion=_mediaControlInfoVersion - In the implementation block
@property (assign,nonatomic) BOOL alwaysOnAudioRedundancyEnabled;                           //@synthesize alwaysOnAudioRedundancyEnabled=_alwaysOnAudioRedundancyEnabled - In the implementation block
@property (assign,nonatomic) BOOL cellularAllowRedLowBitratesEnabled;                       //@synthesize cellularAllowRedLowBitratesEnabled=_cellularAllowRedLowBitratesEnabled - In the implementation block
@property (assign,nonatomic) BOOL wifiAllowRedLowBitratesEnabled;                           //@synthesize wifiAllowRedLowBitratesEnabled=_wifiAllowRedLowBitratesEnabled - In the implementation block
-(void)dealloc;
-(id)description;
-(BOOL)supportsAdaptation;
-(tagHANDLE*)mediaQueue;
-(AudioStreamBasicDescription)inputFormat;
-(void)setInputFormat:(AudioStreamBasicDescription)arg1 ;
-(void)setOperatingMode:(int)arg1 ;
-(int)operatingMode;
-(void)setMediaQueue:(tagHANDLE*)arg1 ;
-(void)setStatisticsCollector:(AVCStatisticsCollector *)arg1 ;
-(opaqueRTCReportingRef)reportingAgent;
-(AVCStatisticsCollector *)statisticsCollector;
-(tagHANDLE*)rtpHandle;
-(BOOL)isRedEnabled;
-(int)reportingParentID;
-(BOOL)allowAudioSwitching;
-(void)setAllowAudioSwitching:(BOOL)arg1 ;
-(BOOL)isCurrentDTXEnabled;
-(void)setCurrentDTXEnable:(BOOL)arg1 ;
-(void)setReportingAgent:(opaqueRTCReportingRef)arg1 ;
-(void)setRtpHandle:(tagHANDLE*)arg1 ;
-(void)setControlInfoGenerator:(void*)arg1 ;
-(void)setAudioPayloads:(NSMutableArray *)arg1 ;
-(void)setChosenAudioPayload:(VCAudioPayload *)arg1 ;
-(void)setChosenDTXPayload:(VCAudioPayload *)arg1 ;
-(void)setAfrcHandle:(tagHANDLE*)arg1 ;
-(void)setUseRateControl:(BOOL)arg1 ;
-(void)setBundlingScheme:(int)arg1 ;
-(void)setSupportsAdaptation:(BOOL)arg1 ;
-(void)setNeedsPacketThread:(BOOL)arg1 ;
-(void)setReportingParentID:(int)arg1 ;
-(void)setPacketsPerBundle:(unsigned char)arg1 ;
-(void)setTransmitROC:(BOOL)arg1 ;
-(void)setIgnoreSilence:(BOOL)arg1 ;
-(void)setChosenRedPayloadType:(int)arg1 ;
-(void)setRedEnabled:(BOOL)arg1 ;
-(void)setIncludeRedSequenceOffset:(BOOL)arg1 ;
-(void)setRedNumPayloads:(unsigned)arg1 ;
-(void)setRedMaxDelay20ms:(unsigned)arg1 ;
-(void)setStreamIDs:(NSArray *)arg1 ;
-(void)setTierNetworkBitrate:(unsigned)arg1 ;
-(unsigned)maxIDSStreamIdCount;
-(void)setMaxIDSStreamIdCount:(unsigned)arg1 ;
-(NSArray *)supportedNumRedundantPayload;
-(void)setSupportedNumRedundantPayload:(NSArray *)arg1 ;
-(void)setSendActiveVoiceOnly:(BOOL)arg1 ;
-(void)setAlwaysOnAudioRedundancyEnabled:(BOOL)arg1 ;
-(void)setCellularAllowRedLowBitratesEnabled:(BOOL)arg1 ;
-(void)setWifiAllowRedLowBitratesEnabled:(BOOL)arg1 ;
-(unsigned)redNumPayloads;
-(unsigned)redMaxDelay20ms;
-(BOOL)sendActiveVoiceOnly;
-(NSMutableArray *)audioPayloads;
-(void)setMediaControlInfoVersion:(unsigned char)arg1 ;
-(unsigned char)mediaControlInfoVersion;
-(BOOL)alwaysOnAudioRedundancyEnabled;
-(unsigned char)packetsPerBundle;
-(BOOL)useRateControl;
-(tagHANDLE*)rtpVideo;
-(void)setIsUseCaseWatchContinuity:(BOOL)arg1 ;
-(void)setTransportSession:(VCTransportSession *)arg1 ;
-(void)setRtpVideo:(tagHANDLE*)arg1 ;
-(BOOL)cellularAllowRedLowBitratesEnabled;
-(BOOL)wifiAllowRedLowBitratesEnabled;
-(VCTransportSession *)transportSession;
-(int)bundlingScheme;
-(void*)controlInfoGenerator;
-(tagHANDLE*)afrcHandle;
-(VCAudioPayload *)chosenAudioPayload;
-(VCAudioPayload *)chosenDTXPayload;
-(int)chosenRedPayloadType;
-(BOOL)isUseCaseWatchContinuity;
-(BOOL)includeRedSequenceOffset;
-(BOOL)transmitROC;
-(BOOL)ignoreSilence;
-(BOOL)needsPacketThread;
-(NSArray *)streamIDs;
-(unsigned)tierNetworkBitrate;
@end

