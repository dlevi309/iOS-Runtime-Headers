/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDDataAggregationState, NSArray;

@interface HDDataAggregationResult : NSObject {

	HDDataAggregationState* _aggregationState;
	NSArray* _consumedSensorData;
	/*^block*/id _persistenceHandler;

}

@property (nonatomic,copy,readonly) HDDataAggregationState * aggregationState;              //@synthesize aggregationState=_aggregationState - In the implementation block
@property (nonatomic,copy,readonly) NSArray * consumedSensorData;                           //@synthesize consumedSensorData=_consumedSensorData - In the implementation block
@property (nonatomic,copy,readonly) id persistenceHandler;                                  //@synthesize persistenceHandler=_persistenceHandler - In the implementation block
-(id)initWithResultingAggregationState:(id)arg1 consumedSensorData:(id)arg2 persistenceHandler:(/*^block*/id)arg3 ;
-(id)persistenceHandler;
-(NSArray *)consumedSensorData;
-(HDDataAggregationState *)aggregationState;
@end

