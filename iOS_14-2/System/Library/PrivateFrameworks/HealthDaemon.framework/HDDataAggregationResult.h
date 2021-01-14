/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)persistenceHandler;
-(id)initWithResultingAggregationState:(id)arg1 consumedSensorData:(id)arg2 persistenceHandler:(/*^block*/id)arg3 ;
-(NSArray *)consumedSensorData;
-(HDDataAggregationState *)aggregationState;
@end

