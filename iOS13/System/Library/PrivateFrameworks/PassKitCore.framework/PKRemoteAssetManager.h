/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject, NSMutableDictionary, NSMutableArray, NSArray;

@interface PKRemoteAssetManager : NSObject {

	NSURL* _directoryURL;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _manifestItemsByRelativeURL;
	NSMutableDictionary* _sha1HexFromRelativeManifest;
	NSMutableArray* _completionHandlers;
	NSArray* _seids;

}

@property (nonatomic,copy) NSArray * seids;              //@synthesize seids=_seids - In the implementation block
-(void)downloadRemoteAssetsWithCompletion:(/*^block*/id)arg1 ;
-(id)remoteAssetManifests;
-(BOOL)assetExistsLocally:(id)arg1 ;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithFileURL:(id)arg1 queue:(id)arg2 ;
-(void)setSeids:(NSArray *)arg1 ;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)itemWithRelativePath:(id)arg1 ;
-(id)sha1HexFromRelativeManifestWithRelativePath:(id)arg1 ;
-(id)deviceSpecificItemsForScreenScale:(double)arg1 suffix:(id)arg2 ;
-(id)pendingRemoteAssetsItemsForScreenScale:(double)arg1 suffix:(id)arg2 ;
-(void)_downloadRemoteAssetItem:(id)arg1 withCloudStoreCoordinatorDelegate:(id)arg2 shouldWriteData:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_callCompletionHandlersWithFinishState:(BOOL)arg1 progress:(float)arg2 error:(id)arg3 ;
-(BOOL)addRemoteAssetData:(id)arg1 shouldWriteData:(BOOL)arg2 forManifestItem:(id)arg3 error:(id*)arg4 ;
-(BOOL)addRemoteAssetData:(id)arg1 forManifestItem:(id)arg2 error:(id*)arg3 ;
-(void)_flushBundleCaches;
-(id)deviceSpecificItems;
-(id)pendingRemoteAssetsItems;
-(void)downloadRemoteAssetItem:(id)arg1 withCloudStoreCoordinatorDelegate:(id)arg2 shouldWriteData:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(NSArray *)seids;
@end

