/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <libobjc.A.dylib/FIUIChartPoint.h>

@class NSDate, NSIndexSet, NSNumber, NSString;

@interface FIUIChartPointMultiple : NSObject <FIUIChartPoint> {

	NSDate* _xValue;
	NSIndexSet* _yValue;

}

@property (nonatomic,copy) NSIndexSet * yValue;                     //@synthesize yValue=_yValue - In the implementation block
@property (nonatomic,copy) NSDate * xValue;                         //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,readonly) NSNumber * minYValue; 
@property (nonatomic,readonly) NSNumber * maxYValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)chartPointWithDate:(id)arg1 valueIndexSet:(id)arg2 ;
+(id)chartPointWithXValue:(id)arg1 yValue:(id)arg2 ;
-(NSIndexSet *)yValue;
-(NSDate *)xValue;
-(NSString *)description;
-(NSNumber *)minYValue;
-(NSNumber *)maxYValue;
-(void)setXValue:(NSDate *)arg1 ;
-(void)setYValue:(NSIndexSet *)arg1 ;
@end

