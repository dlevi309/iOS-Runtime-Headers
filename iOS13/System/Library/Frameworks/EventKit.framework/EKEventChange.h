/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKCalendarItemChange.h>

@interface EKEventChange : EKCalendarItemChange
+(int)entityType;
+(void)fetchEventChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchEventChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchEventChangesInCalendar:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

