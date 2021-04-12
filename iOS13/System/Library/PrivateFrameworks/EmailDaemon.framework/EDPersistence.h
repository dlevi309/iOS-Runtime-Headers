/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(EDPersistenceDatabase *)database;
-(EDMessageChangeManager *)messageChangeManager;
-(EDPersistenceHookRegistry *)hookRegistry;
-(EDSearchableIndexManager *)searchableIndexManager;
-(id<EDAccountsProvider>)accountsProvider;
-(EDVIPManager *)vipManager;
-(EDMessagePersistence *)messagePersistence;
-(EDMailboxPersistence *)mailboxPersistence;
-(void)scheduleRecurringActivity;
-(EDGmailLabelPersistence *)gmailLabelPersistence;
-(EDLocalActionPersistence *)localActionPersistence;
-(void)setAccountsProvider:(id<EDAccountsProvider>)arg1 ;
-(EMBlockedSenderManager *)blockedSenderManager;
-(id<EMUserProfileProvider>)userProfileProvider;
-(EDConversationPersistence *)conversationPersistence;
-(id<EDRemoteSearchProvider>)remoteSearchProvider;
-(EDServerMessagePersistenceFactory *)serverMessagePersistenceFactory;
-(EDThreadPersistence *)threadPersistence;
-(EDActivityPersistence *)activityPersistence;
-(id)initWithVIPManager:(id)arg1 ;
-(void)_commonInitWithVIPManager:(id)arg1 ;
@end

