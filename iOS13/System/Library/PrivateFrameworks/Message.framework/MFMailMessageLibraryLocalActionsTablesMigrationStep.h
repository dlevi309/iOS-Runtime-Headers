/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class EDPersistenceDatabaseConnection;

@interface MFMailMessageLibraryLocalActionsTablesMigrationStep : NSObject {

	EDPersistenceDatabaseConnection* _connection;

}

@property (nonatomic,retain) EDPersistenceDatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)log;
-(EDPersistenceDatabaseConnection *)connection;
-(void)setConnection:(EDPersistenceDatabaseConnection *)arg1 ;
-(BOOL)performMigrationStep;
-(id)_serverMessagesTableDefinition;
-(id)_serverMessagesMessageIndexDefinition;
-(id)_serverLabelsTableDefinition;
-(id)_localMessageActionsTableDefinition;
-(id)_localMessageActionsMailboxRowIDIndexDefinition;
-(id)_actionMessagesTableDefinition;
-(id)_actionMessagesActionIndexDefinition;
-(id)_actionMessagesMessageIndexDefinition;
-(id)_actionMessagesDestinationMessageIndexDefinition;
-(id)_actionLabelsTableDefinition;
-(id)_actionLabelsActionIndexDefinition;
-(id)_actionLabelsLabelIndexDefinition;
-(id)_actionFlagsTableDefinition;
-(id)_actionFlagsActionIndexDefinition;
-(BOOL)_populateServerMessages;
-(id)_offlineCacheOperations;
-(id)initWithSQLiteConnection:(id)arg1 ;
@end

