/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CNReputationCoreRecentsAdapter *)coreRecentsAdapter;
-(id)build;
-(CNReputationHandle *)handle;
-(id)contactsTrustForPhoneNumber:(id)arg1 ;
-(id)initWithHandle:(id)arg1 coreRecentsAdapter:(id)arg2 contactsAdapter:(id)arg3 logger:(id)arg4 ;
-(CNReputationContactsAdapter *)contactsAdapter;
-(id)coreRecentsTrustForHandle:(id)arg1 ;
-(CNFuture *)scoreFuture;
-(void)addContactsTrustForEmailAddress;
-(void)addCoreRecentsTrust;
-(void)addContactsTrustForPhoneNumber;
-(CNReputationLogger *)logger;
-(id)contactsTrustForEmailAddress:(id)arg1 ;
-(void)setScoreFuture:(CNFuture *)arg1 ;
@end

