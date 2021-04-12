/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class NSNumber, NSString;

@interface HKHistogramChartPoint : NSObject <HKChartPoint> {

	NSNumber* _xValue;
	NSNumber* _yValue;

}

@property (nonatomic,readonly) NSNumber * xValue;                   //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,readonly) NSNumber * yValue;                   //@synthesize yValue=_yValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)userInfo;
-(NSNumber *)yValue;
-(NSNumber *)xValue;
-(id)allYValues;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(id)initWithXValue:(id)arg1 yValue:(id)arg2 ;
@end

