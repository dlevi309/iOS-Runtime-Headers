/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CNReputationCoreRecentsAdapter *)coreRecentsAdapter;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)init;
-(id)initWithCoreRecentsAdapter:(id)arg1 contactsAdapter:(id)arg2 logger:(id)arg3 schedulerProvider:(id)arg4 ;
-(CNReputationContactsAdapter *)contactsAdapter;
-(id)makeFutureForHandle:(id)arg1 ;
-(CNReputationLogger *)logger;
-(id)reputationForHandle:(id)arg1 timeout:(double)arg2 error:(id*)arg3 ;
@end

