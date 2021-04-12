/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUAssetActionManager.h>

@class PUPhotoKitDataSourceManager;

@interface PUPhotoKitAssetActionManager : PUAssetActionManager {

	BOOL _enableNavigateToPhotos;
	PUPhotoKitDataSourceManager* _dataSourceManager;

}

@property (nonatomic,retain) PUPhotoKitDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (assign,nonatomic) BOOL enableNavigateToPhotos;                                  //@synthesize enableNavigateToPhotos=_enableNavigateToPhotos - In the implementation block
+(Class)actionPerformerClassForActionType:(unsigned long long)arg1 ;
-(BOOL)_actionTypeIsSimple:(unsigned long long)arg1 ;
-(id)_photoKitAssetsDataSource;
-(BOOL)enableNavigateToPhotos;
-(void)setEnableNavigateToPhotos:(BOOL)arg1 ;
-(void)setDataSourceManager:(PUPhotoKitDataSourceManager *)arg1 ;
-(PUPhotoKitDataSourceManager *)dataSourceManager;
-(id)_photosDataSource;
-(BOOL)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1 ;
-(BOOL)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2 ;
-(id)actionPerformerForSettingFavoriteTo:(BOOL)arg1 onAssetsByAssetCollection:(id)arg2 ;
-(id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)arg1 withNewStillImageTime:(SCD_Struct_PH4)arg2 ;
-(id)actionPerformerForRemoveAssetsFromFeaturedPhotosByAssetCollection:(id)arg1 assetToSuggestionMap:(id)arg2 ;
@end

