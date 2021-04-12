/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformer.h>

@interface PXPhotoKitAssetCollectionShowMapActionPerformer : PXPhotoKitAssetCollectionActionPerformer
+(id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)_effectiveAssetsFetchResultWithAssetsFetchResult:(id)arg1 assetCollectionReference:(id)arg2 dataSource:(id)arg3 ;
+(BOOL)canPerformActionType:(id)arg1 onAssetCollectionReference:(id)arg2 withInputs:(id)arg3 ;
+(id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3 ;
-(id)activityType;
-(void)performUserInteractionTask;
-(id)localizedTitleForUseCase:(unsigned long long)arg1 ;
-(id)activitySystemImageName;
-(BOOL)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2 ;
@end

