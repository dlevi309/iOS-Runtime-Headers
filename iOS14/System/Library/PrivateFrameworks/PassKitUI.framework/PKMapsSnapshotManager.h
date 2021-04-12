/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol OS_dispatch_queue;
#import <PassKitUI/PassKitUI-Structs.h>
@class NSURL, NSFileManager, NSMutableArray, NSMutableDictionary, NSObject;

@interface PKMapsSnapshotManager : NSObject {

	NSURL* _cacheURL;
	NSFileManager* _fileManager;
	NSMutableArray* _snapshotsKeysToPerform;
	NSMutableDictionary* _snapshotOptionsByKey;
	NSMutableDictionary* _completionBlockByKey;
	NSMutableArray* _snapshotCacheKeys;
	NSMutableDictionary* _snapshotCache;
	BOOL _isSnapshotting;
	os_unfair_lock_s _cacheLock;
	os_unfair_lock_s _fileLock;
	NSObject*<OS_dispatch_queue> _snapshotQueue;

}
-(id)init;
-(id)snapshotForDisplayRegion:(SCD_Struct_PK20)arg1 size:(CGSize)arg2 traitCollection:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_iconForCacheKey:(id)arg1 ;
-(id)_iconFromDiskForCacheKey:(id)arg1 ;
-(void)_processNextRequest;
@end

