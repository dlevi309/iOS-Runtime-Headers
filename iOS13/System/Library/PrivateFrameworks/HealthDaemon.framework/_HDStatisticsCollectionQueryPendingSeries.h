/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)anchor;
-(NSMutableArray *)quantities;
-(HKQuantitySample *)series;
-(id)initWithSeries:(id)arg1 anchor:(id)arg2 ;
-(void)addQuantity:(id)arg1 dateInterval:(id)arg2 ;
@end

