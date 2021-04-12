/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class EDPersistenceDatabaseConnection, NSString, EFSQLSchema;

@interface MFMailMessageLibraryAdoptSharedSchemaMigrationStep : NSObject {

	EDPersistenceDatabaseConnection* _connection;
	NSString* _protectedDatabaseName;

}

@property (nonatomic,retain) EDPersistenceDatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) NSString * protectedDatabaseName;                   //@synthesize protectedDatabaseName=_protectedDatabaseName - In the implementation block
@property (nonatomic,readonly) EFSQLSchema * schema; 
@property (nonatomic,readonly) EFSQLSchema * protectedSchema; 
+(void)cleanUpAfterMigrationWithConnection:(id)arg1 ;
-(EDPersistenceDatabaseConnection *)connection;
-(void)setConnection:(EDPersistenceDatabaseConnection *)arg1 ;
-(EFSQLSchema *)schema;
-(EFSQLSchema *)protectedSchema;
-(id)_messagesTableSchema;
-(id)_recipientsTableSchema;
-(id)_messageReferencesTableSchema;
-(id)_conversationsTableSchema;
-(id)_conversationIDMessageIDTableSchema;
-(id)_spotlightMessageReindexTableSchema;
-(id)_mailboxesTableSchema;
-(id)_propertiesTableSchema;
-(id)_messageDataTableSchema;
-(id)_messageDataDeletedTableSchema;
-(id)_popUIDsTableSchema;
-(id)_accountsTableSchema;
-(id)_spotlightTombstonesTableSchema;
-(id)_addressesTableSchema;
-(id)_subjectsTableSchema;
-(id)_summariesTableSchema;
-(id)_protectedMessageDataTableSchema;
-(BOOL)_initializeOldProtectedSchema;
-(BOOL)_transformSchema;
-(BOOL)_transformProtectedSchema;
-(BOOL)_createTemporaryTables;
-(BOOL)_migrateData;
-(BOOL)_dropTemporaryTables;
-(BOOL)_createIndexes;
-(BOOL)_cleanupOldSchema;
-(NSString *)protectedDatabaseName;
-(BOOL)_migrateNonMessages;
-(BOOL)_migrateSubjects;
-(BOOL)_migrateSummaries;
-(BOOL)_migrateSendersAndRecipients;
-(BOOL)_migrateMessages;
-(id)initWithSQLiteConnection:(id)arg1 protectedDatabaseName:(id)arg2 ;
-(BOOL)performMigrationStep;
@end

