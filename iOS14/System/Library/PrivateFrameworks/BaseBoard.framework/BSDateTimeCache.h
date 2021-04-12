/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@interface BSDateTimeCache : NSObject {

	double _yesterday;
	double _today;
	double _tomorrow;
	double _2daysFromNow;
	double _6daysAgo;
	double _prevWeek;
	double _nextWeek;
	double _lastAttemptedResetTime;
	double _lastSuccessfulResetTime;
	BOOL _isResetting;

}
+(id)sharedInstance;
-(double)today;
-(id)init;
-(void)_resetAndConfigure;
-(BOOL)isWithinPrevWeek:(double)arg1 includeToday:(BOOL)arg2 ;
-(BOOL)isTomorrow:(double)arg1 ;
-(BOOL)isYesterday:(double)arg1 ;
-(BOOL)isWithinPrevWeek:(double)arg1 ;
-(BOOL)isWithinNextWeek:(double)arg1 ;
-(double)tomorrow;
-(double)prevWeek;
-(double)nextWeek;
-(id)description;
-(BOOL)isToday:(double)arg1 ;
-(double)yesterday;
-(void)dealloc;
@end

