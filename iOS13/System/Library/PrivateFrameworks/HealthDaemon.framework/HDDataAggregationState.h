/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSMutableArray, HKSample;

@interface HDDataAggregationState : NSObject {

	NSMutableArray* _unaggregatedSensorData;
	HKSample* _openSeries;

}

@property (nonatomic,readonly) NSMutableArray * unaggregatedSensorData;              //@synthesize unaggregatedSensorData=_unaggregatedSensorData - In the implementation block
@property (nonatomic,readonly) HKSample * openSeries;                                //@synthesize openSeries=_openSeries - In the implementation block
-(id)init;
-(NSMutableArray *)unaggregatedSensorData;
-(id)initWithRemainingSensorData:(id)arg1 ;
-(HKSample *)openSeries;
-(id)initWithRemainingSensorData:(id)arg1 currentSeries:(id)arg2 ;
@end

