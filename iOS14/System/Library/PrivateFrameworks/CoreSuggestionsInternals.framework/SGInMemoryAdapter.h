/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/SGJournalCalendarObserver.h>
#import <libobjc.A.dylib/SGJournalContactsObserver.h>
#import <libobjc.A.dylib/SGJournalRemindersObserver.h>

@class NSMutableArray, NSMutableDictionary, NSArray, NSString;

@interface SGInMemoryAdapter : NSObject <SGJournalCalendarObserver, SGJournalContactsObserver, SGJournalRemindersObserver> {

	NSMutableArray* _events;
	NSMutableDictionary* _contacts;
	NSMutableArray* _reminders;

}

@property (nonatomic,readonly) NSArray * events; 
@property (nonatomic,readonly) NSArray * contacts; 
@property (nonatomic,readonly) NSArray * reminders;                 //@synthesize reminders=_reminders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addEvents:(id)arg1 ;
-(NSArray *)contacts;
-(void)addEvent:(id)arg1 ;
-(void)confirmOrRejectContact:(id)arg1 ;
-(id)init;
-(void)addContact:(id)arg1 ;
-(NSArray *)events;
-(void)addReminder:(id)arg1 ;
-(NSArray *)reminders;
-(void)confirmReminderFromThisDevice:(id)arg1 ;
-(void)rejectReminderFromThisDevice:(id)arg1 ;
-(void)reminderAlarmTriggeredFromThisDevice:(id)arg1 ;
-(void)confirmReminderFromOtherDevice:(id)arg1 ;
-(void)rejectReminderFromOtherDevice:(id)arg1 ;
-(void)orphanReminder:(id)arg1 ;
-(void)confirmContact:(id)arg1 ;
-(void)rejectContact:(id)arg1 ;
-(void)removeAllStoredPseudoContacts;
-(void)cancelEvent:(id)arg1 ;
-(void)confirmEventFromThisDevice:(id)arg1 ;
-(void)confirmEventFromOtherDevice:(id)arg1 ;
-(void)rejectEventFromThisDevice:(id)arg1 ;
-(void)rejectEventFromOtherDevice:(id)arg1 ;
-(void)orphanEvent:(id)arg1 ;
-(void)calendarDeleted;
-(void)cancelEvents:(id)arg1 ;
-(void)overwriteEvent:(id)arg1 ;
@end

