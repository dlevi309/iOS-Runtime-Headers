/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue;
#import <PassKitCore/PassKitCore-Structs.h>
@class PKDirectoryCoordinator, NSObject, NSMutableDictionary, NSMutableArray, NSArray;

@interface PKRemoteAssetManager : NSObject {

	PKDirectoryCoordinator* _coordinator;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _manifestItemsByRelativeURL;
	NSMutableDictionary* _sha1HexFromRelativeManifest;
	os_unfair_lock_s _lock;
	NSMutableArray* _completionHandlers;
	NSArray* _seids;

}

@property (nonatomic,copy) NSArray * seids;              //@synthesize seids=_seids - In the implementation block
-(NSArray *)seids;
-(id)init;
-(id)itemWithRelativePath:(id)arg1 ;
-(BOOL)hasEncryptedDeviceSpecificItemWithRelativePath:(id)arg1 ;
-(id)sha1HexFromRelativeManifestWithRelativePath:(id)arg1 ;
-(id)deviceSpecificItemsForScreenScale:(double)arg1 suffix:(id)arg2 ;
-(id)pendingRemoteAssetsItemsForScreenScale:(double)arg1 suffix:(id)arg2 ;
-(id)pendingRemoteAssetsItems;
-(void)_callCompletionHandlersWithFinishState:(BOOL)arg1 progress:(float)arg2 error:(id)arg3 ;
-(void)_flushBundleCaches;
-(void)_downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)deviceSpecificItems;
-(void)_downloadRemoteAssetItem:(id)arg1 withCloudStoreCoordinatorDelegate:(id)arg2 shouldWriteData:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)addRemoteAssetData:(id)arg1 shouldWriteData:(BOOL)arg2 forManifestItem:(id)arg3 error:(id*)arg4 ;
-(BOOL)addRemoteAssetData:(id)arg1 forManifestItem:(id)arg2 error:(id*)arg3 ;
-(void)downloadRemoteAssetItem:(id)arg1 withCloudStoreCoordinatorDelegate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithFileURL:(id)arg1 ;
-(void)setSeids:(NSArray *)arg1 ;
-(void)downloadRemoteAssetsWithCompletion:(/*^block*/id)arg1 ;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)remoteAssetManifests;
-(BOOL)assetExistsLocally:(id)arg1 ;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithDirectoryCoordinator:(id)arg1 ;
@end

