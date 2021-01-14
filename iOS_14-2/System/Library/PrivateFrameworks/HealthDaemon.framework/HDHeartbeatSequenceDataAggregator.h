/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDPassiveDataAggregator.h>

@interface HDHeartbeatSequenceDataAggregator : HDPassiveDataAggregator
-(id)objectType;
-(Class)sensorDatumClass;
-(id)dataObjectsFromSensorDatum:(id)arg1 error:(id*)arg2 ;
-(BOOL)didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id*)arg4 ;
-(id)_metadataForSensorDatum:(id)arg1 ;
-(BOOL)_associateSubsampleFromSensorDatum:(id)arg1 sampleUUID:(id)arg2 error:(id*)arg3 ;
@end

