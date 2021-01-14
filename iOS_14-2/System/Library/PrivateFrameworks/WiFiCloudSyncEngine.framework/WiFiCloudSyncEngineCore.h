/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiCloudSyncEngine.framework/WiFiCloudSyncEngine
*/


@protocol OS_dispatch_queue;
@class NSUbiquitousKeyValueStore, NSThread, NSObject;

@interface WiFiCloudSyncEngineCore : NSObject {

	NSUbiquitousKeyValueStore* keyValueStore;
	void* context;
	/*function pointer*/void* callback;
	NSThread* clientThread;
	NSObject*<OS_dispatch_queue> clientQueue;
	BOOL iCloudSyncingEnabled;
	BOOL isKVSEncrypted;

}

@property (assign) NSUbiquitousKeyValueStore * keyValueStore; 
@property (assign) void* context; 
@property (assign) /*function pointer*/void* callback; 
@property (assign) NSThread * clientThread; 
@property (assign) NSObject*<OS_dispatch_queue> clientQueue; 
@property (assign) BOOL iCloudSyncingEnabled; 
@property (assign) BOOL isKVSEncrypted; 
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(/*function pointer*/void*)callback;
-(void)setICloudSyncingEnabled:(BOOL)arg1 ;
-(void)setKeyValueStore:(NSUbiquitousKeyValueStore *)arg1 ;
-(void)setCallback:(/*function pointer*/void*)arg1 ;
-(BOOL)iCloudSyncingEnabled;
-(void)readStoreValueForKey:(id)arg1 ;
-(id)initWithEncryptedKVS:(BOOL)arg1 ;
-(void)relayKeychainSyncState:(id)arg1 ;
-(void)clearKVS;
-(void)relayPruneKVSStore:(id)arg1 ;
-(void)enableIcloudSyncing:(BOOL)arg1 ForBundleId:(id)arg2 ;
-(void)registerCallback:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)setClientThread:(NSThread *)arg1 ;
-(void)setIsKVSEncrypted:(BOOL)arg1 ;
-(void*)context;
-(void)removeFromKVStore:(id)arg1 ;
-(NSThread *)clientThread;
-(void)relayMergeNetworks:(id)arg1 ;
-(id)readCompleteKVStore;
-(void)relayReadStoreValueAction:(id)arg1 ;
-(void)printCompleteKVStore;
-(void)synchronizeKVS;
-(void)relayCloudEvent:(id)arg1 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dispatchUbiquitousKeyValueStoreDidChangeOnBackground:(id)arg1 ;
-(void)registerCallback:(/*function pointer*/void*)arg1 queue:(id)arg2 context:(void*)arg3 ;
-(void)pruneKVSStore;
-(BOOL)isKVSEncrypted;
-(NSUbiquitousKeyValueStore *)keyValueStore;
-(void)addToKVStore:(id)arg1 ;
-(void)unSubscribeKVStoreNotfications;
-(void)synchronizeAndCallMergeNetworks;
-(void)subscribeKVStoreNotficationsForBundleId:(id)arg1 ;
-(void)ubiquitousKeyValueStoreDidChange:(id)arg1 ;
-(void)relayCloudCleanUpEvent;
-(void)dealloc;
-(void)setContext:(void*)arg1 ;
-(void)queryKeychainSyncState;
@end

