/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EFLoggable.h>

@protocol EDAccountsProvider, EMUserProfileProvider, EDRemoteSearchProvider;
@class EDGmailLabelPersistence, EDMailboxPersistence, EDMessagePersistence, EDPersistenceHookRegistry, EDVIPManager, EMBlockedSenderManager, EDActivityPersistence, EDPersistenceDatabase, EDConversationPersistence, EDLocalActionPersistence, EDServerMessagePersistenceFactory, EDThreadPersistence, EDMessageChangeManager, EDSearchableIndexManager, NSString;

@interface EDPersistence : NSObject <EFLoggable> {

	EDGmailLabelPersistence* _gmailLabelPersistence;
	EDMailboxPersistence* _mailboxPersistence;
	EDMessagePersistence* _messagePersistence;
	EDPersistenceHookRegistry* _hookRegistry;
	id<EDAccountsProvider> _accountsProvider;
	id<EMUserProfileProvider> _userProfileProvider;
	id<EDRemoteSearchProvider> _remoteSearchProvider;
	EDVIPManager* _vipManager;
	EMBlockedSenderManager* _blockedSenderManager;
	EDActivityPersistence* _activityPersistence;

}

@property (nonatomic,retain) id<EDAccountsProvider> accountsProvider;                                  //@synthesize accountsProvider=_accountsProvider - In the implementation block
@property (readonly) EDPersistenceDatabase * database; 
@property (readonly) EDConversationPersistence * conversationPersistence; 
@property (readonly) EDLocalActionPersistence * localActionPersistence; 
@property (readonly) EDServerMessagePersistenceFactory * serverMessagePersistenceFactory; 
@property (readonly) EDGmailLabelPersistence * gmailLabelPersistence;                                  //@synthesize gmailLabelPersistence=_gmailLabelPersistence - In the implementation block
@property (readonly) EDThreadPersistence * threadPersistence; 
@property (nonatomic,readonly) EDMailboxPersistence * mailboxPersistence;                              //@synthesize mailboxPersistence=_mailboxPersistence - In the implementation block
@property (readonly) EDMessagePersistence * messagePersistence;                                        //@synthesize messagePersistence=_messagePersistence - In the implementation block
@property (readonly) EDMessageChangeManager * messageChangeManager; 
@property (readonly) EDPersistenceHookRegistry * hookRegistry;                                         //@synthesize hookRegistry=_hookRegistry - In the implementation block
@property (nonatomic,readonly) id<EMUserProfileProvider> userProfileProvider;                          //@synthesize userProfileProvider=_userProfileProvider - In the implementation block
@property (readonly) EDSearchableIndexManager * searchableIndexManager; 
@property (nonatomic,readonly) id<EDRemoteSearchProvider> remoteSearchProvider;                        //@synthesize remoteSearchProvider=_remoteSearchProvider - In the implementation block
@property (readonly) EDVIPManager * vipManager;                                                        //@synthesize vipManager=_vipManager - In the implementation block
@property (nonatomic,readonly) EMBlockedSenderManager * blockedSenderManager;                          //@synthesize blockedSenderManager=_blockedSenderManager - In the implementation block
@property (readonly) EDActivityPersistence * activityPersistence;                                      //@synthesize activityPersistence=_activityPersistence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(void)test_tearDown;
-(EDConversationPersistence *)conversationPersistence;
-(EDMailboxPersistence *)mailboxPersistence;
-(id)init;
-(EDServerMessagePersistenceFactory *)serverMessagePersistenceFactory;
-(EDVIPManager *)vipManager;
-(EDThreadPersistence *)threadPersistence;
-(EDMessagePersistence *)messagePersistence;
-(void)scheduleRecurringActivity;
-(EDMessageChangeManager *)messageChangeManager;
-(id<EDAccountsProvider>)accountsProvider;
-(id<EMUserProfileProvider>)userProfileProvider;
-(EMBlockedSenderManager *)blockedSenderManager;
-(void)setAccountsProvider:(id<EDAccountsProvider>)arg1 ;
-(EDLocalActionPersistence *)localActionPersistence;
-(EDPersistenceHookRegistry *)hookRegistry;
-(EDPersistenceDatabase *)database;
-(EDGmailLabelPersistence *)gmailLabelPersistence;
-(id<EDRemoteSearchProvider>)remoteSearchProvider;
-(EDSearchableIndexManager *)searchableIndexManager;
-(EDActivityPersistence *)activityPersistence;
-(id)initWithVIPManager:(id)arg1 ;
-(void)_commonInitWithVIPManager:(id)arg1 ;
@end

