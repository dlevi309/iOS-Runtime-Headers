/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXPhotoKitUIMediaProvider, PXAssetsDataSourceManager, PXPhotosDataSource, PXAssetReference;

@interface PXSearchResultsOneUpViewModel : NSObject {

	PXPhotoKitUIMediaProvider* _mediaProvider;
	PXAssetsDataSourceManager* _dataSourceManager;
	PXPhotosDataSource* _dataSource;
	PXAssetReference* _initialAssetReference;

}

@property (nonatomic,retain) PXPhotoKitUIMediaProvider * mediaProvider;                  //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,retain) PXAssetsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) PXPhotosDataSource * dataSource;                            //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) PXAssetReference * initialAssetReference;                   //@synthesize initialAssetReference=_initialAssetReference - In the implementation block
-(void)setMediaProvider:(PXPhotoKitUIMediaProvider *)arg1 ;
-(PXPhotoKitUIMediaProvider *)mediaProvider;
-(void)setInitialAssetReference:(PXAssetReference *)arg1 ;
-(void)setDataSourceManager:(PXAssetsDataSourceManager *)arg1 ;
-(PXPhotosDataSource *)dataSource;
-(PXAssetReference *)initialAssetReference;
-(void)setDataSource:(PXPhotosDataSource *)arg1 ;
-(PXAssetsDataSourceManager *)dataSourceManager;
-(id)initWithOneUpWithAsset:(id)arg1 atIndex:(unsigned long long)arg2 inAssetCollection:(id)arg3 ;
-(void)updateDataSourceWithFetchResult:(id)arg1 ;
@end

