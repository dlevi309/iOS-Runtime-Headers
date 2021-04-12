/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformer.h>

@interface PXPhotoKitAssetCollectionShowDetailsActionPerformer : PXPhotoKitAssetCollectionActionPerformer
+(BOOL)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(long long)_originForAssetCollection:(id)arg1 ;
+(id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3 ;
-(void)performUserInteractionTask;
-(id)_localizedTitleForAssetCollection:(id)arg1 titleCategory:(long long*)arg2 ;
-(id)_displayTitleInfoForDetailsOfAssetCollection:(id)arg1 withTitleCategory:(long long)arg2 preferredAttributesPromise:(/*^block*/id)arg3 ;
@end

