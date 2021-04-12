/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
*/


@protocol SegmentStatsDelegate <NSObject>
@required
-(unsigned)significantVideoStallCount;
-(unsigned)audioErasureCount;
-(double)audioErasureTotalTime;
-(double)significantVideoStallTotalTime;
-(double)timeWeightedNumberOfParticipants;

@end

