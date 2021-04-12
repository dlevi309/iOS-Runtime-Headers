/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <BusinessChatService/BCSPersistentStore.h>

@interface BCSBusinessItemPersistentStore : BCSPersistentStore
-(const char*)schema;
-(long long)schemaVersion;
-(id)databasePath;
-(id)_databasePath;
-(BOOL)deleteBusinessItem:(id)arg1 fromDatabase:(sqlite3Ref)arg2 ;
-(BOOL)_insertOrReplaceBusinessItem:(id)arg1 withTTL:(double)arg2 fromDatabase:(sqlite3Ref)arg3 ;
-(BOOL)_insertBusinessItem:(id)arg1 withTTL:(double)arg2 inDatabase:(sqlite3Ref)arg3 ;
-(BOOL)_updateToLastRetrievedDate:(id)arg1 forBusinessItem:(id)arg2 inDatabase:(sqlite3Ref)arg3 ;
-(id)_executeFetchPersistentBusinessItemObjectSQLQuery:(const char*)arg1 forDatabase:(sqlite3Ref)arg2 ;
-(BOOL)deleteBusinessItemWithBizID:(id)arg1 fromDatabase:(sqlite3Ref)arg2 ;
-(BOOL)deleteBusinessItemWithPhoneNumber:(id)arg1 fromDatabase:(sqlite3Ref)arg2 ;
-(BOOL)_executeDeleteBusinessItemSQLQuery:(const char*)arg1 forDatabase:(sqlite3Ref)arg2 ;
-(BOOL)insertOrReplaceBusinessItem:(id)arg1 withTTL:(double)arg2 fromDatabase:(sqlite3Ref)arg3 ;
-(BOOL)updateTTL:(double)arg1 forBusinessItem:(id)arg2 inDatabase:(sqlite3Ref)arg3 ;
-(BOOL)updateLastRetrievedDateForBusinessItem:(id)arg1 inDatabase:(sqlite3Ref)arg2 ;
-(id)fetchPersistentBusinessItemObjectWithBizID:(id)arg1 fromDatabase:(sqlite3Ref)arg2 ;
-(id)fetchPersistentBusinessItemObjectWithPhoneNumber:(id)arg1 fromDatabase:(sqlite3Ref)arg2 ;
@end

