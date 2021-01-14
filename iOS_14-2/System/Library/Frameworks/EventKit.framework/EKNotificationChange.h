/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKObjectChange.h>

@interface EKNotificationChange : EKObjectChange
+(int)entityType;
+(void)fetchNotificationChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchNotificationChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchNotificationChangesInCalendar:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

