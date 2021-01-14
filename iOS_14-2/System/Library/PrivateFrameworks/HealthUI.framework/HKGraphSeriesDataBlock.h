/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSArray, HKValueRange;

@interface HKGraphSeriesDataBlock : NSObject {

	NSArray* _chartPoints;
	HKValueRange* _yValueRange;

}

@property (nonatomic,copy) NSArray * chartPoints;                       //@synthesize chartPoints=_chartPoints - In the implementation block
@property (nonatomic,readonly) HKValueRange * yValueRange;              //@synthesize yValueRange=_yValueRange - In the implementation block
-(void)setChartPoints:(NSArray *)arg1 ;
-(NSArray *)chartPoints;
-(HKValueRange *)yValueRange;
@end

