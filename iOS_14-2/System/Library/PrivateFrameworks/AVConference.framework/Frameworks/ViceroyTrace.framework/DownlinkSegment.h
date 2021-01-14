/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
*/

#import <ViceroyTrace/MultiwaySegment.h>

@interface DownlinkSegment : MultiwaySegment {

	double _videoDegradedStartTime;
	BOOL _isVideoDegraded;
	unsigned _videoDegradedTotalCounter;
	double _videoDegradedTotalTime;
	double _videoDegradedMaxLength;
	unsigned long long _totalCellRxDataBytes;
	unsigned long long _totalCellDupRxDataBytes;

}

@property (assign) double videoDegradedStartTime;                           //@synthesize videoDegradedStartTime=_videoDegradedStartTime - In the implementation block
@property (assign) BOOL isVideoDegraded;                                    //@synthesize isVideoDegraded=_isVideoDegraded - In the implementation block
@property (assign) unsigned videoDegradedTotalCounter;                      //@synthesize videoDegradedTotalCounter=_videoDegradedTotalCounter - In the implementation block
@property (assign) double videoDegradedTotalTime;                           //@synthesize videoDegradedTotalTime=_videoDegradedTotalTime - In the implementation block
@property (assign) unsigned long long totalCellRxDataBytes;                 //@synthesize totalCellRxDataBytes=_totalCellRxDataBytes - In the implementation block
@property (assign) unsigned long long totalCellDupRxDataBytes;              //@synthesize totalCellDupRxDataBytes=_totalCellDupRxDataBytes - In the implementation block
-(void)dealloc;
-(BOOL)isVideoDegraded;
-(void)setIsVideoDegraded:(BOOL)arg1 ;
-(id)segmentReport;
-(unsigned long long)totalCellDupRxDataBytes;
-(void)setTotalCellDupRxDataBytes:(unsigned long long)arg1 ;
-(unsigned long long)totalCellRxDataBytes;
-(void)setTotalCellRxDataBytes:(unsigned long long)arg1 ;
-(void)processVideoDegraded:(BOOL)arg1 ;
-(double)videoDegradedTotalTime;
-(void)setVideoDegradedTotalTime:(double)arg1 ;
-(double)videoDegradedStartTime;
-(void)setVideoDegradedStartTime:(double)arg1 ;
-(unsigned)videoDegradedTotalCounter;
-(void)setVideoDegradedTotalCounter:(unsigned)arg1 ;
-(id)initWithSegmentName:(id)arg1 previousSegmentName:(id)arg2 delegate:(id)arg3 ;
-(void)addCellByteCountStats:(id)arg1 ;
@end

