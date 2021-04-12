/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EDPersistenceDatabaseSchemaProvider.h>

@interface EDTableMetadataPersistence : NSObject <EDPersistenceDatabaseSchemaProvider>
+(BOOL)updateLargestDeletedRowID:(long long)arg1 forTableName:(id)arg2 withConnection:(id)arg3 ;
+(id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2 ;
+(long long)largestDeletedRowIDForTableName:(id)arg1 withConnection:(id)arg2 ;
@end

