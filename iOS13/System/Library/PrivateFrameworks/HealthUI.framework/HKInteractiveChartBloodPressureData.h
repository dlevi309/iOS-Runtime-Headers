/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class HKValueRange, NSString;

@interface HKInteractiveChartBloodPressureData : NSObject <HKGraphSeriesChartData> {

	HKValueRange* _systolicRange;
	HKValueRange* _diastolicRange;

}

@property (nonatomic,retain) HKValueRange * systolicRange;               //@synthesize systolicRange=_systolicRange - In the implementation block
@property (nonatomic,retain) HKValueRange * diastolicRange;              //@synthesize diastolicRange=_diastolicRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSystolicRange:(HKValueRange *)arg1 ;
-(void)setDiastolicRange:(HKValueRange *)arg1 ;
-(HKValueRange *)systolicRange;
-(HKValueRange *)diastolicRange;
@end

