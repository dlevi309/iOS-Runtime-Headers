/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailDaemon/EDPersistence.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol EDAccountsProvider, EDRemoteSearchProvider, EMUserProfileProvider;
@class EDConversationPersistence, EDPersistenceDatabase, EDLocalActionPersistence, EDMailboxPersistence, EDMessageChangeManager, EDMessagePersistence, EDSearchableIndexManager, EDServerMessagePersistenceFactory, EDThreadPersistence, MFMailMessageLibrary, NSString;

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
	MFMailMessageLibrary* _library;

}

@property (assign,nonatomic,__weak) MFMailMessageLibrary * library;                      //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) EDMailboxPersistence * mailboxPersistence;                  //@synthesize mailboxPersistence=_mailboxPersistence - In the implementation block
@property (nonatomic,retain) id<EDAccountsProvider> accountsProvider;                    //@synthesize accountsProvider=_accountsProvider - In the implementation block
@property (nonatomic,retain) id<EMUserProfileProvider> userProfileProvider;              //@synthesize userProfileProvider=_userProfileProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)database;
-(MFMailMessageLibrary *)library;
-(void)setLibrary:(MFMailMessageLibrary *)arg1 ;
-(id)messageChangeManager;
-(id)initWithPath:(id)arg1 inMemoryIdentifier:(id)arg2 library:(id)arg3 propertyMapper:(id)arg4 ;
-(id)searchableIndexManager;
-(id<EDAccountsProvider>)accountsProvider;
-(id)messagePersistence;
-(EDMailboxPersistence *)mailboxPersistence;
-(void)scheduleRecurringActivity;
-(id)localActionPersistence;
-(void)setAccountsProvider:(id<EDAccountsProvider>)arg1 ;
-(id<EMUserProfileProvider>)userProfileProvider;
-(void)_configureSearchableIndexManagerIfNecessary;
-(void)setUpWithMailboxProvider:(id)arg1 remoteSearchProvider:(id)arg2 ;
-(id)conversationPersistence;
-(void)setMailboxPersistence:(EDMailboxPersistence *)arg1 ;
-(id)remoteSearchProvider;
-(id)serverMessagePersistenceFactory;
-(id)threadPersistence;
-(void)setUserProfileProvider:(id<EMUserProfileProvider>)arg1 ;
@end

