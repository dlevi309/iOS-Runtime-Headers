/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKInteractiveChartViewController.h>

@class HKHorizontalSingleLineSeries;

@interface WDChartExperimentsDoctorAppointments : HKInteractiveChartViewController {

	HKHorizontalSingleLineSeries* _appointmentSeries;

}

@property (nonatomic,readonly) HKHorizontalSingleLineSeries * appointmentSeries;              //@synthesize appointmentSeries=_appointmentSeries - In the implementation block
-(void)setColor:(id)arg1 ;
-(id)_parseSpecifications:(id)arg1 ;
-(id)initWithAppointments:(id)arg1 profile:(id)arg2 color:(id)arg3 ;
-(id)initWithSpecifications:(id)arg1 profile:(id)arg2 color:(id)arg3 ;
-(HKHorizontalSingleLineSeries *)appointmentSeries;
@end

