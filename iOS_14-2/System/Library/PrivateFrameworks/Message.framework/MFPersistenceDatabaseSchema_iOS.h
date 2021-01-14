/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailDaemon/EDPersistenceDatabaseSchema.h>
#import <libobjc.A.dylib/EDPersistenceDatabaseSchemaProvider.h>

@interface MFPersistenceDatabaseSchema_iOS : EDPersistenceDatabaseSchema <EDPersistenceDatabaseSchemaProvider>
+(id)messageDataDeletedTableSchema;
+(id)messageDataTableSchema;
+(id)popUIDsTableSchema;
+(id)additionalSchemaProviders;
+(id)mailboxesTableSchema;
+(id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2 ;
+(id)accountsTableSchema;
+(id)_messagesTableSchemaAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2 ;
@end

