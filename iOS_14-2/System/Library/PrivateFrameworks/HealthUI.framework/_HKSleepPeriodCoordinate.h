/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSArray, NSNumber, NSString;

@interface _HKSleepPeriodCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {

	BOOL _highlighted;
	NSArray* _asleepYValues;
	NSArray* _inBedYValues;
	NSArray* _yValues;
	NSNumber* _upperGoalYValue;
	NSNumber* _lowerGoalYValue;
	double _xValue;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;

}

@property (nonatomic,readonly) NSArray * asleepYValues;                                    //@synthesize asleepYValues=_asleepYValues - In the implementation block
@property (nonatomic,readonly) NSArray * inBedYValues;                                     //@synthesize inBedYValues=_inBedYValues - In the implementation block
@property (nonatomic,readonly) NSArray * yValues;                                          //@synthesize yValues=_yValues - In the implementation block
@property (nonatomic,readonly) NSNumber * upperGoalYValue;                                 //@synthesize upperGoalYValue=_upperGoalYValue - In the implementation block
@property (nonatomic,readonly) NSNumber * lowerGoalYValue;                                 //@synthesize lowerGoalYValue=_lowerGoalYValue - In the implementation block
@property (nonatomic,readonly) double xValue;                                              //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,readonly) BOOL highlighted;                                           //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(BOOL)highlighted;
-(double)xValue;
-(NSArray *)yValues;
-(double)endXValue;
-(double)startXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(id)initWithXValue:(double)arg1 asleepYValues:(id)arg2 inBedYValues:(id)arg3 yValues:(id)arg4 upperGoalYValue:(id)arg5 lowerGoalYValue:(id)arg6 highlighted:(BOOL)arg7 userInfo:(id)arg8 ;
-(NSArray *)asleepYValues;
-(NSArray *)inBedYValues;
-(NSNumber *)upperGoalYValue;
-(NSNumber *)lowerGoalYValue;
@end

