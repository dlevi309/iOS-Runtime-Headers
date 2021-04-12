/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HKSleepChartPointUserInfo *)userInfo;
-(void)setUserInfo:(HKSleepChartPointUserInfo *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)highlighted;
-(NSNumber *)goalValue;
-(void)setGoalValue:(NSNumber *)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(NSDate *)xValue;
-(id)yValue;
-(void)setXValue:(NSDate *)arg1 ;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)allYValues;
-(double)inBedValue;
-(void)setInBedValue:(double)arg1 ;
-(double)asleepValue;
-(void)setAsleepValue:(double)arg1 ;
@end

