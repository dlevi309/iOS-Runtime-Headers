/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailDaemon/EDPersistenceDatabaseSchema.h>
#import <libobjc.A.dylib/EDPersistenceDatabaseSchemaProvider.h>

@interface MFPersistenceDatabaseSchema_iOS : EDPersistenceDatabaseSchema <EDPersistenceDatabaseSchemaProvider>
+(id)_messagesTableSchemaAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2 ;
+(id)mailboxesTableSchema;
+(id)messageDataTableSchema;
+(id)messageDataDeletedTableSchema;
+(id)popUIDsTableSchema;
+(id)accountsTableSchema;
+(id)additionalSchemaProviders;
+(id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2 ;
@end

