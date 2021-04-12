/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)contactsForEmailAddress:(id)arg1 ;
-(id)contactsForPhoneNumber:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)contactsForPredicate:(id)arg1 keys:(id)arg2 ;
-(id<CNScheduler>)storeScheduler;
@end

