/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMStore;

@interface REMListsDataView : NSObject {

	REMStore* _store;

}

@property (nonatomic,readonly) REMStore * store;              //@synthesize store=_store - In the implementation block
+(id)listsFromAccountStorages:(id)arg1 listStorages:(id)arg2 store:(id)arg3 requestedListIDs:(id)arg4 ;
+(id)listsFromAccountStorages:(id)arg1 listStorages:(id)arg2 store:(id)arg3 ;
+(id)listsFromAccountStorages:(id)arg1 listStorages:(id)arg2 store:(id)arg3 requestedExternalIdentifiers:(id)arg4 ;
-(id)initWithStore:(id)arg1 ;
-(REMStore *)store;
-(id)fetchListWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchListsWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchEligibleDefaultListsWithError:(id*)arg1 ;
-(id)fetchDefaultListWithError:(id*)arg1 ;
-(id)fetchListsIncludingSpecialContainersInAccount:(id)arg1 error:(id*)arg2 ;
-(id)fetchListIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchListIncludingSpecialContainerWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchAllListsWithExternalIdentifier:(id)arg1 inAccount:(id)arg2 error:(id*)arg3 ;
-(id)fetchListsInAccount:(id)arg1 error:(id*)arg2 ;
-(id)fetchListIncludingSpecialContainerWithExternalIdentifier:(id)arg1 inAccount:(id)arg2 error:(id*)arg3 ;
-(id)fetchListsInGroup:(id)arg1 error:(id*)arg2 ;
-(id)fetchListsIncludingMarkedForDeleteWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchListsIncludingSpecialContainersWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchListsWithExternalIdentifiers:(id)arg1 inAccount:(id)arg2 error:(id*)arg3 ;
@end

