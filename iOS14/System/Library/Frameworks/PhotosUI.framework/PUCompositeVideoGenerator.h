/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUICore/PXObservable.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, PUMergedLivePhotosVideo, AVAssetExportSession, NSError, NSArray;

@interface PUCompositeVideoGenerator : PXObservable {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _stateQueue;
	long long _stateQueue_state;
	PUMergedLivePhotosVideo* _stateQueue_playbackVideo;
	AVAssetExportSession* _stateQueue_exportSession;
	NSError* _stateQueue_error;
	NSObject*<OS_dispatch_group> _videoAssetsByAssetGroup;
	BOOL _onlyAllowOverlappingAssets;
	NSArray* _assets;
	long long _outputType;

}

@property (nonatomic,copy,readonly) NSArray * assets;                                //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) long long outputType;                                 //@synthesize outputType=_outputType - In the implementation block
@property (nonatomic,readonly) BOOL onlyAllowOverlappingAssets;                      //@synthesize onlyAllowOverlappingAssets=_onlyAllowOverlappingAssets - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) PUMergedLivePhotosVideo * playbackVideo; 
@property (nonatomic,readonly) AVAssetExportSession * exportSession; 
+(SCD_Struct_PH5)conformRange:(SCD_Struct_PH5)arg1 inRange:(SCD_Struct_PH5)arg2 ;
+(SCD_Struct_PH4)_overlapDurationBetweenAsset:(id)arg1 andAsset:(id)arg2 ;
+(BOOL)canMergeAsset:(id)arg1 withConsecutiveAsset:(id)arg2 ;
-(NSArray *)assets;
-(void)start;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(AVAssetExportSession *)exportSession;
-(void)setPlaybackVideo:(PUMergedLivePhotosVideo *)arg1 ;
-(void)setExportSession:(AVAssetExportSession *)arg1 ;
-(void)_workQueue_generateVideoWithSingleAssetPlayerItem:(id)arg1 ;
-(void)_workQueue_generateVideoWithSingleAssetExportSession:(id)arg1 ;
-(void)_workQueue_generateVideoWithAVAssets:(id)arg1 ;
-(void)_workQueue_finishWithError:(id)arg1 ;
-(void)_workQueue_finishWithPlaybackVideo:(id)arg1 error:(id)arg2 ;
-(void)_workQueue_finishWithExportSession:(id)arg1 error:(id)arg2 ;
-(BOOL)onlyAllowOverlappingAssets;
-(void)_workQueue_start;
-(PUMergedLivePhotosVideo *)playbackVideo;
-(id)initWithAssets:(id)arg1 outputType:(long long)arg2 onlyAllowOverlappingAssets:(BOOL)arg3 ;
-(void)setState:(long long)arg1 ;
-(long long)outputType;
-(long long)state;
-(id)mutableChangeObject;
@end

