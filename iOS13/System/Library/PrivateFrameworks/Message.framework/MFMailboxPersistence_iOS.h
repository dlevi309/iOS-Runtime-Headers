/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailDaemon/EDMailboxPersistence.h>

@class EDPersistenceDatabase, MFMailMessageLibrary, MFMailboxProvider;

@interface MFMailboxPersistence_iOS : EDMailboxPersistence {

	EDPersistenceDatabase* _database;
	MFMailMessageLibrary* _library;

}

@property (nonatomic,readonly) EDPersistenceDatabase * database;                   //@synthesize database=_database - In the implementation block
@property (nonatomic,__weak,readonly) MFMailMessageLibrary * library;              //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) MFMailboxProvider * mailboxProvider; 
-(EDPersistenceDatabase *)database;
-(MFMailMessageLibrary *)library;
-(BOOL)deleteMailbox:(id)arg1 ;
-(BOOL)renameMailbox:(id)arg1 newName:(id)arg2 ;
-(id)mailboxDatabaseIDsForMailboxObjectIDs:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(id)initWithMailboxProvider:(id)arg1 database:(id)arg2 library:(id)arg3 ;
-(BOOL)createMailbox:(id)arg1 parentMailboxID:(id)arg2 ;
-(BOOL)moveMailbox:(id)arg1 newParentMailboxID:(id)arg2 ;
-(void)serverCountsForMailboxScope:(id)arg1 block:(/*^block*/id)arg2 ;
@end

