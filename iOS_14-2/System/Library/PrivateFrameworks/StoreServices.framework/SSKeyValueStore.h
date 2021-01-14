/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeAllValuesForDomain:(id)arg1 ;
-(id)init;
-(void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2 ;
-(void)removeAccountFromDomain:(id)arg1 ;
-(void)readUsingSessionBlock:(/*^block*/id)arg1 ;
-(void)removeAllValuesForDomain:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)copyAccounts;
-(void)removeAllValuesWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)iTunesValueForKey:(id)arg1 usedDomain:(id*)arg2 ;
-(void)getValuesForDomain:(id)arg1 keys:(const id*)arg2 count:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)isLocalReadable;
-(BOOL)isLocalWritable;
-(void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 ;
-(void)getValueForDomain:(id)arg1 key:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)accountDictionaries;
-(void)removeAccountDictionaries;
-(void)_loadDatabaseIfNecessary;
-(void)dealloc;
-(void)modifyUsingTransactionBlock:(/*^block*/id)arg1 ;
@end

