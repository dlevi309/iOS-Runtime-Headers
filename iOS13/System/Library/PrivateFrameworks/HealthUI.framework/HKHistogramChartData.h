/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)xValue;
-(double)yValue;
-(id)initWithXValue:(double)arg1 yValue:(double)arg2 ;
@end

