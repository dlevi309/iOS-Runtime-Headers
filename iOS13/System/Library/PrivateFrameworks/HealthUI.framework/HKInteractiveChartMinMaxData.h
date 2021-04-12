/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HKUnit *)unit;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(void)setUnit:(HKUnit *)arg1 ;
-(double)minValue;
-(void)setMinValue:(double)arg1 ;
@end

