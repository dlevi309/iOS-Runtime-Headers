/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKObjectChange.h>

@interface EKNotificationChange : EKObjectChange
+(int)entityType;
+(void)fetchNotificationChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchNotificationChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchNotificationChangesInCalendar:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

