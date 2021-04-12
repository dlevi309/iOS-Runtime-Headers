/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


#import <Message/Message-Structs.h>
@class EDPersistenceDatabaseConnection;

@interface MFMailMessageLibraryMailboxURLMigrationStep : NSObject {

	EDPersistenceDatabaseConnection* _sqliteConnection;

}

@property (nonatomic,retain) EDPersistenceDatabaseConnection * sqliteConnection;              //@synthesize sqliteConnection=_sqliteConnection - In the implementation block
-(BOOL)performMigrationStep;
-(id)initWithSQLiteConnection:(id)arg1 ;
-(BOOL)_renameMailboxDataFolders:(sqlite3Ref)arg1 ;
-(BOOL)_renameMailboxURLsForMailAccount:(id)arg1 inSQLiteDB:(sqlite3Ref)arg2 ;
-(void)_purgeFoldersMatchingPatterns:(id)arg1 ;
-(BOOL)_updateMailboxURLsInSQLitedb:(sqlite3Ref)arg1 withOldURLToNewURLMap:(id)arg2 ;
-(EDPersistenceDatabaseConnection *)sqliteConnection;
-(void)setSqliteConnection:(EDPersistenceDatabaseConnection *)arg1 ;
@end

