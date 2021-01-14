/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
*/


@protocol SegmentStatsDelegate <NSObject>
@required
-(unsigned)significantVideoStallCount;
-(unsigned)audioErasureCount;
-(double)audioErasureTotalTime;
-(unsigned short)maxAudioErasureCount;
-(unsigned short)maxVideoStallCount;
-(double)averageJitterBufferDelay;
-(unsigned short)maxJBTargetSizeChanges;
-(unsigned short)minVideoFrameRate;
-(double)significantVideoStallTotalTime;
-(double)avgJBTargetSizeChanges;
-(double)timeWeightedNumberOfParticipants;

@end

