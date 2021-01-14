/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class PHFetchResult, PXAssetReference, PXAssetsDataSource;


@protocol PXPhotoKitAssetCollectionActionPerformerInput <NSObject>
@property (nonatomic,readonly) PHFetchResult * people; 
@property (nonatomic,readonly) PXAssetReference * dropTargetAssetReference; 
@property (nonatomic,readonly) PXAssetsDataSource * assetsDataSource; 
@property (nonatomic,readonly) PHFetchResult * assetsFetchResult; 
@property (nonatomic,readonly) id<UIDropSession> dropSession; 
@property (nonatomic,readonly) id<UIDragSession> dragSession; 
@optional
-(PXAssetReference *)dropTargetAssetReference;
-(id<UIDropSession>)dropSession;
-(PHFetchResult *)assetsFetchResult;
-(PHFetchResult *)people;
-(PXAssetsDataSource *)assetsDataSource;
-(id<UIDragSession>)dragSession;

@end

