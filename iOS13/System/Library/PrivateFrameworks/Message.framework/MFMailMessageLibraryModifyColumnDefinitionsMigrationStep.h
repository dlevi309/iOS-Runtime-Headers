/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class EDPersistenceDatabaseConnection, EFSQLSchema;

@interface MFMailMessageLibraryModifyColumnDefinitionsMigrationStep : NSObject {

	EDPersistenceDatabaseConnection* _connection;

}

@property (nonatomic,retain) EDPersistenceDatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) EFSQLSchema * schema; 
-(EDPersistenceDatabaseConnection *)connection;
-(void)setConnection:(EDPersistenceDatabaseConnection *)arg1 ;
-(EFSQLSchema *)schema;
-(BOOL)performMigrationStep;
-(id)initWithSQLiteConnection:(id)arg1 ;
-(id)messagesTableStubSchema;
-(id)mailboxesTableStubSchema;
-(id)serverMessagesTableSchema;
-(id)serverLabelsTableSchema;
-(id)localMessageActionsTableSchema;
-(id)actionMessagesTableSchema;
-(id)actionLabelsTableSchema;
-(id)actionFlagsTableSchema;
@end

