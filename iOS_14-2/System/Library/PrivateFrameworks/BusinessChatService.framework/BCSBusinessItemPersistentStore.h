/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BCSPersistentStore.h>

@interface BCSBusinessItemPersistentStore : BCSPersistentStore
+(const char*)debugQueueName;
-(long long)schemaVersion;
-(id)databasePath;
-(const char*)schema;
-(id)_databasePath;
-(BOOL)_executeDeleteBusinessItemSQLQuery:(const char*)arg1 ;
-(BOOL)_insertOrReplaceBusinessItem:(id)arg1 withTTL:(double)arg2 ;
-(BOOL)deleteBusinessItem:(id)arg1 ;
-(BOOL)_insertBusinessItem:(id)arg1 withTTL:(double)arg2 ;
-(BOOL)_updateToLastRetrievedDate:(id)arg1 forBusinessItem:(id)arg2 ;
-(id)_executeFetchPersistentBusinessItemObjectSQLQuery:(const char*)arg1 ;
-(BOOL)deleteBusinessItemWithBizID:(id)arg1 ;
-(BOOL)deleteBusinessItemWithPhoneNumber:(id)arg1 ;
-(BOOL)insertOrReplaceBusinessItem:(id)arg1 withTTL:(double)arg2 ;
-(BOOL)updateTTL:(double)arg1 forBusinessItem:(id)arg2 ;
-(BOOL)updateLastRetrievedDateForBusinessItem:(id)arg1 ;
-(id)fetchPersistentBusinessItemObjectWithBizID:(id)arg1 ;
-(id)fetchPersistentBusinessItemObjectWithPhoneNumber:(id)arg1 ;
@end

