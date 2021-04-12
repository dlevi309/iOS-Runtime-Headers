/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)contactsForFetchRequest:(id)arg1 matchInfos:(id*)arg2 inAddressBook:(void*)arg3 environment:(id)arg4 managedConfiguration:(id)arg5 error:(id*)arg6 ;
-(id)executeFetchRequestWithProgressiveResults:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithFetchRequest:(id)arg1 addressBook:(void*)arg2 environment:(id)arg3 managedConfiguration:(id)arg4 ;
-(id)fetchContactsReturningMatchInfos:(id*)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

