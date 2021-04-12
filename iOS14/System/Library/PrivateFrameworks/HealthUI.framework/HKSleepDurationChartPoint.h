/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class NSDate, NSNumber, HKSleepChartPointUserInfo, NSString;

@interface HKSleepDurationChartPoint : NSObject <HKChartPoint> {

	BOOL _highlighted;
	double _inBedValue;
	double _asleepValue;
	NSDate* _xValue;
	NSNumber* _goalValue;
	HKSleepChartPointUserInfo* _userInfo;

}

@property (assign,nonatomic) double inBedValue;                                 //@synthesize inBedValue=_inBedValue - In the implementation block
@property (assign,nonatomic) double asleepValue;                                //@synthesize asleepValue=_asleepValue - In the implementation block
@property (nonatomic,copy) NSDate * xValue;                                     //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,copy) NSNumber * goalValue;                                //@synthesize goalValue=_goalValue - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                  //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) HKSleepChartPointUserInfo * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(HKSleepChartPointUserInfo *)arg1 ;
-(HKSleepChartPointUserInfo *)userInfo;
-(id)yValue;
-(BOOL)highlighted;
-(NSDate *)xValue;
-(NSNumber *)goalValue;
-(void)setGoalValue:(NSNumber *)arg1 ;
-(id)allYValues;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setXValue:(NSDate *)arg1 ;
-(void)setAsleepValue:(double)arg1 ;
-(void)setInBedValue:(double)arg1 ;
-(double)inBedValue;
-(double)asleepValue;
@end

