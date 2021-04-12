/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setRepeatCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)repeatCalendar;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setRepeatInterval:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(double)_retroactiveTriggerHysteresis;
-(int)totalRepeatCount;
-(BOOL)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(id)_initWithDate:(id)arg1 timeZone:(id)arg2 remainingRepeatCount:(int)arg3 totalRepeatCount:(int)arg4 repeatInterval:(unsigned long long)arg5 repeatCalendar:(id)arg6 ;
-(int)remainingRepeatCount;
-(id)_nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2 defaultTimeZone:(id)arg3 ;
-(void)setRemainingRepeatCount:(int)arg1 ;
-(void)setTotalRepeatCount:(int)arg1 ;
-(unsigned long long)repeatInterval;
-(BOOL)isEqual:(id)arg1 ;
@end

