/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


#import <BusinessChatService/BusinessChatService-Structs.h>
@interface BCSPersistentStore : NSObject
-(const char*)schema;
-(sqlite3Ref)database;
-(long long)schemaVersion;
-(id)databasePath;
-(id)cachesPath;
-(BOOL)_setDatabaseSchemaVersion:(long long)arg1 forDatabase:(sqlite3Ref)arg2 ;
-(sqlite3Ref)_createDatabaseFileAtPath:(id)arg1 ;
-(BOOL)_generateTableWithDatabase:(sqlite3Ref)arg1 ;
-(long long)_databaseSchemaVersionForDatabase:(sqlite3Ref)arg1 ;
-(BOOL)deleteDatabaseFile;
-(void)closeDatabase:(sqlite3Ref)arg1 ;
@end

