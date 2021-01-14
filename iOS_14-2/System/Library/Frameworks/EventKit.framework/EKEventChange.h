/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKCalendarItemChange.h>

@interface EKEventChange : EKCalendarItemChange
+(int)entityType;
+(void)fetchEventChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchEventChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchEventChangesInCalendar:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

