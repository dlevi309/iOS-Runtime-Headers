/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


#import <BaseBoard/BaseBoard-Structs.h>
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
-(id)init;
-(void)dealloc;
-(id)description;
-(void)_resetAndConfigureAndPostNotification:(BOOL)arg1 ;
-(void)_resetAndConfigure;
-(void)_resetAndConfigureIfNecessary;
-(BOOL)_isToday:(double)arg1 ;
-(BOOL)isWithinPrevWeek:(double)arg1 includeToday:(BOOL)arg2 ;
-(double)_currentAbsoluteTime;
-(CFCalendarRef)_copyCurrentCalendar;
-(double)today;
-(double)tomorrow;
-(double)yesterday;
-(double)prevWeek;
-(double)nextWeek;
-(BOOL)isToday:(double)arg1 ;
-(BOOL)isTomorrow:(double)arg1 ;
-(BOOL)isYesterday:(double)arg1 ;
-(BOOL)isWithinPrevWeek:(double)arg1 ;
-(BOOL)isWithinNextWeek:(double)arg1 ;
@end

