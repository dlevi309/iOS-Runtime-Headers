/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADEventInterface.h>

@interface CADEventOperationGroup : CADOperationGroup <CADEventInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(void)CADOccurrenceCacheSearchWithTerm:(id)arg1 inCalendars:(id)arg2 responseToken:(int)arg3 reply:(/*^block*/id)arg4 ;
-(void)CADOccurrenceCacheCancelSearchWithReplyID:(int)arg1 ;
-(void)CADDatabaseGetDefaultLocalCalendarWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetDefaultCalendarForNewEventsInDelegateSource:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)CADDatabaseSetDefaultCalendarForNewEvents:(id)arg1 delegateSource:(id)arg2 ;
-(void)CADDatabaseGetEventWithEventIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetEventWithUniqueID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetAllEventsWithUniqueID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetCountOfUnacknowledgedEvents:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetCountOfNotifiableEvents:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetEndDateOfEarliestExpiringNotifiableEventAfterDate:(id)arg1 timeZone:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADDatabaseSetShowsDeclinedEvents:(BOOL)arg1 ;
-(void)CADDatabaseGetSuggestedEventCalendarWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetNaturalLanguageSuggestedEventCalendarWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseCanModifySuggestedEventCalendar:(/*^block*/id)arg1 ;
-(void)CADDatabaseInsertSuggestedEventCalendarWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseRemoveSuggestedEventCalendarWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseActOnSuggestedEvent:(id)arg1 action:(int)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADOccurrenceCacheAreOccurrencesBeingGenerated:(/*^block*/id)arg1 ;
-(void)CADOccurrenceCacheGetOccurrenceCountsForCalendars:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADOccurrenceCacheGetOccurrenceForCalendars:(id)arg1 onDay:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADOccurrenceCacheGetOccurrenceDateOfEventWithRowID:(int)arg1 nearestDate:(id)arg2 prefersForwardSearch:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)CADOccurrenceCacheDoEvents:(id)arg1 haveOccurrencesAfterDate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADOccurrenceCacheSearchLocationsWithTerm:(id)arg1 inCalendars:(id)arg2 responseToken:(int)arg3 reply:(/*^block*/id)arg4 ;
-(void)CADOccurrencesExistInRangeForEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 mustStartInInterval:(BOOL)arg4 timezone:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)CADDatabaseShouldWhitelistOrganizerEmailFromJunkChecks:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseShouldWhitelistOrganizerPhoneNumberFromJunkChecks:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetSecurityScopedLocalURLWrapperForAttachment:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_getDefaultCalendarIDForNewEventsInStoreWithID:(id)arg1 ;
-(BOOL)_CADDatabaseCanModifySuggestedEventCalendar;
-(void)CADDatabaseActOnSuggestedEvent:(id)arg1 action:(int)arg2 validator:(id)arg3 reply:(/*^block*/id)arg4 ;
@end

