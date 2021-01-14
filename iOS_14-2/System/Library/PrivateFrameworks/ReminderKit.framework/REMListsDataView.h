/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMStore;

@interface REMListsDataView : NSObject {

	REMStore* _store;

}

@property (nonatomic,readonly) REMStore * store;              //@synthesize store=_store - In the implementation block
+(id)listsFromAccountStorages:(id)arg1 listStorages:(id)arg2 store:(id)arg3 ;
+(id)listsFromAccountStorages:(id)arg1 listStorages:(id)arg2 store:(id)arg3 requestedExternalIdentifiers:(id)arg4 ;
+(id)listsFromAccountStorages:(id)arg1 listStorages:(id)arg2 store:(id)arg3 requestedListIDs:(id)arg4 ;
-(id)fetchListsInGroup:(id)arg1 error:(id*)arg2 ;
-(id)fetchListsInAccount:(id)arg1 error:(id*)arg2 ;
-(REMStore *)store;
-(id)initWithStore:(id)arg1 ;
-(id)fetchListIncludingSpecialContainerWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchDefaultListWithError:(id*)arg1 ;
-(id)fetchListsIncludingSpecialContainersWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchListIncludingSpecialContainerWithExternalIdentifier:(id)arg1 inAccount:(id)arg2 error:(id*)arg3 ;
-(id)fetchListsWithExternalIdentifiers:(id)arg1 inAccount:(id)arg2 error:(id*)arg3 ;
-(id)fetchListsIncludingSpecialContainersInAccount:(id)arg1 error:(id*)arg2 ;
-(id)fetchEligibleDefaultListsWithError:(id*)arg1 ;
-(id)fetchListsIncludingMarkedForDeleteWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchListIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchAllListsWithExternalIdentifier:(id)arg1 inAccount:(id)arg2 error:(id*)arg3 ;
-(id)fetchListsWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchListWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)debugFetchPhantomListsWithError:(id*)arg1 ;
@end

