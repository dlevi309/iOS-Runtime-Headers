/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/


@protocol FISleepDataProviderDelegate <NSObject>
@required
-(id)currentDate;
-(id)currentCalendar;
-(void)sleepDataProviderUserDayDidUpdate;
-(void)sleepDataProviderLastGoodMorningDismissedDateDidChange;

@end

