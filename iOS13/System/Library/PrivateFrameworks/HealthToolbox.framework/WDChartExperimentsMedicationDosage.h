/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKInteractiveChartViewController.h>

@class UIColor;

@interface WDChartExperimentsMedicationDosage : HKInteractiveChartViewController {

	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)_parseDoseSpecifications:(id)arg1 ;
-(id)initMedicationName:(id)arg1 dosages:(id)arg2 profile:(id)arg3 color:(id)arg4 ;
-(id)initMedicationName:(id)arg1 specifications:(id)arg2 profile:(id)arg3 color:(id)arg4 ;
@end

