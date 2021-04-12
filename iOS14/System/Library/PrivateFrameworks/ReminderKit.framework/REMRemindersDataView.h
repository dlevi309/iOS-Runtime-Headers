/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMStore;

@interface REMRemindersDataView : NSObject {

	REMStore* _store;

}

@property (nonatomic,readonly) REMStore * store;              //@synthesize store=_store - In the implementation block
+(id)remindersFromAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 store:(id)arg4 requestedStringIdentifiers:(id)arg5 identifierSelector:(SEL)arg6 ;
+(id)remindersFromAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 store:(id)arg4 requestedReminderIDs:(id)arg5 showMarkedForDeleteObjects:(BOOL)arg6 ;
+(id)remindersFromAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 store:(id)arg4 showMarkedForDeleteObjects:(BOOL)arg5 ;
-(id)fetchRemindersWithExternalIdentifiers:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(id)fetchRemindersWithDACalendarItemUniqueIdentifiers:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(id)fetchReminderWithObjectID:(id)arg1 error:(id*)arg2 ;
-(REMStore *)store;
-(id)fetchRemindersWithParentReminderIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchReminderWithDACalendarItemUniqueIdentifier:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
-(id)initWithStore:(id)arg1 ;
-(id)fetchRemindersWithListID:(id)arg1 includingSubtasks:(BOOL)arg2 error:(id*)arg3 ;
-(id)fetchRemindersWithObjectIDs:(id)arg1 includeMarkedForDelete:(BOOL)arg2 error:(id*)arg3 ;
-(id)fetchAllRemindersWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)fetchRemindersMatchingPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)fetchRemindersWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchRemindersWithParentReminderID:(id)arg1 error:(id*)arg2 ;
-(id)fetchRemindersCountWithListID:(id)arg1 error:(id*)arg2 ;
-(id)fetchReminderIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchReminderWithExternalIdentifier:(id)arg1 inList:(id)arg2 error:(id*)arg3 ;
@end

