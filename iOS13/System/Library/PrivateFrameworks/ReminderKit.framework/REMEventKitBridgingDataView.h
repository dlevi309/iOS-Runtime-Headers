/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMStore;

@interface REMEventKitBridgingDataView : NSObject {

	REMStore* _store;

}

@property (nonatomic,readonly) REMStore * store;              //@synthesize store=_store - In the implementation block
-(id)initWithStore:(id)arg1 ;
-(REMStore *)store;
-(id)fetchListsWithError:(id*)arg1 ;
-(id)fetchRemindersWithListIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchIncompleteRemindersWithDueDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id*)arg4 ;
-(id)fetchCompletedRemindersWithCompletionDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id*)arg4 ;
@end

