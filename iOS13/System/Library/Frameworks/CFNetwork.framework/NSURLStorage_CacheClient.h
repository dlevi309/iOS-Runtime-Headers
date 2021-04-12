/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLStorageCacheClient.h>

@class NSXPCInterface, NSXPCConnection, NSString, NSData;

@interface NSURLStorage_CacheClient : NSObject <NSURLStorageCacheClient> {

	NSXPCInterface* _netStoreInterface;
	NSXPCConnection* _networkStorageConnection;
	NSString* _path;
	weak_ptr<__CFURLCache>* _cfWeakCacheCpp;
	NSData* _sandboxExtensionToken;
	long long _storageSize;
	BOOL _networkStorageConnectionInterrupted;

}

@property (assign) BOOL networkStorageConnectionInterrupted;              //@synthesize networkStorageConnectionInterrupted=_networkStorageConnectionInterrupted - In the implementation block
-(void)dealloc;
-(void)_invalidateNSXPCConnection;
-(void)deleteResponseForRequestWithKey:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)copyAllPartitionNamesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)copyHostNamesForOptionalPartition:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)deleteAllHostNames:(id)arg1 forOptionalPartition:(id)arg2 ;
-(void)performSchemaCheckAndUpdate;
-(void)setMaxSize:(long long)arg1 ;
-(long long)currentDiskUsage;
-(void)deleteAllResponses;
-(void)addCachedResponseWithDictionary:(id)arg1 key:(id)arg2 ;
-(id)getPath;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deleteResponsesSinceDate:(id)arg1 ;
-(void)setMinSizeForVMCachedResource:(long long)arg1 ;
-(id)initWithCache:(shared_ptr<__CFURLCache>*)arg1 ;
-(BOOL)createStorageTaskManagerForPath:(id)arg1 maxSize:(long long)arg2 extension:(id)arg3 ;
-(void)notifyCachedURLResponseBecameFileBacked:(id)arg1 filePath:(id)arg2 forUUID:(id)arg3 ;
-(void)notifyCacheClientOfTimeRelativeResponses:(id)arg1 ;
-(void)_reconnectWithStorageServer;
-(BOOL)ensureNetworkStorageDaemonConnection;
-(BOOL)networkStorageConnectionInterrupted;
-(void)setNetworkStorageConnectionInterrupted:(BOOL)arg1 ;
@end

