/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class EDPersistenceDatabaseConnection, EFSQLSchema;

@interface MFMailMessageLibraryModifyColumnDefinitionsMigrationStep : NSObject {

	EDPersistenceDatabaseConnection* _connection;

}

@property (nonatomic,retain) EDPersistenceDatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) EFSQLSchema * schema; 
-(EFSQLSchema *)schema;
-(EDPersistenceDatabaseConnection *)connection;
-(void)setConnection:(EDPersistenceDatabaseConnection *)arg1 ;
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

