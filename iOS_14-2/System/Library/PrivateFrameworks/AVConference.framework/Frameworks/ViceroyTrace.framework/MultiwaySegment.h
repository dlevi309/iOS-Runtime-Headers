/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
*/


@protocol SegmentStatsDelegate;
@class NSString;

@interface MultiwaySegment : NSObject {

	int _duration;
	int _adjustedDuration;
	int _interval;
	int _frequency;
	double _averageTargetBitrateSum;
	unsigned _averageTargetBitrateReportCounter;
	double _roundTripTimeSum;
	unsigned _roundTripTimeReportCounter;
	unsigned _totalPacketsReceived;
	unsigned _totalPacketsLost;
	unsigned _totalPacketsSent;
	unsigned long long _totalBytesSent;
	unsigned long long _totalBytesReceived;
	NSString* _segmentName;
	NSString* _previousSegmentName;
	id<SegmentStatsDelegate> _delegate;

}

@property (readonly) NSString * segmentName;                           //@synthesize segmentName=_segmentName - In the implementation block
@property (readonly) NSString * previousSegmentName;                   //@synthesize previousSegmentName=_previousSegmentName - In the implementation block
@property (assign) int duration;                                       //@synthesize duration=_duration - In the implementation block
@property (assign) int adjustedDuration;                               //@synthesize adjustedDuration=_adjustedDuration - In the implementation block
@property (readonly) double averageTargetBitrate; 
@property (assign) unsigned totalPacketsReceived;                      //@synthesize totalPacketsReceived=_totalPacketsReceived - In the implementation block
@property (assign) unsigned totalPacketsLost;                          //@synthesize totalPacketsLost=_totalPacketsLost - In the implementation block
@property (assign) unsigned totalPacketsSent;                          //@synthesize totalPacketsSent=_totalPacketsSent - In the implementation block
@property (assign) unsigned long long totalBytesSent;                  //@synthesize totalBytesSent=_totalBytesSent - In the implementation block
@property (assign) unsigned long long totalBytesReceived;              //@synthesize totalBytesReceived=_totalBytesReceived - In the implementation block
-(NSString *)segmentName;
-(void)setDuration:(int)arg1 ;
-(id)delegate;
-(void)setAdjustedDuration:(int)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(int)adjustedDuration;
-(unsigned long long)totalBytesReceived;
-(double)packetLossRate;
-(void)setTotalBytesReceived:(unsigned long long)arg1 ;
-(int)duration;
-(void)dealloc;
-(void)setTotalBytesSent:(unsigned long long)arg1 ;
-(unsigned long long)totalBytesSent;
-(unsigned)RTPeriod;
-(double)averageTargetBitrate;
-(id)segmentReport;
-(NSString *)previousSegmentName;
-(id)initWithSegmentName:(id)arg1 previousSegmentName:(id)arg2 delegate:(id)arg3 ;
-(void)processTargetBitrate:(unsigned)arg1 ;
-(void)processRoundTripTime:(unsigned)arg1 ;
-(double)averageRoundTripTime;
-(unsigned)totalPacketsReceived;
-(void)setTotalPacketsReceived:(unsigned)arg1 ;
-(unsigned)totalPacketsLost;
-(void)setTotalPacketsLost:(unsigned)arg1 ;
-(unsigned)totalPacketsSent;
-(void)setTotalPacketsSent:(unsigned)arg1 ;
@end

