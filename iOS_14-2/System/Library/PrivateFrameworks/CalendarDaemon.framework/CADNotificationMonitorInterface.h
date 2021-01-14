/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@protocol CADNotificationMonitorInterface
@required
-(void)CADDatabaseGetInboxRepliedSectionItems:(/*^block*/id)arg1;
-(void)CADDatabaseGetInviteReplyNotifications:(/*^block*/id)arg1;
-(void)CADDatabaseGetNotificationCountForSourceWithExternalIdentifier:(id)arg1 excludingDelegateSources:(BOOL)arg2 filteredByShowsNotificationsFlag:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)CADResourceChange:(id)arg1 setAlertedWithError:(/*^block*/id)arg2;
-(void)CADEventSetInvitationStatus:(int)arg1 forEvent:(id)arg2 error:(/*^block*/id)arg3;
-(void)CADDatabaseGetResourceChanges:(/*^block*/id)arg1;
-(void)CADDatabaseGetEventNotificationItemsFilteredByShowsNotificationsFlag:(BOOL)arg1 calculateEarliestExpirationDate:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)CADEvent:(id)arg1 setAlertedWithError:(/*^block*/id)arg2;
-(void)CADInviteReplyNotification:(id)arg1 setAlertedWithError:(/*^block*/id)arg2;
-(void)CADCalendarSetClearedFromNotificationCenter:(id)arg1 error:(/*^block*/id)arg2;
-(void)CADDatabaseGetSharedCalendarInvitationsWithReply:(/*^block*/id)arg1;
-(void)CADCalendar:(id)arg1 setAlertedWithError:(/*^block*/id)arg2;

@end

