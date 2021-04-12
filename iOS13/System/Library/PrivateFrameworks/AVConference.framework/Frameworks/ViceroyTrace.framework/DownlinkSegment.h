/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
*/

#import <ViceroyTrace/MultiwaySegment.h>

@interface DownlinkSegment : MultiwaySegment {

	double _videoDegradedStartTime;
	BOOL _isVideoDegraded;
	unsigned _videoDegradedTotalCounter;
	double _videoDegradedTotalTime;

}

@property (assign) double videoDegradedStartTime;                   //@synthesize videoDegradedStartTime=_videoDegradedStartTime - In the implementation block
@property (assign) BOOL isVideoDegraded;                            //@synthesize isVideoDegraded=_isVideoDegraded - In the implementation block
@property (assign) unsigned videoDegradedTotalCounter;              //@synthesize videoDegradedTotalCounter=_videoDegradedTotalCounter - In the implementation block
@property (assign) double videoDegradedTotalTime;                   //@synthesize videoDegradedTotalTime=_videoDegradedTotalTime - In the implementation block
-(void)dealloc;
-(BOOL)isVideoDegraded;
-(void)setIsVideoDegraded:(BOOL)arg1 ;
-(id)segmentReport;
-(void)processVideoDegraded:(BOOL)arg1 ;
-(double)videoDegradedTotalTime;
-(void)setVideoDegradedTotalTime:(double)arg1 ;
-(double)videoDegradedStartTime;
-(void)setVideoDegradedStartTime:(double)arg1 ;
-(unsigned)videoDegradedTotalCounter;
-(void)setVideoDegradedTotalCounter:(unsigned)arg1 ;
-(id)initWithSegmentName:(id)arg1 previousSegmentName:(id)arg2 delegate:(id)arg3 ;
@end

