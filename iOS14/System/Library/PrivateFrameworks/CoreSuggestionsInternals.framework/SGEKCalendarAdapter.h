/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/SGJournalCalendarObserver.h>

@class EKEventStore, SGSqlEntityStore, NSString;

@interface SGEKCalendarAdapter : NSObject <SGJournalCalendarObserver> {

	EKEventStore* _externalEKStore;
	SGSqlEntityStore* _store;

}

@property (assign,nonatomic,__weak) SGSqlEntityStore * store;              //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultEKStore;
-(void)addEvents:(id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(void)setStore:(SGSqlEntityStore *)arg1 ;
-(SGSqlEntityStore *)store;
-(id)ekStore;
-(void)cancelEvent:(id)arg1 ;
-(void)confirmEventFromThisDevice:(id)arg1 ;
-(void)confirmEventFromOtherDevice:(id)arg1 ;
-(void)rejectEventFromThisDevice:(id)arg1 ;
-(void)rejectEventFromOtherDevice:(id)arg1 ;
-(void)orphanEvent:(id)arg1 ;
-(void)calendarDeleted;
-(void)cancelEvents:(id)arg1 ;
-(id)initWithSGSqlEntityStore:(id)arg1 ;
-(id)initWithSGSqlEntityStore:(id)arg1 andEKStore:(id)arg2 ;
-(void)addEvent:(id)arg1 commit:(BOOL)arg2 ;
-(void)_updateEvent:(id)arg1 withValuesFrom:(id)arg2 ekStore:(id)arg3 ;
-(void)cancelEvent:(id)arg1 commit:(BOOL)arg2 ;
-(id)_eventsAssociatedWithStorageEvent:(id)arg1 store:(id)arg2 ;
-(void)_addEKEventToCalendar:(id)arg1 storageEvent:(id)arg2 ekStore:(id)arg3 commit:(BOOL)arg4 ;
-(BOOL)_updateEKEvent:(id)arg1 withEvent:(id)arg2 ekStore:(id)arg3 error:(id*)arg4 ;
-(BOOL)_cancelEKEvent:(id)arg1 ekStore:(id)arg2 error:(id*)arg3 ;
-(BOOL)_isEKEventFromSuggestedCalendar:(id)arg1 ekStore:(id)arg2 ;
-(BOOL)_isEKEventFromNLEventsCalendar:(id)arg1 ekStore:(id)arg2 ;
-(void)_removeEvent:(id)arg1 commit:(BOOL)arg2 ;
-(void)_updateEventMetadataInModifiedEvent:(id)arg1 withExistingCheckInShortcutInOriginalEvent:(id)arg2 ifTeamIdentifierIsDifferentInStorageEvent:(id)arg3 ;
-(void)_removeEKEvent:(id)arg1 store:(id)arg2 commit:(BOOL)arg3 ;
@end

