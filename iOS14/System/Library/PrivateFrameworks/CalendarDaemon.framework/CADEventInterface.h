/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@protocol CADEventInterface
@required
-(void)CADDatabaseGetTTLLocationAuthorizationStatus:(/*^block*/id)arg1;
-(void)CADDatabaseGetCountOfNotifiableEvents:(/*^block*/id)arg1;
-(void)CADDatabaseActOnSuggestedEvent:(id)arg1 action:(int)arg2 reply:(/*^block*/id)arg3;
-(void)CADDatabaseGetEventWithEventIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseGetBirthdayCalendarEnabledWithReply:(/*^block*/id)arg1;
-(void)CADOccurrenceCacheAreOccurrencesBeingGenerated:(/*^block*/id)arg1;
-(void)CADDatabaseGetCountOfUnacknowledgedEvents:(/*^block*/id)arg1;
-(void)CADOccurrenceCacheGetOccurrenceDateOfEventWithRowID:(int)arg1 nearestDate:(id)arg2 prefersForwardSearch:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)CADOccurrenceCacheGetOccurrenceForCalendars:(id)arg1 onDay:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADDatabaseSetBirthdayCalendarEnabled:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)CADDatabaseShouldWhitelistOrganizerPhoneNumberFromJunkChecks:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADOccurrenceCacheDoEvents:(id)arg1 haveOccurrencesAfterDate:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADOccurrenceCacheCancelSearchWithReplyID:(int)arg1;
-(void)CADDatabaseRemoveSuggestedEventCalendarWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseGetEventWithUniqueID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseGetAllEventsWithUniqueID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseCanModifySuggestedEventCalendar:(/*^block*/id)arg1;
-(void)CADDatabaseGetOrCreateBirthdayCalendar:(/*^block*/id)arg1;
-(void)CADDatabaseSetDefaultCalendarForNewEvents:(id)arg1 delegateSource:(id)arg2;
-(void)CADDatabaseGetDefaultCalendarForNewEventsInDelegateSource:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)CADDatabaseGetSecurityScopedLocalURLWrapperForAttachment:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseGetNaturalLanguageSuggestedEventCalendarWithReply:(/*^block*/id)arg1;
-(void)CADOccurrencesExistInRangeForEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 mustStartInInterval:(BOOL)arg4 timezone:(id)arg5 reply:(/*^block*/id)arg6;
-(void)CADDatabaseInsertSuggestedEventCalendarWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseShouldWhitelistOrganizerEmailFromJunkChecks:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADOccurrenceCacheGetOccurrenceCountsForCalendars:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseSetShowsDeclinedEvents:(BOOL)arg1;
-(void)CADOccurrenceCacheSearchLocationsWithTerm:(id)arg1 inCalendars:(id)arg2 responseToken:(int)arg3 reply:(/*^block*/id)arg4;
-(void)CADDatabaseGetSuggestedEventCalendarWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseGetDefaultLocalCalendarWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseGetOrCreateSubscribedCalendarsSource:(/*^block*/id)arg1;
-(void)CADOccurrenceCacheSearchWithTerm:(id)arg1 inCalendars:(id)arg2 responseToken:(int)arg3 reply:(/*^block*/id)arg4;

@end

