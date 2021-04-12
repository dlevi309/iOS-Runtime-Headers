/*
* Generated on Monday, March 1, 2021 at 2:33:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSDate, NSTimeZone, _ATXMovingAverage;

@interface _ATXAppHistoricalAverageDose : NSObject {

	NSDate* _currentDay;
	double _currentDuration;
	int _dayCount;
	NSTimeZone* _timeZone;
	_ATXMovingAverage* _movingAverage;

}

@property (nonatomic,readonly) _ATXMovingAverage * movingAverage;              //@synthesize movingAverage=_movingAverage - In the implementation block
-(_ATXMovingAverage *)movingAverage;
-(id)initWith:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 alpha:(double)arg4 ;
-(void)addDuration:(id)arg1 endDate:(id)arg2 ;
-(void)skipTo:(id)arg1 ;
-(void)_updateMovingAverageForOneDay:(double)arg1 ;
-(void)_finishCurrentDay;
@end

