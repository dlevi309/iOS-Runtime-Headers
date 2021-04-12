/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformer.h>
#import <libobjc.A.dylib/PXPhotoKitAssetCollectionActionPerformerInput.h>

@class PHFetchResult, PXAssetReference, PXAssetsDataSource, NSString;

@interface PXPhotoKitAssetCollectionAddPersonToHomeActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXPhotoKitAssetCollectionActionPerformerInput>

@property (nonatomic,readonly) PHFetchResult * people; 
@property (nonatomic,readonly) PXAssetReference * dropTargetAssetReference; 
@property (nonatomic,readonly) PXAssetsDataSource * assetsDataSource; 
@property (nonatomic,readonly) PHFetchResult * assetsFetchResult; 
@property (nonatomic,readonly) id<UIDropSession> dropSession; 
@property (nonatomic,readonly) id<UIDragSession> dragSession; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3 ;
-(void)performUserInteractionTask;
@end

