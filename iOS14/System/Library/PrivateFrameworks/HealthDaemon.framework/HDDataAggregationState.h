/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

