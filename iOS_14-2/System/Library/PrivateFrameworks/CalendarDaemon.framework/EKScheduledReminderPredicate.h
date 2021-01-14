/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>

@class NSDate;

@interface EKScheduledReminderPredicate : EKPredicate {

	NSDate* _day;
	unsigned long long _maxResults;

}

@property (nonatomic,retain) NSDate * day;                               //@synthesize day=_day - In the implementation block
@property (assign,nonatomic) unsigned long long maxResults;              //@synthesize maxResults=_maxResults - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateForScheduledRemindersInCalendars:(id)arg1 onDay:(id)arg2 ;
-(NSDate *)day;
-(void)setDay:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMaxResults:(unsigned long long)arg1 ;
-(unsigned long long)maxResults;
-(id)initWithCoder:(id)arg1 ;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

