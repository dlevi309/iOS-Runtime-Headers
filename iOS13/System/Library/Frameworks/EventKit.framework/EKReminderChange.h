/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKCalendarItemChange.h>

@interface EKReminderChange : EKCalendarItemChange
+(int)entityType;
+(void)fetchReminderChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchReminderChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchReminderChangesInCalendar:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

