/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class HKUnit, NSString;

@interface HKInteractiveChartMinMaxData : NSObject <HKGraphSeriesChartData> {

	double _minValue;
	double _maxValue;
	HKUnit* _unit;

}

@property (assign,nonatomic) double minValue;                       //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;                       //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,retain) HKUnit * unit;                         //@synthesize unit=_unit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMaxValue:(double)arg1 ;
-(HKUnit *)unit;
-(void)setMinValue:(double)arg1 ;
-(void)setUnit:(HKUnit *)arg1 ;
-(double)maxValue;
-(double)minValue;
@end

