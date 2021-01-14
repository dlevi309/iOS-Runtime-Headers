/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EDPersistenceDatabaseSchemaProvider.h>

@interface EDTableMetadataPersistence : NSObject <EDPersistenceDatabaseSchemaProvider>
+(BOOL)updateLargestDeletedRowID:(long long)arg1 forTableName:(id)arg2 withConnection:(id)arg3 ;
+(id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2 ;
+(long long)largestDeletedRowIDForTableName:(id)arg1 withConnection:(id)arg2 ;
@end

