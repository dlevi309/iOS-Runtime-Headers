/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class NSString;

@interface HKHistogramChartData : NSObject <HKGraphSeriesChartData> {

	double _xValue;
	double _yValue;

}

@property (nonatomic,readonly) double xValue;                       //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,readonly) double yValue;                       //@synthesize yValue=_yValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)yValue;
-(double)xValue;
-(id)initWithXValue:(double)arg1 yValue:(double)arg2 ;
@end

