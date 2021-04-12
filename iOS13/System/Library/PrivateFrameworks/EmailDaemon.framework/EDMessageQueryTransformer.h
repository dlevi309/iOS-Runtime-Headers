/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDAccountsProvider, EMVIPManager;
@class EDMailboxPersistence, EDMessagePersistence;

@interface EDMessageQueryTransformer : NSObject {

	id<EDAccountsProvider> _accountsProvider;
	EDMailboxPersistence* _mailboxPersistence;
	EDMessagePersistence* _messagePersistence;
	id<EMVIPManager> _vipManager;

}

@property (nonatomic,readonly) id<EDAccountsProvider> accountsProvider;                //@synthesize accountsProvider=_accountsProvider - In the implementation block
@property (nonatomic,readonly) EDMailboxPersistence * mailboxPersistence;              //@synthesize mailboxPersistence=_mailboxPersistence - In the implementation block
@property (nonatomic,readonly) EDMessagePersistence * messagePersistence;              //@synthesize messagePersistence=_messagePersistence - In the implementation block
@property (nonatomic,readonly) id<EMVIPManager> vipManager;                            //@synthesize vipManager=_vipManager - In the implementation block
-(id<EDAccountsProvider>)accountsProvider;
-(id<EMVIPManager>)vipManager;
-(EDMessagePersistence *)messagePersistence;
-(EDMailboxPersistence *)mailboxPersistence;
-(id)initWithAccountsProvider:(id)arg1 mailboxPersistence:(id)arg2 messagePersistence:(id)arg3 vipManager:(id)arg4 ;
-(id)transformPredicate:(id)arg1 ;
-(id)transformCompoundPredicate:(id)arg1 ;
-(id)transformComparisonPredicate:(id)arg1 ;
-(id)transformSubpredicates:(id)arg1 ;
-(id)simplifyCompoundPredicate:(id)arg1 ;
-(id)simplifySingleSubpredicate:(id)arg1 ;
-(id)simplifyNotPredicate:(id)arg1 ;
-(id)simplifyAndPredicate:(id)arg1 ;
-(id)simplifyOrPredicate:(id)arg1 ;
@end

