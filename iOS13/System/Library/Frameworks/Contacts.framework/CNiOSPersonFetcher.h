/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CNiOSPersonFetchRequest, CNContactsEnvironment;

@interface CNiOSPersonFetcher : NSObject {

	CNiOSPersonFetchRequest* _fetchRequest;
	void* _addressBook;
	CNContactsEnvironment* _environment;

}

@property (nonatomic,readonly) CNiOSPersonFetchRequest * fetchRequest;              //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,readonly) void* addressBook;                                   //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,readonly) CNContactsEnvironment * environment;                 //@synthesize environment=_environment - In the implementation block
+(id)peopleForFetchRequest:(id)arg1 matchInfos:(id*)arg2 inAddressBook:(void*)arg3 environment:(id)arg4 error:(id*)arg5 ;
-(void)dealloc;
-(CNContactsEnvironment *)environment;
-(CNiOSPersonFetchRequest *)fetchRequest;
-(id)initWithAddressBook:(void*)arg1 fetchRequest:(id)arg2 environment:(id)arg3 ;
-(id)fetchPeopleReturningMatchInfos:(id*)arg1 error:(id*)arg2 ;
-(id)fetchPeopleUsingNativeSortReturningMatchInfos:(id*)arg1 error:(id*)arg2 ;
-(BOOL)shouldSortInMemory;
-(id)sortPeople:(id)arg1 ;
-(void*)addressBook;
-(id)executeFetchRequestWithProgressiveResults:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

