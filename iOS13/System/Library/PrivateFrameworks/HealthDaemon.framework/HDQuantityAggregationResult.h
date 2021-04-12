/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSArray, NSMutableArray;

@interface HDQuantityAggregationResult : NSObject {

	NSArray* _aggregatedSamples;
	NSArray* _consumedSensorData;
	NSMutableArray* _remainingSensorData;

}

@property (nonatomic,copy,readonly) NSArray * aggregatedSamples;                       //@synthesize aggregatedSamples=_aggregatedSamples - In the implementation block
@property (nonatomic,copy,readonly) NSArray * consumedSensorData;                      //@synthesize consumedSensorData=_consumedSensorData - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * remainingSensorData;              //@synthesize remainingSensorData=_remainingSensorData - In the implementation block
-(NSArray *)consumedSensorData;
-(id)initWithAggregatedSamples:(id)arg1 consumedData:(id)arg2 remainingData:(id)arg3 ;
-(NSArray *)aggregatedSamples;
-(NSMutableArray *)remainingSensorData;
@end

