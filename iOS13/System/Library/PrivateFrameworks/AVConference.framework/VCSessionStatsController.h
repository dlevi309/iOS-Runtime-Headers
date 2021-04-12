/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCSessionStatsControllerDelegate, OS_dispatch_source;
#import <AVConference/AVConference-Structs.h>
@class AVCStatisticsCollector, NSObject, VCConnectionManager, VCTransportStream;

@interface VCSessionStatsController : NSObject {

	id<VCSessionStatsControllerDelegate> _weakDelegate;
	AVCStatisticsCollector* _uplinkStatisticsCollector;
	AVCStatisticsCollector* _downlinkStatisticsCollector;
	SCD_Struct_VC143 _remoteStats;
	NSObject*<OS_dispatch_source> _localSessionStatsTimemoutSource;
	unsigned _statsRequestCounter;
	VCConnectionManager* _connectionManager;
	VCTransportStream* _transportStream;
	double _lastTriggerRateControlTime;
	id _reportingAgentWeak;
	unsigned _uplinkServerStatsByteUsed;
	unsigned _downlinkServerStatsByteUsed;
	tagVCRealTimeThread* _statsReceiveThread;
	unsigned short _streamID;
	unsigned short _statsArrayIndex;
	BOOL _enableStatsReceiveThread;
	unsigned _previousTotalPacketSent;
	unsigned _previousTotalPacketReceived;
	unsigned _uplinkMostRecentSendTimestamp;
	unsigned _downlinkMostRecentSendTimestamp;
	BOOL _didReceiveServerStatsResponse;
	BOOL _enableStatsReporting;
	double _statsReportingInterval;
	double _lastStatsReportTime;
	int _lastProcessedBytesSent;
	int _bytesSentToReport;
	int _maxSentRate;
	int _minSentRate;
	int _lastProcessedBytesReceived;
	int _bytesReceivedToReport;
	int _maxReceivedRate;
	int _minReceivedRate;
	double _lastUpdateTime;
	double _lastTimeReceiveStatsFailed;
	BOOL _isReceiveStatsFailedSymptomReported;
	unsigned _statsResponseCounter;
	unsigned _numStatsDroppedDueToStatsID;
	unsigned _numStatsDroppedDueToLinkID;
	unsigned _numStatsDroppedDueToTooLate;
	unsigned _numStatsProcessed;
	unsigned _numStatsTriggered;
	double _totalStatsTransportStreamQueueTime;
	double _maxStatsTransportStreamQueueTime;
	double _lastHealthPrintTime;

}

@property (readonly) id reportingAgent; 
@property (readonly) id strongDelegate; 
@property (assign,nonatomic) double statsReportingInterval;              //@synthesize statsReportingInterval=_statsReportingInterval - In the implementation block
-(void)dealloc;
-(void)reset;
-(id)strongDelegate;
-(void)registerPeriodicTask;
-(void)deregisterPeriodicTask;
-(id)reportingAgent;
-(void)periodicTask:(void*)arg1 ;
-(id)initWithDelegate:(id)arg1 connectionManager:(id)arg2 uplinkStatsCollector:(id)arg3 downlinkStatsCollector:(id)arg4 reportingAgent:(opaqueRTCReportingRef)arg5 transportSessionID:(unsigned)arg6 streamID:(unsigned short)arg7 mediaQueue:(tagVCMediaQueueRef)arg8 ;
-(void)startLocalSessionStatsUpdate;
-(void)stopLocalSessionStatsUpdate;
-(void)setStatsReportingInterval:(double)arg1 ;
-(void)flushRealTimeReportingStats;
-(void)startLocalSessionStatsReceive;
-(void)startLocalSessionStatsSend;
-(void)sendLocalStats;
-(void)triggerRateControlWithLocalSessionStats:(SCD_Struct_VC75)arg1 time:(double)arg2 ;
-(BOOL)isRemoteSessionStatsTooLateWithStatsId:(unsigned short)arg1 ;
-(unsigned short)translateTimestampFromMicro:(double)arg1 ;
-(void)handleRemoteSessionStats:(SCD_Struct_VC144*)arg1 ;
-(void)healthPrintForServerStats;
-(void)updateRemoteSessionStats:(SCD_Struct_VC143)arg1 ;
-(void)resetHealthPrintCounters;
-(void)statsReceiveStatsPayload;
-(double)statsReportingInterval;
@end

