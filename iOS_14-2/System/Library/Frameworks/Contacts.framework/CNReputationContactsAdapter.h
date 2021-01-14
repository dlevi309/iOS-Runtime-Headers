/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@protocol CNSchedulerProvider, CNScheduler;
@class CNContactStore;

@interface CNReputationContactsAdapter : NSObject {

	CNContactStore* _contactStore;
	id<CNSchedulerProvider> _schedulerProvider;
	id<CNScheduler> _storeScheduler;

}

@property (nonatomic,readonly) CNContactStore * contactStore;                          //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> storeScheduler;                         //@synthesize storeScheduler=_storeScheduler - In the implementation block
-(CNContactStore *)contactStore;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)init;
-(id<CNScheduler>)storeScheduler;
-(id)initWithContactStore:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)contactsForPredicate:(id)arg1 keys:(id)arg2 ;
-(id)initWithContactStore:(id)arg1 ;
-(id)contactsForPhoneNumber:(id)arg1 ;
-(id)contactsForEmailAddress:(id)arg1 ;
@end

