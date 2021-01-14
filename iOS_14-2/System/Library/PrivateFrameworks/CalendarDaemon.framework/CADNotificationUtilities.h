/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


#import <CalendarDaemon/CalendarDaemon-Structs.h>
@interface CADNotificationUtilities : NSObject
+(int)_gatherSharedCalendarInvitationsWithContext:(id)arg1 ;
+(int)_gatherSuggestionResourceChangeNotification:(const void*)arg1 withContext:(id)arg2 ;
+(int)_gatherEventInvitationsAndRepliesWithContext:(id)arg1 ;
+(int)_gatherSharedCalendarResourceChangeNotification:(const void*)arg1 withContext:(id)arg2 ;
+(int)_gatherSharedCalendarResponsesAndResourceChangesWithContext:(id)arg1 ;
+(BOOL)_storeIsDelegate:(const void*)arg1 ;
+(BOOL)storeIsReadOnlyDelegate:(const void*)arg1 ;
+(int)_gatherSharedCalendarInviteReplyNotification:(const void*)arg1 withContext:(id)arg2 ;
+(int)CADDatabaseGetEventNotificationItemsWithDatabase:(CalDatabase*)arg1 forSourceWithExternalIdentifier:(id)arg2 excludingDelegateSources:(BOOL)arg3 filteredByShowsNotificationsFlag:(BOOL)arg4 earliestExpirationDate:(id*)arg5 notificationTypes:(id*)arg6 rowIDs:(id*)arg7 occurrenceDates:(id*)arg8 ;
+(void)_logNotificationCountsForNotificationTypes:(id)arg1 ;
+(id)_stringForNotificationType:(int)arg1 ;
@end

