/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_semaphore;
#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class CKDMMCS, NSString, NSObject, NSRunLoop, NSMutableIndexSet;

@interface CKDMMCSEngineContext : NSObject {

	BOOL _stopMMCSThread;
	unsigned _maxChunkCountForSection;
	long long _refCount;
	long long _state;
	CKDMMCS* _MMCS;
	mmcs_engineRef _MMCSEngine;
	NSString* _applicationBundleID;
	NSString* _path;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSRunLoop* _runLoop;
	NSString* _runLoopMode;
	NSMutableIndexSet* _inMemoryItemsIDs;

}

@property (assign,nonatomic) long long refCount;                                      //@synthesize refCount=_refCount - In the implementation block
@property (assign,nonatomic) long long state;                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL stopMMCSThread;                                     //@synthesize stopMMCSThread=_stopMMCSThread - In the implementation block
@property (assign,nonatomic,__weak) CKDMMCS * MMCS;                                   //@synthesize MMCS=_MMCS - In the implementation block
@property (assign,nonatomic) mmcs_engineRef MMCSEngine;                               //@synthesize MMCSEngine=_MMCSEngine - In the implementation block
@property (nonatomic,retain) NSString * applicationBundleID;                          //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,retain) NSString * path;                                         //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,retain) NSRunLoop * runLoop;                                     //@synthesize runLoop=_runLoop - In the implementation block
@property (nonatomic,retain) NSString * runLoopMode;                                  //@synthesize runLoopMode=_runLoopMode - In the implementation block
@property (assign,nonatomic) unsigned maxChunkCountForSection;                        //@synthesize maxChunkCountForSection=_maxChunkCountForSection - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * inMemoryItemsIDs;                    //@synthesize inMemoryItemsIDs=_inMemoryItemsIDs - In the implementation block
+(id)_appID;
+(id)sharedContextsQueue;
+(BOOL)tearDownMMCSEngineWithContext:(id)arg1 ;
+(BOOL)hasCachedCKDMMCSEngineContextForPath:(id)arg1 ;
+(id)setupMMCSEngineWithApplicationBundleID:(id)arg1 path:(id)arg2 wasCached:(BOOL*)arg3 error:(id*)arg4 ;
+(id)sharedContextsByPath;
-(CKDMMCS *)MMCS;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(long long)refCount;
-(id)CKPropertiesDescription;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(void)setMMCS:(CKDMMCS *)arg1 ;
-(id)description;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(NSString *)applicationBundleID;
-(void)setRunLoop:(NSRunLoop *)arg1 ;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(NSRunLoop *)runLoop;
-(void)dealloc;
-(void)setRefCount:(long long)arg1 ;
-(void)setRunLoopMode:(NSString *)arg1 ;
-(NSString *)runLoopMode;
-(mmcs_engineRef)MMCSEngine;
-(unsigned)maxChunkCountForSection;
-(void)performOnRunLoop:(/*^block*/id)arg1 ;
-(void)setStopMMCSThread:(BOOL)arg1 ;
-(void)_MMCSTreadAbort;
-(BOOL)stopMMCSThread;
-(void)_MMCSThread;
-(void)setMMCSEngine:(mmcs_engineRef)arg1 ;
-(void)setMaxChunkCountForSection:(unsigned)arg1 ;
-(BOOL)_setupMMCSEngineWithError:(id*)arg1 ;
-(long long)incRefCount;
-(id)initWithApplicationBundleID:(id)arg1 path:(id)arg2 ;
-(BOOL)_setupMMCSEngineWithRetryCount:(unsigned long long)arg1 error:(id*)arg2 ;
-(long long)decRefCount;
-(void)_tearDownMMCSEngine;
-(void)cancelRequestWithContext:(void*)arg1 ;
-(unsigned long long)nextAvailableItemID;
-(void)stopTrackingItemID:(unsigned long long)arg1 ;
-(NSMutableIndexSet *)inMemoryItemsIDs;
-(void)setInMemoryItemsIDs:(NSMutableIndexSet *)arg1 ;
@end

