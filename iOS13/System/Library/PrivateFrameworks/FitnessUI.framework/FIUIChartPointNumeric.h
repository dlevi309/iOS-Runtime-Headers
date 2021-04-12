/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <libobjc.A.dylib/FIUIChartPoint.h>

@class NSDate, NSNumber, NSString;

@interface FIUIChartPointNumeric : NSObject <FIUIChartPoint> {

	NSDate* _xValue;
	NSNumber* _yValue;

}

@property (nonatomic,copy) NSNumber * yValue;                       //@synthesize yValue=_yValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDate * xValue;                         //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,readonly) NSNumber * minYValue; 
@property (nonatomic,readonly) NSNumber * maxYValue; 
+(id)chartPointWithXValue:(id)arg1 yValue:(id)arg2 ;
-(NSString *)description;
-(NSNumber *)minYValue;
-(NSNumber *)maxYValue;
-(NSDate *)xValue;
-(NSNumber *)yValue;
-(id)initWithXValue:(id)arg1 yValue:(id)arg2 ;
-(void)setXValue:(NSDate *)arg1 ;
-(void)setYValue:(NSNumber *)arg1 ;
@end

