/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiCloudSyncEngine.framework/WiFiCloudSyncEngine
*/


@class NSUbiquitousKeyValueStore, NSThread;

@interface WiFiCloudSyncEngineCore : NSObject {

	NSUbiquitousKeyValueStore* keyValueStore;
	void* context;
	/*function pointer*/void* callback;
	NSThread* clientThread;
	BOOL iCloudSyncingEnabled;

}

@property (assign) NSUbiquitousKeyValueStore * keyValueStore; 
@property (assign) void* context; 
@property (assign) /*function pointer*/void* callback; 
@property (assign) NSThread * clientThread; 
@property (assign) BOOL iCloudSyncingEnabled; 
-(void)dealloc;
-(void*)context;
-(/*function pointer*/void*)callback;
-(void)setCallback:(/*function pointer*/void*)arg1 ;
-(void)setContext:(void*)arg1 ;
-(NSUbiquitousKeyValueStore *)keyValueStore;
-(void)setKeyValueStore:(NSUbiquitousKeyValueStore *)arg1 ;
-(void)setClientThread:(NSThread *)arg1 ;
-(NSThread *)clientThread;
-(void)setICloudSyncingEnabled:(BOOL)arg1 ;
-(void)unSubscribeKVStoreNotfications;
-(BOOL)iCloudSyncingEnabled;
-(void)synchronizeKVS;
-(void)relayReadStoreValueAction:(id)arg1 ;
-(id)readCompleteKVStore;
-(void)ubiquitousKeyValueStoreDidChange:(id)arg1 ;
-(void)relayCloudCleanUpEvent;
-(void)relayCloudEvent:(id)arg1 ;
-(void)subscribeKVStoreNotficationsForBundleId:(id)arg1 ;
-(void)dispatchUbiquitousKeyValueStoreDidChangeOnBackground:(id)arg1 ;
-(void)removeFromKVStore:(id)arg1 ;
-(void)relayPruneKVSStore:(id)arg1 ;
-(void)relayMergeNetworks:(id)arg1 ;
-(void)relayKeychainSyncState:(id)arg1 ;
-(void)initWithCallback:(/*function pointer*/void*)arg1 callbackContext:(void*)arg2 ;
-(void)addToKVStore:(id)arg1 ;
-(void)readStoreValueForKey:(id)arg1 ;
-(void)printCompleteKVStore;
-(void)clearKVS;
-(void)enableIcloudSyncing:(BOOL)arg1 ForBundleId:(id)arg2 ;
-(void)pruneKVSStore;
-(void)synchronizeAndCallMergeNetworks;
-(void)queryKeychainSyncState;
@end

