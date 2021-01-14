/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUserInfo:(HKSleepChartPointUserInfo *)arg1 ;
-(HKSleepChartPointUserInfo *)userInfo;
-(id)yValue;
-(BOOL)highlighted;
-(NSDate *)xValue;
-(id)allYValues;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setXValue:(NSDate *)arg1 ;
-(void)setInBedOffsets:(NSArray *)arg1 ;
-(void)setAsleepOffsets:(NSArray *)arg1 ;
-(NSArray *)asleepOffsets;
-(NSArray *)inBedOffsets;
-(NSNumber *)upperGoal;
-(void)setUpperGoal:(NSNumber *)arg1 ;
-(NSNumber *)lowerGoal;
-(void)setLowerGoal:(NSNumber *)arg1 ;
@end

