/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMStore;

@interface REMAccountsDataView : NSObject {

	REMStore* _store;

}

@property (nonatomic,readonly) REMStore * store;              //@synthesize store=_store - In the implementation block
-(id)initWithStore:(id)arg1 ;
-(REMStore *)store;
-(id)fetchAllAccountsWithError:(id*)arg1 ;
-(id)fetchAllAccountsForAccountManagementWithError:(id*)arg1 ;
-(id)fetchAllAccountsForDumpingWithError:(id*)arg1 ;
-(id)fetchAccountWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchAccountsWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchAccountWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)fetchAccountsWithExternalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)accountsFromStorages:(id)arg1 ;
@end

