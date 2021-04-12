/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CNReputationHandle, CNReputationCoreRecentsAdapter, CNReputationContactsAdapter, CNReputationLogger, CNFuture;

@interface CNReputationFutureBuilder : NSObject {

	CNReputationHandle* _handle;
	CNReputationCoreRecentsAdapter* _coreRecentsAdapter;
	CNReputationContactsAdapter* _contactsAdapter;
	CNReputationLogger* _logger;
	CNFuture* _scoreFuture;

}

@property (nonatomic,copy,readonly) CNReputationHandle * handle;                                 //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) CNReputationCoreRecentsAdapter * coreRecentsAdapter;              //@synthesize coreRecentsAdapter=_coreRecentsAdapter - In the implementation block
@property (nonatomic,readonly) CNReputationContactsAdapter * contactsAdapter;                    //@synthesize contactsAdapter=_contactsAdapter - In the implementation block
@property (nonatomic,readonly) CNReputationLogger * logger;                                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) CNFuture * scoreFuture;                                             //@synthesize scoreFuture=_scoreFuture - In the implementation block
-(CNReputationHandle *)handle;
-(CNReputationLogger *)logger;
-(id)build;
-(CNReputationCoreRecentsAdapter *)coreRecentsAdapter;
-(CNReputationContactsAdapter *)contactsAdapter;
-(id)initWithHandle:(id)arg1 coreRecentsAdapter:(id)arg2 contactsAdapter:(id)arg3 logger:(id)arg4 ;
-(CNFuture *)scoreFuture;
-(id)coreRecentsTrustForHandle:(id)arg1 ;
-(void)setScoreFuture:(CNFuture *)arg1 ;
-(id)contactsTrustForEmailAddress:(id)arg1 ;
-(id)contactsTrustForPhoneNumber:(id)arg1 ;
-(void)addCoreRecentsTrust;
-(void)addContactsTrustForEmailAddress;
-(void)addContactsTrustForPhoneNumber;
@end

