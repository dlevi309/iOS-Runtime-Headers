/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class NSArray, NSDate, NSNumber, HKSleepChartPointUserInfo, NSString;

@interface HKSleepPeriodChartPoint : NSObject <HKChartPoint> {

	BOOL _highlighted;
	NSArray* _asleepOffsets;
	NSArray* _inBedOffsets;
	NSDate* _xValue;
	NSNumber* _upperGoal;
	NSNumber* _lowerGoal;
	HKSleepChartPointUserInfo* _userInfo;

}

@property (nonatomic,retain) NSArray * asleepOffsets;                           //@synthesize asleepOffsets=_asleepOffsets - In the implementation block
@property (nonatomic,retain) NSArray * inBedOffsets;                            //@synthesize inBedOffsets=_inBedOffsets - In the implementation block
@property (nonatomic,copy) NSDate * xValue;                                     //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,copy) NSNumber * upperGoal;                                //@synthesize upperGoal=_upperGoal - In the implementation block
@property (nonatomic,copy) NSNumber * lowerGoal;                                //@synthesize lowerGoal=_lowerGoal - In the implementation block
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
-(NSNumber *)upperGoal;
-(NSNumber *)lowerGoal;
-(NSArray *)asleepOffsets;
-(NSArray *)inBedOffsets;
-(void)setAsleepOffsets:(NSArray *)arg1 ;
-(void)setInBedOffsets:(NSArray *)arg1 ;
-(void)setUpperGoal:(NSNumber *)arg1 ;
-(void)setLowerGoal:(NSNumber *)arg1 ;
@end

