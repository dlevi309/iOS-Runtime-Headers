/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
*/

#import <ViceroyTrace/VCAggregator.h>
#import <libobjc.A.dylib/VCAdaptiveLearningDelegate.h>

@class NSString, CallSegment, VCHistogram, VCAdaptiveLearning;

@interface VCAggregatorFaceTime : VCAggregator <VCAdaptiveLearningDelegate> {

	NSString* _remoteInterfaceType;
	NSString* _currentSegmentKey;
	NSString* _relayServer;
	int _relayType;
	NSString* _accessToken;
	NSString* _remoteOSBuild;
	CallSegment* _currentSegment;
	unsigned _currentWidth;
	BOOL _currentDegradedVideoState;
	double _degradedVideoStartTime;
	double _degradedVideoDuration;
	BOOL _currentNoRemoteState;
	double _noRemoteStartTime;
	int _callTotalDurationTicks;
	int _callAggregatedDurationTicks;
	double _callAverageAudioErasuresRate;
	double _callAverageTargetBitrate;
	double _callAverageSendBitrate;
	double _callAverageReceiveBitrate;
	double _callAverageTotalVideoSendBitrate;
	double _callAverageVideoMediaSendBitrate;
	double _callAverageVideoHeaderSendBitrate;
	double _callAverageVideoFECSendBitrate;
	double _callAverageTotalVideoRecvBitrate;
	double _callAverageRTT;
	double _callAverageAbnormalRTT;
	unsigned _callAbnormalRTTCount;
	double _callAverageAbnormalPLR;
	unsigned _callAbnormalPLRCount;
	double _callAverageAbnormalBPL;
	unsigned _callAbnormalBPLCount;
	double _callPoorConnectionTotalLength;
	double _callPoorConnectionMaxLength;
	unsigned _callPoorConnectionFrequency;
	double _callTotalVideoStallTime;
	double _callTotalMediaStallTime;
	double _callMaxMediaStallTime;
	double _callMaxVideoStallInterval;
	double _callTotalAudioStallTime;
	double _callMaxAudioStallInterval;
	double _lastReportedAudioStallTime;
	double _lastReportedVideoStallTime;
	double _lastReportedMediaStallTime;
	double _callLastVideoResolutionChangeTime;
	unsigned _noRemoteAtCallEnd;
	unsigned _callTotalMediaStallCount;
	unsigned _remoteNoRemoteAtCallEnd;
	unsigned _totalConnectionTime;
	unsigned _startConnectionTime;
	unsigned _transportConnectionTime;
	unsigned _mediaConnectionTime;
	unsigned _callMode;
	unsigned _callDeviceRole;
	unsigned _callTransportType;
	unsigned _callErrorCode;
	unsigned _callDetailedErrorCode;
	unsigned _numberOfSegments;
	unsigned _REDState;
	unsigned char _wifiAssistState;
	unsigned long long _lastReportedAudioPacketSent;
	unsigned long long _lastReportedVideoPacketSent;
	unsigned _lastReportedAudioPacketRecv;
	unsigned _lastReportedVideoPacketRecv;
	unsigned _initialRampUpTime;
	int _initialBitrateDelta;
	int _initialBitrate;
	unsigned _significantOOOPacketCount;
	unsigned _totalVideoPacketsExpected;
	unsigned _totalFIRDemandCounter;
	unsigned _totalFIRCounter;
	unsigned _videoFrameDecodedButSkippedCounter;
	unsigned _videoFrameImcompleteNextTSCounter;
	unsigned _videoFrameTotalIncompleteCounter;
	unsigned _decodedVideoFrameEnqueueCounter;
	unsigned _videoFrameReceivedCounter;
	unsigned _videoFrameExpectedCounter;
	unsigned _videoFrameNonFECTotalCounter;
	unsigned _videoFrameNonFECCompleteCounter;
	unsigned _encodedVideoFrameCounter;
	unsigned _captureVideoFrameCounter;
	unsigned _overshootSendBitrate;
	unsigned _undershootSendBitrate;
	unsigned _overUtilizedBandwidth;
	unsigned _underUtilizedBandwidth;
	unsigned _negotiatedSwitches;
	unsigned _remoteSwitches;
	unsigned _lastReportedTotalCellDupTxDataBytes;
	unsigned _lastReportedTotalCellDupRxDataBytes;
	unsigned _lastReportedTotalUsedCellBudgetTxDataBytes;
	unsigned _lastReportedTotalUsedCellBudgetRxDataBytes;
	unsigned _lastReportedMBLRampDownCount;
	unsigned _lastReportedSuddenBandwidthDropCount;
	unsigned char _duplicationType;
	unsigned long long _lastReportedTotalCellTxDataBytes;
	unsigned long long _lastReportedTotalCellRxDataBytes;
	unsigned long long _lastReportedTotalWifiTxDataBytes;
	unsigned long long _lastReportedTotalWifiRxDataBytes;
	unsigned _totalDuplicationDuration;
	unsigned _wifiToCellHandoverCount;
	unsigned _cellToWifiHandoverCount;
	BOOL _isDuplicationEnabled;
	BOOL _remoteFaceTimeSwitchesAvailable;
	double _duplicationStartTime;
	VCHistogram* _callVideoSwitchPeriodHistogram;
	VCAdaptiveLearning* _adaptiveLearning;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reset;
-(id)initWithDelegate:(id)arg1 ;
-(int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2 ;
-(int)initialSettledBitrate;
-(int)previousISBRForSegment:(id)arg1 ;
-(int)adaptiveLearningState;
-(void)updateSegment:(id)arg1 TBR:(int)arg2 ISBTR:(int)arg3 SATXBR:(int)arg4 SARBR:(int)arg5 BWE:(int)arg6 ;
-(int)shortTermAverageTBRForSegment:(id)arg1 ;
-(int)longTermAverageTBRForSegment:(id)arg1 ;
-(int)longTermAverageISBRForSegment:(id)arg1 ;
-(int)shortTermAverageISBRForSegment:(id)arg1 ;
-(int)longTermAverageSATXBRForSegment:(id)arg1 ;
-(int)shortTermAverageSATXBRForSegment:(id)arg1 ;
-(int)longTermAverageSARBRForSegment:(id)arg1 ;
-(int)shortTermAverageSARBRForSegment:(id)arg1 ;
-(int)longTermAverageBWEForSegment:(id)arg1 ;
-(int)shortTermAverageBWEForSegment:(id)arg1 ;
-(void)saveCallSegmentHistory;
-(id)aggregatedSegmentReport:(int)arg1 ;
-(id)aggregatedSegmentQRReport;
-(id)duplicationIndicator;
-(BOOL)isLocalInterfaceTypeForSegment:(id)arg1 equalTo:(id)arg2 ;
-(void)flushCurrentSegment;
-(void)updateVideoFECStats:(id)arg1 ;
-(void)updateRelayInfo:(id)arg1 ;
-(void)startNewSegment;
-(BOOL)isDuplicationChanged:(BOOL)arg1 ;
-(void)updateRTStats:(id)arg1 ;
-(void)updateVideoResolution:(id)arg1 ;
-(void)updatePauseVideo:(BOOL)arg1 ;
-(void)updateRoleModeTransport:(unsigned short)arg1 deviceRole:(unsigned short)arg2 transportType:(unsigned short)arg3 ;
-(void)updateErrorCode:(id)arg1 ;
-(void)updateConnectionTelemetry:(id)arg1 ;
-(void)updateNoRemoteState:(BOOL)arg1 ;
-(void)updateConnectionTimes:(id)arg1 ;
-(void)updateVideoSwitchTimes;
-(void)updateAdaptiveLearningStats:(unsigned)arg1 payload:(id)arg2 ;
-(void)updateSwitchConfiguration:(unsigned)arg1 payload:(id)arg2 ;
-(void)processEventWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 ;
-(void)initAdaptiveLearningWithParameters:(id)arg1 ;
-(id)aggregatedCallReports;
-(id)aggregatedSessionReport;
@end

