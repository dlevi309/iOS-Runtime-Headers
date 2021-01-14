/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, AWDCoreRoutineLocationAwarenessStatistics, AWDCoreRoutineLocationAwarenessLocationTimeHistograms, AWDCoreRoutineLocationAwarenessIntervalHistogram;

@interface RTLocationAwarenessMetrics : NSObject <NSCopying> {

	NSDate* _startTimestamp;
	AWDCoreRoutineLocationAwarenessStatistics* _heartbeatStats;
	AWDCoreRoutineLocationAwarenessLocationTimeHistograms* _timeHistograms;
	AWDCoreRoutineLocationAwarenessIntervalHistogram* _intervalHistogram;

}

@property (nonatomic,readonly) NSDate * startTimestamp;                                                           //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessStatistics * heartbeatStats;                          //@synthesize heartbeatStats=_heartbeatStats - In the implementation block
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessLocationTimeHistograms * timeHistograms;              //@synthesize timeHistograms=_timeHistograms - In the implementation block
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessIntervalHistogram * intervalHistogram;                //@synthesize intervalHistogram=_intervalHistogram - In the implementation block
-(void)setTimeHistograms:(AWDCoreRoutineLocationAwarenessLocationTimeHistograms *)arg1 ;
-(id)init;
-(NSDate *)startTimestamp;
-(AWDCoreRoutineLocationAwarenessLocationTimeHistograms *)timeHistograms;
-(AWDCoreRoutineLocationAwarenessStatistics *)heartbeatStats;
-(void)setHeartbeatStats:(AWDCoreRoutineLocationAwarenessStatistics *)arg1 ;
-(AWDCoreRoutineLocationAwarenessIntervalHistogram *)intervalHistogram;
-(void)setIntervalHistogram:(AWDCoreRoutineLocationAwarenessIntervalHistogram *)arg1 ;
-(id)initWithStartTimestamp:(id)arg1 heartbeatStats:(id)arg2 timeHistograms:(id)arg3 intervalHistogram:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

