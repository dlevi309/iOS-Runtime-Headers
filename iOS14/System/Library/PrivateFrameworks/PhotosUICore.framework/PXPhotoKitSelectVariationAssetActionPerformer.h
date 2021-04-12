/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@class NSProgress;

@interface PXPhotoKitSelectVariationAssetActionPerformer : PXPhotoKitAssetActionPerformer {

	NSProgress* _progress;

}

@property (nonatomic,retain) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
+(id)editOperationType;
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3 ;
+(id)editOperationManager;
-(NSProgress *)progress;
-(void)cancelActionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)performBackgroundTask;
@end

