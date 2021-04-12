/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSDate, NSNumber, NSString;

@interface HKHandwashingEventChartPoint : NSObject <HKChartPoint> {

	BOOL _meetsGoal;
	NSDate* _startDate;
	NSDate* _endDate;
	NSNumber* _averageDuration;
	NSDate* _midDate;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;

}

@property (nonatomic,retain) NSDate * midDate;                                           //@synthesize midDate=_midDate - In the implementation block
@property (nonatomic,retain) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSNumber * averageDuration;                                 //@synthesize averageDuration=_averageDuration - In the implementation block
@property (assign,nonatomic) BOOL meetsGoal;                                             //@synthesize meetsGoal=_meetsGoal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(id<HKGraphSeriesBlockCoordinateInfo>)arg1 ;
-(NSDate *)endDate;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)yValue;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDate *)midDate;
-(id)allYValues;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(BOOL)meetsGoal;
-(void)setMeetsGoal:(BOOL)arg1 ;
-(NSNumber *)averageDuration;
-(void)setAverageDuration:(NSNumber *)arg1 ;
-(void)setMidDate:(NSDate *)arg1 ;
@end

