/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UNNotificationTrigger.h>

@class NSDate, NSTimeZone, NSCalendar;

@interface UNLegacyNotificationTrigger : UNNotificationTrigger {

	int _remainingRepeatCount;
	int _totalRepeatCount;
	NSDate* _date;
	NSTimeZone* _timeZone;
	NSCalendar* _repeatCalendar;
	unsigned long long _repeatInterval;

}

@property (nonatomic,copy) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone;                            //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,copy) NSCalendar * repeatCalendar;                      //@synthesize repeatCalendar=_repeatCalendar - In the implementation block
@property (assign,nonatomic) int remainingRepeatCount;                       //@synthesize remainingRepeatCount=_remainingRepeatCount - In the implementation block
@property (assign,nonatomic) int totalRepeatCount;                           //@synthesize totalRepeatCount=_totalRepeatCount - In the implementation block
@property (assign,nonatomic) unsigned long long repeatInterval;              //@synthesize repeatInterval=_repeatInterval - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)triggerWithDate:(id)arg1 timeZone:(id)arg2 repeatInterval:(unsigned long long)arg3 repeatCalendar:(id)arg4 ;
+(id)triggerWithDate:(id)arg1 timeZone:(id)arg2 remainingRepeatCount:(int)arg3 totalRepeatCount:(int)arg4 repeatInterval:(unsigned long long)arg5 repeatCalendar:(id)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(void)setDate:(NSDate *)arg1 ;
-(unsigned long long)repeatInterval;
-(void)setRepeatInterval:(unsigned long long)arg1 ;
-(void)setRepeatCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)repeatCalendar;
-(id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(double)_retroactiveTriggerHysteresis;
-(BOOL)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(id)_initWithDate:(id)arg1 timeZone:(id)arg2 remainingRepeatCount:(int)arg3 totalRepeatCount:(int)arg4 repeatInterval:(unsigned long long)arg5 repeatCalendar:(id)arg6 ;
-(int)remainingRepeatCount;
-(int)totalRepeatCount;
-(id)_nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2 defaultTimeZone:(id)arg3 ;
-(void)setRemainingRepeatCount:(int)arg1 ;
-(void)setTotalRepeatCount:(int)arg1 ;
@end

