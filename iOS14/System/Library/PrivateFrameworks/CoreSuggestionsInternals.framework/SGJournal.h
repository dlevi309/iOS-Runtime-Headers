/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSMutableArray;

@interface SGJournal : NSObject {

	NSMutableArray* _calendarObservers;
	NSMutableArray* _contactsObservers;
	NSMutableArray* _remindersObservers;
	NSMutableArray* _queuedOperations;
	BOOL _observersFrozen;

}
-(id)init;
-(void)addEntry:(id)arg1 ;
-(BOOL)hasObserver:(id)arg1 ;
-(void)addEntries:(id)arg1 ;
-(void)_callCalendarObservers:(id)arg1 contactsObservers:(id)arg2 remindersObservers:(id)arg3 withEntry:(id)arg4 ;
-(unsigned long long)_eventBatchOperationSupportedForEntries:(id)arg1 ;
-(void)addCalendarObserver:(id)arg1 ;
-(void)addContactsObserver:(id)arg1 ;
-(void)addRemindersObserver:(id)arg1 ;
-(void)freezeObservers;
-(void)thawObserversForTesting;
@end

