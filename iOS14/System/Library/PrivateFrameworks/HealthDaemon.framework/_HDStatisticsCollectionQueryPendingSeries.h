/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HKQuantitySample, NSNumber, NSMutableArray;

@interface _HDStatisticsCollectionQueryPendingSeries : NSObject {

	HKQuantitySample* _series;
	NSNumber* _anchor;
	NSMutableArray* _quantities;

}

@property (nonatomic,readonly) HKQuantitySample * series;                //@synthesize series=_series - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * anchor;                   //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) NSMutableArray * quantities;              //@synthesize quantities=_quantities - In the implementation block
-(HKQuantitySample *)series;
-(NSNumber *)anchor;
-(NSMutableArray *)quantities;
-(id)initWithSeries:(id)arg1 anchor:(id)arg2 ;
-(void)addQuantity:(id)arg1 dateInterval:(id)arg2 ;
@end

