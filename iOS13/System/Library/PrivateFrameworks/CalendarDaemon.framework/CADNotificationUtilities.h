/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


#import <CalendarDaemon/CalendarDaemon-Structs.h>
@interface CADNotificationUtilities : NSObject
+(void)CADDatabaseGetEventNotificationItemsWithDatabase:(CalDatabase*)arg1 forSourceWithExternalIdentifier:(id)arg2 excludingDelegateSources:(BOOL)arg3 filteredByShowsNotificationsFlag:(BOOL)arg4 reply:(/*^block*/id)arg5 ;
+(BOOL)storeIsReadOnlyDelegate:(const void*)arg1 ;
+(BOOL)_shouldSkipNotificationForStore:(const void*)arg1 forSourceWithExternalIdentifier:(id)arg2 excludingDelegateSources:(BOOL)arg3 filteredByShowsNotificationsFlag:(BOOL)arg4 ;
+(BOOL)_event:(const void*)arg1 hasOccurrenceEndingAfterDate:(double)arg2 database:(CalDatabase*)arg3 ;
+(void)_logNotificationCountsForNotificationTypes:(id)arg1 ;
+(BOOL)_storeIsDelegate:(const void*)arg1 ;
+(id)_stringForNotificationType:(int)arg1 ;
@end

