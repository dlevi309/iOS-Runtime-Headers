/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class AVCStatisticsCollector;

@interface VCNWConnectionCongestionDetector : NSObject {

	AVCStatisticsCollector* _statisticsCollector;
	SCD_Struct_VC31 _previousStatistics;
	unsigned _averageThroughputBps;
	unsigned _averagePacketDelayMs;
	unsigned _maxAveragePacketDelayMs;
	unsigned _lastTimestampWithPacketDrop;
	unsigned _packetDropCount;
	unsigned _packetDropCountPerFrame;
	BOOL _didSendCongestionEvent;
	void* _logNWDump;

}

@property (nonatomic,retain) AVCStatisticsCollector * statisticsCollector;              //@synthesize statisticsCollector=_statisticsCollector - In the implementation block
@property (readonly) unsigned averageThroughputBps;                                     //@synthesize averageThroughputBps=_averageThroughputBps - In the implementation block
@property (readonly) unsigned averagePacketDelayMs;                                     //@synthesize averagePacketDelayMs=_averagePacketDelayMs - In the implementation block
@property (assign) unsigned maxAveragePacketDelayMs;                                    //@synthesize maxAveragePacketDelayMs=_maxAveragePacketDelayMs - In the implementation block
@property (readonly) unsigned packetDropCount;                                          //@synthesize packetDropCount=_packetDropCount - In the implementation block
-(void)dealloc;
-(void)setStatisticsCollector:(AVCStatisticsCollector *)arg1 ;
-(void)enableNWLogDump:(void*)arg1 ;
-(unsigned)averagePacketDelayMs;
-(unsigned)maxAveragePacketDelayMs;
-(unsigned)averageThroughputBps;
-(unsigned)packetDropCount;
-(void)setMaxAveragePacketDelayMs:(unsigned)arg1 ;
-(AVCStatisticsCollector *)statisticsCollector;
-(void)sendCongestionEventWithTimestamp:(unsigned)arg1 ;
-(BOOL)processNWConnectionNotification:(ifnet_interface_advisory*)arg1 ;
-(BOOL)processNWConnectionPacketEvent:(packet_id*)arg1 eventType:(int)arg2 ;
@end

