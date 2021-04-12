/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

