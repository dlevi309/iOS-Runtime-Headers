/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

