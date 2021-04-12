/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDataAggregator.h>

@interface HDHeartRateDataAggregator : HDDataAggregator
-(id)_metadataForSensorDatum:(id)arg1 collector:(id)arg2 ;
-(id)objectType;
-(BOOL)_shouldRequestActiveCollectionForConfiguration:(id)arg1 ;
-(void)workoutManagerStateChanged:(id)arg1 ;
-(void)_notifyForSensorDatum:(id)arg1 collector:(id)arg2 device:(id)arg3 source:(id)arg4 ;
-(id)configurationForCollector:(id)arg1 ;
-(id)initWithDataCollectionManager:(id)arg1 ;
-(void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3 ;
-(void)dealloc;
@end

