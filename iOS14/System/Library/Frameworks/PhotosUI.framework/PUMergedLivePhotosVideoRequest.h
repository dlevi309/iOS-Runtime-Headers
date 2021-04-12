/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, PUCompositeVideoGenerator, PUMergedLivePhotosVideo, NSError, PUAssetReference, PUAssetsDataSource, NSString;

@interface PUMergedLivePhotosVideoRequest : PXObservable <PXChangeObserver> {

	unsigned long long _requestLogID;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _stateQueue;
	PUCompositeVideoGenerator* _workQueue_generator;
	long long _stateQueue_state;
	PUMergedLivePhotosVideo* _stateQueue_mergedVideo;
	NSError* _stateQueue_error;
	PUAssetReference* _assetReference;
	PUAssetsDataSource* _assetsDataSource;

}

@property (nonatomic,readonly) PUAssetReference * assetReference;                  //@synthesize assetReference=_assetReference - In the implementation block
@property (nonatomic,readonly) PUAssetsDataSource * assetsDataSource;              //@synthesize assetsDataSource=_assetsDataSource - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) PUMergedLivePhotosVideo * mergedVideo; 
@property (nonatomic,readonly) NSError * error; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)start;
-(NSError *)error;
-(PUMergedLivePhotosVideo *)mergedVideo;
-(id)initWithAssetReference:(id)arg1 dataSource:(id)arg2 ;
-(void)_workQueue_start;
-(id)_workQueue_fetchMergeableAssets;
-(void)_workQueue_generateVideoUsingAssets:(id)arg1 ;
-(void)_workQueue_handleGeneratorDidChangeState;
-(void)_workQueue_finishWithMergedVideo:(id)arg1 error:(id)arg2 ;
-(void)_stateQueue_signalStateChange;
-(long long)state;
-(id)mutableChangeObject;
-(PUAssetReference *)assetReference;
-(PUAssetsDataSource *)assetsDataSource;
-(void)cancel;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

