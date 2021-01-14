/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMStore;

@interface REMAccountsDataView : NSObject {

	REMStore* _store;

}

@property (nonatomic,readonly) REMStore * store;              //@synthesize store=_store - In the implementation block
-(id)accountsFromStorages:(id)arg1 ;
-(id)fetchAllAccountsForDumpingWithError:(id*)arg1 ;
-(id)fetchAllAccountsForAccountManagementWithError:(id*)arg1 ;
-(REMStore *)store;
-(id)fetchAccountWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)initWithStore:(id)arg1 ;
-(id)fetchAllAccountsWithError:(id*)arg1 ;
-(id)fetchAccountsWithExternalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)fetchAccountsWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchAccountWithObjectID:(id)arg1 error:(id*)arg2 ;
@end

