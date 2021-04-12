/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@protocol CNSchedulerProvider;
@class CNReputationCoreRecentsAdapter, CNReputationContactsAdapter, CNReputationLogger;

@interface CNReputationStore : NSObject {

	CNReputationCoreRecentsAdapter* _coreRecentsAdapter;
	CNReputationContactsAdapter* _contactsAdapter;
	CNReputationLogger* _logger;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,readonly) CNReputationCoreRecentsAdapter * coreRecentsAdapter;              //@synthesize coreRecentsAdapter=_coreRecentsAdapter - In the implementation block
@property (nonatomic,readonly) CNReputationContactsAdapter * contactsAdapter;                    //@synthesize contactsAdapter=_contactsAdapter - In the implementation block
@property (nonatomic,readonly) CNReputationLogger * logger;                                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                        //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
-(id)init;
-(CNReputationLogger *)logger;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)initWithCoreRecentsAdapter:(id)arg1 contactsAdapter:(id)arg2 logger:(id)arg3 schedulerProvider:(id)arg4 ;
-(id)makeFutureForHandle:(id)arg1 ;
-(CNReputationCoreRecentsAdapter *)coreRecentsAdapter;
-(CNReputationContactsAdapter *)contactsAdapter;
-(id)reputationForHandle:(id)arg1 timeout:(double)arg2 error:(id*)arg3 ;
@end

