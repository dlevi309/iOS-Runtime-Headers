/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <BusinessChatService/BCSPersistentStore.h>
#import <libobjc.A.dylib/BCSShardCacheQueryable.h>

@class NSString;

@interface BCSShardItemPersistentStore : BCSPersistentStore <BCSShardCacheQueryable> {

	long long _schemaVersion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const char*)debugQueueName;
-(long long)schemaVersion;
-(id)databasePath;
-(const char*)schema;
-(id)init;
-(id)_databasePath;
-(void)deleteShardItemsOfType:(long long)arg1 ;
-(void)updateShardItem:(id)arg1 withShardIdentifier:(id)arg2 ;
-(long long)countOfShardsOfType:(long long)arg1 ;
-(long long)countOfExpiredShardsOfType:(long long)arg1 ;
-(id)initWithSchemaVersion:(long long)arg1 ;
-(void)schemaVersionWillChangeForDatabase:(sqlite3Ref)arg1 fromSchemaVersion:(long long)arg2 toSchemaVersion:(long long)arg3 ;
-(void)deleteShardItemMatching:(id)arg1 ;
-(BOOL)_updateShardItem:(id)arg1 withShardIdentifier:(id)arg2 ;
-(id)_executeFetchPersistentShardItemObjectSQLQuery:(const char*)arg1 ;
-(id)_extractShardItemFromStatement:(sqlite3_stmtRef)arg1 ;
-(BOOL)_executeDeleteBusinessItemSQLQuery:(const char*)arg1 ;
-(long long)_executeCountSQLQuery:(const char*)arg1 ;
-(id)shardItemMatching:(id)arg1 ;
-(void)deleteExpiredShardItemsOfType:(long long)arg1 ;
@end

