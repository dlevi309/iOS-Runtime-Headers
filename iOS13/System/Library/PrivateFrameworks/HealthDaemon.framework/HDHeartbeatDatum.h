/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@interface HDHeartbeatDatum : NSObject {

	BOOL _precededByGap;
	double _timeSinceSequenceStart;

}

@property (nonatomic,readonly) double timeSinceSequenceStart;              //@synthesize timeSinceSequenceStart=_timeSinceSequenceStart - In the implementation block
@property (nonatomic,readonly) BOOL precededByGap;                         //@synthesize precededByGap=_precededByGap - In the implementation block
+(id)datumWithTimeSinceSequenceStart:(double)arg1 preceededByGap:(BOOL)arg2 ;
-(double)timeSinceSequenceStart;
-(BOOL)precededByGap;
@end

