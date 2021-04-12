/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CNContactFetchRequest, CNContactsEnvironment, CNManagedConfiguration;

@interface CNiOSContactFetcher : NSObject {

	void* _addressBook;
	CNContactFetchRequest* _fetchRequest;
	/*^block*/id _personToContact;
	CNContactsEnvironment* _environment;
	CNManagedConfiguration* _managedConfiguration;

}

@property (nonatomic,readonly) void* addressBook;                                 //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,readonly) CNContactFetchRequest * fetchRequest;              //@synthesize fetchRequest=_fetchRequest - In the implementation block
+(/*^block*/id)linkedPeopleComparator;
+(id)contactsForFetchRequest:(id)arg1 matchInfos:(id*)arg2 inAddressBook:(void*)arg3 environment:(id)arg4 managedConfiguration:(id)arg5 error:(id*)arg6 ;
-(void)dealloc;
-(CNContactFetchRequest *)fetchRequest;
-(void*)addressBook;
-(id)executeFetchRequestWithProgressiveResults:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithFetchRequest:(id)arg1 addressBook:(void*)arg2 environment:(id)arg3 managedConfiguration:(id)arg4 ;
-(id)fetchContactsReturningMatchInfos:(id*)arg1 error:(id*)arg2 ;
-(void)_batchLoadPropertiesForPeople:(id)arg1 keysToFetch:(id)arg2 ;
-(id)unifyPeople:(id)arg1 keysToFetch:(id)arg2 abMatchInfos:(id)arg3 filteredForAccountIdentifiers:(id)arg4 outCNMatchInfos:(id*)arg5 ;
-(id)_abMatchMetadataToCNContactMatchInfoArray:(id)arg1 ;
-(id)_contactsFromPeople:(id)arg1 abMatchInfo:(id)arg2 keysToFetch:(id)arg3 ;
@end

