/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)startTimestamp;
-(AWDCoreRoutineLocationAwarenessLocationTimeHistograms *)timeHistograms;
-(AWDCoreRoutineLocationAwarenessIntervalHistogram *)intervalHistogram;
-(AWDCoreRoutineLocationAwarenessStatistics *)heartbeatStats;
-(id)initWithStartTimestamp:(id)arg1 heartbeatStats:(id)arg2 timeHistograms:(id)arg3 intervalHistogram:(id)arg4 ;
-(void)setHeartbeatStats:(AWDCoreRoutineLocationAwarenessStatistics *)arg1 ;
-(void)setTimeHistograms:(AWDCoreRoutineLocationAwarenessLocationTimeHistograms *)arg1 ;
-(void)setIntervalHistogram:(AWDCoreRoutineLocationAwarenessIntervalHistogram *)arg1 ;
@end

