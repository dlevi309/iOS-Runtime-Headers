/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <libobjc.A.dylib/FIUIChartPoint.h>

@class NSDate, NSNumber, NSString;

@interface FIUIChartPointNumeric : NSObject <FIUIChartPoint> {

	NSDate* _xValue;
	NSNumber* _yValue;

}

@property (nonatomic,copy) NSNumber * yValue;                       //@synthesize yValue=_yValue - In the implementation block
@property (nonatomic,copy) NSDate * xValue;                         //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,readonly) NSNumber * minYValue; 
@property (nonatomic,readonly) NSNumber * maxYValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)chartPointWithXValue:(id)arg1 yValue:(id)arg2 ;
-(NSNumber *)yValue;
-(NSDate *)xValue;
-(NSString *)description;
-(NSNumber *)minYValue;
-(NSNumber *)maxYValue;
-(id)initWithXValue:(id)arg1 yValue:(id)arg2 ;
-(void)setXValue:(NSDate *)arg1 ;
-(void)setYValue:(NSNumber *)arg1 ;
@end

