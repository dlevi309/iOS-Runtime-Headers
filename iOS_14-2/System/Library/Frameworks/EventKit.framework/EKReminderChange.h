/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKCalendarItemChange.h>

@interface EKReminderChange : EKCalendarItemChange
+(int)entityType;
+(void)fetchReminderChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchReminderChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchReminderChangesInCalendar:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

