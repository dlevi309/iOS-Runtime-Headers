/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

@class NSDate, NSNumber;


@protocol FIUIChartPoint <NSObject>
@property (nonatomic,copy) NSDate * xValue; 
@property (nonatomic,copy) id yValue; 
@property (nonatomic,readonly) NSNumber * minYValue; 
@property (nonatomic,readonly) NSNumber * maxYValue; 
@required
-(id)yValue;
-(NSDate *)xValue;
-(NSNumber *)minYValue;
-(NSNumber *)maxYValue;
-(void)setXValue:(id)arg1;
-(void)setYValue:(id)arg1;

@end

