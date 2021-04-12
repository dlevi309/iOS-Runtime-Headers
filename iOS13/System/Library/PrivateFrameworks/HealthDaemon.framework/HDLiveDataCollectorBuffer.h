/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDSensorDatum;
@class NSMutableArray;

@interface HDLiveDataCollectorBuffer : NSObject {

	NSMutableArray* _buffer;
	id<HDSensorDatum> _lastProcessedDatum;
	/*^block*/id _objectCreationBlock;
	/*^block*/id _sensorDatumComparisonBlock;
	double _bufferAggregationInterval;

}

@property (nonatomic,copy) id objectCreationBlock;                          //@synthesize objectCreationBlock=_objectCreationBlock - In the implementation block
@property (nonatomic,copy) id sensorDatumComparisonBlock;                   //@synthesize sensorDatumComparisonBlock=_sensorDatumComparisonBlock - In the implementation block
@property (assign,nonatomic) double bufferAggregationInterval;              //@synthesize bufferAggregationInterval=_bufferAggregationInterval - In the implementation block
-(id)init;
-(id)_processBufferIfSensorDatumInvalid:(id)arg1 ;
-(BOOL)_bufferLengthAchieved:(double)arg1 buffer:(id)arg2 lastProcessedDatum:(id)arg3 ;
-(id)_createObjectsFromBuffer:(id)arg1 lastProcessedDatum:(id)arg2 ;
-(void)_resetBuffer;
-(long long)_bufferStateForSensorDatum:(id)arg1 ;
-(id)addSensorDatum:(id)arg1 ;
-(id)objectCreationBlock;
-(void)setObjectCreationBlock:(id)arg1 ;
-(id)sensorDatumComparisonBlock;
-(void)setSensorDatumComparisonBlock:(id)arg1 ;
-(double)bufferAggregationInterval;
-(void)setBufferAggregationInterval:(double)arg1 ;
@end

