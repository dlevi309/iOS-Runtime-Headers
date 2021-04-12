/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSXPCConnection, SSKeyValueStoreDatabase;

@interface SSKeyValueStore : NSObject {

	SSXPCConnection* _connection;
	SSKeyValueStoreDatabase* _database;
	BOOL _useLocalRead;
	BOOL _useLocalWrite;

}

@property (getter=isLocalReadable,readonly) BOOL localReadable; 
@property (getter=isLocalWritable,readonly) BOOL localWritable; 
+(BOOL)isLocalReadable;
-(id)init;
-(void)dealloc;
-(void)getValueForDomain:(id)arg1 key:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)accountDictionaries;
-(id)iTunesValueForKey:(id)arg1 usedDomain:(id*)arg2 ;
-(void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)removeAccountFromDomain:(id)arg1 ;
-(void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 ;
-(void)getValuesForDomain:(id)arg1 keys:(const id*)arg2 count:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)isLocalReadable;
-(void)_loadDatabaseIfNecessary;
-(void)readUsingSessionBlock:(/*^block*/id)arg1 ;
-(void)removeAllValuesForDomain:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)modifyUsingTransactionBlock:(/*^block*/id)arg1 ;
-(void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)removeAllValuesForDomain:(id)arg1 ;
-(void)removeAllValuesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2 ;
-(void)removeAccountDictionaries;
-(id)copyAccounts;
-(BOOL)isLocalWritable;
@end

