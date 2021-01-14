/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(EFSQLSchema *)protectedSchema;
-(EFSQLSchema *)schema;
-(NSString *)protectedDatabaseName;
-(id)_messageReferencesTableSchema;
-(EDPersistenceDatabaseConnection *)connection;
-(void)setConnection:(EDPersistenceDatabaseConnection *)arg1 ;
-(id)_messagesTableSchema;
-(id)_recipientsTableSchema;
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
-(BOOL)_migrateData;
-(id)_addressesTableSchema;
-(id)_subjectsTableSchema;
-(id)_summariesTableSchema;
-(id)_protectedMessageDataTableSchema;
-(BOOL)_transformSchema;
-(BOOL)_initializeOldProtectedSchema;
-(BOOL)_transformProtectedSchema;
-(BOOL)_createTemporaryTables;
-(BOOL)_dropTemporaryTables;
-(BOOL)_createIndexes;
-(BOOL)_cleanupOldSchema;
-(BOOL)_migrateNonMessages;
-(BOOL)_migrateSubjects;
-(BOOL)_migrateSummaries;
-(BOOL)_migrateSendersAndRecipients;
-(BOOL)_migrateMessages;
-(BOOL)performMigrationStep;
-(id)initWithSQLiteConnection:(id)arg1 protectedDatabaseName:(id)arg2 ;
@end

