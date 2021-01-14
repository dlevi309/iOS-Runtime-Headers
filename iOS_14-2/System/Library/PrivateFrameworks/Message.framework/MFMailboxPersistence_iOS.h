/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MFMailMessageLibrary *)library;
-(BOOL)createMailbox:(id)arg1 parentMailboxID:(id)arg2 ;
-(id)initWithMailboxProvider:(id)arg1 database:(id)arg2 library:(id)arg3 ;
-(void)serverCountsForMailboxScope:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)renameMailbox:(id)arg1 newName:(id)arg2 ;
-(BOOL)moveMailbox:(id)arg1 newParentMailboxID:(id)arg2 ;
-(EDPersistenceDatabase *)database;
-(id)mailboxDatabaseIDsForMailboxObjectIDs:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(BOOL)deleteMailbox:(id)arg1 ;
@end

