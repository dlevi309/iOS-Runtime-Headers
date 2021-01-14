/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailDaemon/EDPersistence.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol EDAccountsProvider, EDRemoteSearchProvider, EMUserProfileProvider;
@class EDConversationPersistence, EDPersistenceDatabase, EDLocalActionPersistence, EDMailboxPersistence, EDMessageChangeManager, EDMessagePersistence, EDSearchableIndexManager, EDServerMessagePersistenceFactory, EDThreadPersistence, EDListUnsubscribeHandler, MFMailMessageLibrary, NSString;

@interface MFPersistence_iOS : EDPersistence <EFLoggable> {

	id<EDAccountsProvider> _accountsProvider;
	EDConversationPersistence* _conversationPersistence;
	EDPersistenceDatabase* _database;
	EDLocalActionPersistence* _localActionPersistence;
	EDMailboxPersistence* _mailboxPersistence;
	EDMessageChangeManager* _messageChangeManager;
	EDMessagePersistence* _messagePersistence;
	id<EDRemoteSearchProvider> _remoteSearchProvider;
	EDSearchableIndexManager* _searchableIndexManager;
	EDServerMessagePersistenceFactory* _serverMessagePersistenceFactory;
	EDThreadPersistence* _threadPersistence;
	id<EMUserProfileProvider> _userProfileProvider;
	EDListUnsubscribeHandler* _listUnsubscribeHandler;
	MFMailMessageLibrary* _library;

}

@property (assign,nonatomic,__weak) MFMailMessageLibrary * library;                          //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) EDMailboxPersistence * mailboxPersistence;                      //@synthesize mailboxPersistence=_mailboxPersistence - In the implementation block
@property (nonatomic,retain) id<EDAccountsProvider> accountsProvider;                        //@synthesize accountsProvider=_accountsProvider - In the implementation block
@property (nonatomic,retain) EDListUnsubscribeHandler * listUnsubscribeHandler;              //@synthesize listUnsubscribeHandler=_listUnsubscribeHandler - In the implementation block
@property (nonatomic,retain) id<EMUserProfileProvider> userProfileProvider;                  //@synthesize userProfileProvider=_userProfileProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(MFMailMessageLibrary *)library;
-(void)test_tearDown;
-(id)conversationPersistence;
-(EDMailboxPersistence *)mailboxPersistence;
-(void)setUpWithMailboxProvider:(id)arg1 remoteSearchProvider:(id)arg2 ;
-(id)serverMessagePersistenceFactory;
-(id)threadPersistence;
-(id)messagePersistence;
-(void)scheduleRecurringActivity;
-(EDListUnsubscribeHandler *)listUnsubscribeHandler;
-(id)messageChangeManager;
-(id<EDAccountsProvider>)accountsProvider;
-(void)setMailboxPersistence:(EDMailboxPersistence *)arg1 ;
-(id<EMUserProfileProvider>)userProfileProvider;
-(void)setLibrary:(MFMailMessageLibrary *)arg1 ;
-(void)setUserProfileProvider:(id<EMUserProfileProvider>)arg1 ;
-(void)_configureSearchableIndexManagerIfNecessary;
-(void)setListUnsubscribeHandler:(EDListUnsubscribeHandler *)arg1 ;
-(void)setAccountsProvider:(id<EDAccountsProvider>)arg1 ;
-(id)localActionPersistence;
-(id)initWithPath:(id)arg1 inMemoryIdentifier:(id)arg2 library:(id)arg3 propertyMapper:(id)arg4 ;
-(id)database;
-(id)remoteSearchProvider;
-(id)searchableIndexManager;
@end

