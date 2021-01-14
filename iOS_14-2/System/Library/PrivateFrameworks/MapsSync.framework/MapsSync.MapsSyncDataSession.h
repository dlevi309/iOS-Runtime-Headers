/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/


@class NSString;

@interface MapsSync.MapsSyncDataSession : NSObject {

	 _dataContainer;
	 _containerQueue;
	 _storeLoadInterval;
	 _readContext;
	 _backgroundReadContext;
	 _writeContext;
	 _localOnly;
	 _loadSemaphore;
	 _hasLoadedStores;
	 _pendingReadContextFetches;
	 _pendingBackgroundReadContextFetches;
	 _pendingWriteContextFetches;
	 _contextFetchLock;

}

@property (readonly,nonatomic) NSString * typeString; 
+(void)resumeNotifications;
+(void)enableNotifications;
+(BOOL)isInMemoryOnly;
+(void)startXPCServer;
+(void)disableNotifications;
+(BOOL)useInMemoryOnly;
+(BOOL)shouldRetryStoreLoadAfterErrorWithError:(id)arg1 ;
+(void)setUseInMemoryOnly:(BOOL)arg1 ;
+(id)defaultLocalOnlySession;
+(id)defaultSession;
+(void)resetWithCompletion:(/*^block*/id)arg1 ;
+(void)reset;
+(BOOL)shouldMoveStoreAsideWithError:(id)arg1 ;
+(void)suppressNotifications;
-(NSString *)typeString;
-(id)init;
-(id)initWithPersisted:(BOOL)arg1 deviceLocal:(BOOL)arg2 ;
-(void)resetInMemoryStoreWithCompletion:(/*^block*/id)arg1 ;
-(id)unsafeGetReadContextAndReturnError:(id*)arg1 ;
-(void)remoteChangeWithNotification:(id)arg1 ;
-(id)unsafeGetBackgroundReadContextAndReturnError:(id*)arg1 ;
-(void)getWriteContextWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAll;
-(void)contextDidSaveWithNotification:(id)arg1 ;
-(void)resetInMemoryStore;
-(id)unsafeGetWriteContextAndReturnError:(id*)arg1 ;
-(void)whenReadyWithCompletion:(/*^block*/id)arg1 ;
-(void)checkStoreLoadedWithCompletion:(/*^block*/id)arg1 ;
-(void)getBackgroundReadContextWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasLoadedStore;
-(void)loadStoresWithCompletion:(/*^block*/id)arg1 ;
-(void)getReadContextWithCompletion:(/*^block*/id)arg1 ;
@end

