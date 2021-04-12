/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMStore;

@interface REMRemindersDataView : NSObject {

	REMStore* _store;

}

@property (nonatomic,readonly) REMStore * store;              //@synthesize store=_store - In the implementation block
+(id)remindersFromAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 store:(id)arg4 requestedReminderIDs:(id)arg5 showMarkedForDeleteObjects:(BOOL)arg6 ;
+(id)remindersFromAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 store:(id)arg4 requestedStringIdentifiers:(id)arg5 identifierSelector:(SEL)arg6 ;
+(id)remindersFromAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 store:(id)arg4 showMarkedForDeleteObjects:(BOOL)arg5 ;
-(id)initWithStore:(id)arg1 ;
-(REMStore *)store;
-(id)fetchRemindersWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchRemindersWithParentReminderIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchReminderWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchAllRemindersWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)fetchReminderIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchReminderWithExternalIdentifier:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(id)fetchRemindersWithExternalIdentifiers:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(id)fetchReminderWithDACalendarItemUniqueIdentifier:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(id)fetchRemindersWithDACalendarItemUniqueIdentifiers:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(id)fetchRemindersWithObjectIDs:(id)arg1 includeMarkedForDelete:(BOOL)arg2 error:(id*)arg3 ;
-(id)fetchRemindersWithListID:(id)arg1 includingSubtasks:(BOOL)arg2 error:(id*)arg3 ;
-(id)fetchRemindersWithParentReminderID:(id)arg1 error:(id*)arg2 ;
-(id)fetchRemindersCountWithListID:(id)arg1 error:(id*)arg2 ;
@end

