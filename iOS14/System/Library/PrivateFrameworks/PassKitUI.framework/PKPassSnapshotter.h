/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <PassKitUI/PassKitUI-Structs.h>
@class NSObject, PKPassLibrary, UIWindow, NSMutableArray;

@interface PKPassSnapshotter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	PKPassLibrary* _passLibrary;
	NSObject*<OS_dispatch_semaphore> _snapshotSem;
	UIWindow* _snapshotWindow;
	double _scale;
	NSMutableArray* _currentSnapshotKeys;

}

@property (assign,nonatomic) BOOL runsInBackgroundProcess; 
+(id)sharedInstance;
+(void)purgeCacheOfPassSnapshotsWithUinqueID:(id)arg1 ;
+(void)purgeCache;
-(id)init;
-(void)_snapshotWithPass:(id)arg1 size:(CGSize)arg2 suppressedContent:(unsigned long long)arg3 withCache:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)snapshotWithUniqueID:(id)arg1 size:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(void)snapshotWithUniqueID:(id)arg1 size:(CGSize)arg2 suppressedContent:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)passLibrary;
-(BOOL)_cachedImageWithKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_prepareSnapshotViewWithPass:(id)arg1 size:(CGSize)arg2 suppressedContent:(unsigned long long)arg3 cacheKey:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_performSnapshot:(id)arg1 size:(CGSize)arg2 cacheKey:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_cacheItem:(id)arg1 withKey:(id)arg2 ;
-(void)setRunsInBackgroundProcess:(BOOL)arg1 ;
-(BOOL)runsInBackgroundProcess;
-(void)snapshotWithPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)snapshotWithPass:(id)arg1 size:(CGSize)arg2 suppressedContent:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)snapshotWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)snapshotWithUniqueID:(id)arg1 manifestHash:(id)arg2 size:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(void)snapshotWithPass:(id)arg1 size:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

