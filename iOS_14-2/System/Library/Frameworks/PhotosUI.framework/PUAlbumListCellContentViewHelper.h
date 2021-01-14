/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class PXExtendedTraitCollection, PUAlbumListCellContentViewHelperConfiguration, PXPhotoKitCollectionsDataSourceManager, PUFontManager, UIImage, PHImageRequestOptions, PHCachingImageManager, PXFeatureSpecManager, PXFeatureSpec, PXAssetBadgeManager, PXCollectionTileLayoutTemplate, NSString;

@interface PUAlbumListCellContentViewHelper : NSObject <PXChangeObserver> {

	BOOL _didInitializeMemoriesTitleSupport;
	PXExtendedTraitCollection* _traitCollection;
	PUAlbumListCellContentViewHelperConfiguration* _configuration;
	PXPhotoKitCollectionsDataSourceManager* _dataSourceManager;
	PUFontManager* _fontManager;
	UIImage* _emptyAlbumPlaceholderImage;
	UIImage* _emptySharedAlbumPlaceholderImage;
	UIImage* _addSharedAlbumPlaceholderImage;
	UIImage* _hiddenAlbumPlaceholderImage;
	UIImage* _recentlyDeletedAlbumPlaceholderImage;
	PHImageRequestOptions* _imageRequestOptions;
	PHCachingImageManager* _cachingImageManager;
	PXFeatureSpecManager* _featureSpecManager;
	PXFeatureSpec* _featureSpec;
	PXAssetBadgeManager* _badgeManager;
	PXCollectionTileLayoutTemplate* _collectionTileLayoutTemplate;
	CGSize _albumCellSize;

}

@property (nonatomic,readonly) PUAlbumListCellContentViewHelperConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) PXPhotoKitCollectionsDataSourceManager * dataSourceManager;                 //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) PUFontManager * fontManager;                                                  //@synthesize fontManager=_fontManager - In the implementation block
@property (assign,nonatomic) CGSize albumCellSize;                                                         //@synthesize albumCellSize=_albumCellSize - In the implementation block
@property (nonatomic,retain) UIImage * emptyAlbumPlaceholderImage;                                         //@synthesize emptyAlbumPlaceholderImage=_emptyAlbumPlaceholderImage - In the implementation block
@property (nonatomic,retain) UIImage * emptySharedAlbumPlaceholderImage;                                   //@synthesize emptySharedAlbumPlaceholderImage=_emptySharedAlbumPlaceholderImage - In the implementation block
@property (nonatomic,retain) UIImage * addSharedAlbumPlaceholderImage;                                     //@synthesize addSharedAlbumPlaceholderImage=_addSharedAlbumPlaceholderImage - In the implementation block
@property (nonatomic,retain) UIImage * hiddenAlbumPlaceholderImage;                                        //@synthesize hiddenAlbumPlaceholderImage=_hiddenAlbumPlaceholderImage - In the implementation block
@property (nonatomic,retain) UIImage * recentlyDeletedAlbumPlaceholderImage;                               //@synthesize recentlyDeletedAlbumPlaceholderImage=_recentlyDeletedAlbumPlaceholderImage - In the implementation block
@property (nonatomic,retain) PHImageRequestOptions * imageRequestOptions;                                  //@synthesize imageRequestOptions=_imageRequestOptions - In the implementation block
@property (nonatomic,retain) PHCachingImageManager * cachingImageManager;                                  //@synthesize cachingImageManager=_cachingImageManager - In the implementation block
@property (nonatomic,retain) PXFeatureSpecManager * featureSpecManager;                                    //@synthesize featureSpecManager=_featureSpecManager - In the implementation block
@property (nonatomic,retain) PXFeatureSpec * featureSpec;                                                  //@synthesize featureSpec=_featureSpec - In the implementation block
@property (nonatomic,retain) PXAssetBadgeManager * badgeManager;                                           //@synthesize badgeManager=_badgeManager - In the implementation block
@property (nonatomic,retain) PXCollectionTileLayoutTemplate * collectionTileLayoutTemplate;                //@synthesize collectionTileLayoutTemplate=_collectionTileLayoutTemplate - In the implementation block
@property (assign,nonatomic) BOOL didInitializeMemoriesTitleSupport;                                       //@synthesize didInitializeMemoriesTitleSupport=_didInitializeMemoriesTitleSupport - In the implementation block
@property (nonatomic,readonly) PXExtendedTraitCollection * traitCollection;                                //@synthesize traitCollection=_traitCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_placeholderImageWithSize:(CGSize)arg1 backgroundColor:(id)arg2 glyphImageName:(id)arg3 glyphAlpha:(double)arg4 ;
-(PXFeatureSpec *)featureSpec;
-(void)setBadgeManager:(PXAssetBadgeManager *)arg1 ;
-(PXExtendedTraitCollection *)traitCollection;
-(void)_prepareStackView:(id)arg1 forCollection:(id)arg2 withStackCount:(long long)arg3 withCustomEmptyPlaceHolderImage:(id)arg4 ;
-(void)setFontManager:(PUFontManager *)arg1 ;
-(BOOL)didInitializeMemoriesTitleSupport;
-(void)_updateStackView:(id)arg1 forAssets:(id)arg2 memoriesCollection:(id)arg3 memories:(id)arg4 withCustomEmptyPlaceholderImage:(id)arg5 ;
-(void)reconfigureImageInAlbumListCellContentView:(id)arg1 withPlaceholderImage:(id)arg2 ;
-(void)_updateAlbumListCellContentViewForPlacesAlbum:(id)arg1 ;
-(id)_visibleAssetsForCollection:(id)arg1 maximumNumberOfVisibleAssets:(long long)arg2 correspondingCollections:(out id*)arg3 ;
-(PHCachingImageManager *)cachingImageManager;
-(void)_updateAlbumListCellContentViewForPeopleAlbum:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 dataSourceManager:(id)arg2 extendedTraitCollection:(id)arg3 ;
-(void)_invalidateAlbumCellSize;
-(void)setFeatureSpecManager:(PXFeatureSpecManager *)arg1 ;
-(PXFeatureSpecManager *)featureSpecManager;
-(void)_initializeMemoriesTitleSupportIfNeeded;
-(UIImage *)emptySharedAlbumPlaceholderImage;
-(void)setAddSharedAlbumPlaceholderImage:(UIImage *)arg1 ;
-(PXPhotoKitCollectionsDataSourceManager *)dataSourceManager;
-(PUAlbumListCellContentViewHelperConfiguration *)configuration;
-(CGSize)albumCellSize;
-(PUFontManager *)fontManager;
-(id)_getDisplayableAssetsForStandInCollectionList:(id)arg1 maximumCount:(long long)arg2 useCache:(BOOL)arg3 correspondingCollections:(out id*)arg4 ;
-(void)setDidInitializeMemoriesTitleSupport:(BOOL)arg1 ;
-(id)_visibleAssetsForCollection:(id)arg1 correspondingCollections:(out id*)arg2 ;
-(PXAssetBadgeManager *)badgeManager;
-(void)setCollectionTileLayoutTemplate:(PXCollectionTileLayoutTemplate *)arg1 ;
-(void)setEmptyAlbumPlaceholderImage:(UIImage *)arg1 ;
-(void)setCachingImageManager:(PHCachingImageManager *)arg1 ;
-(UIImage *)addSharedAlbumPlaceholderImage;
-(PHImageRequestOptions *)imageRequestOptions;
-(PXCollectionTileLayoutTemplate *)collectionTileLayoutTemplate;
-(void)setFeatureSpec:(PXFeatureSpec *)arg1 ;
-(void)setImageRequestOptions:(PHImageRequestOptions *)arg1 ;
-(unsigned long long)_editCapabilitiesForAlbum:(id)arg1 ;
-(void)_getDisplayableAssets:(id*)arg1 indexes:(id*)arg2 forCollection:(id)arg3 maximumCount:(long long)arg4 useCache:(BOOL)arg5 ;
-(UIImage *)hiddenAlbumPlaceholderImage;
-(void)_updateStackView:(id)arg1 forAssets:(id)arg2 collection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4 ;
-(void)setEmptySharedAlbumPlaceholderImage:(UIImage *)arg1 ;
-(id)_getDisplayableFacesForCollectionList:(id)arg1 maximumCount:(long long)arg2 ;
-(void)setRecentlyDeletedAlbumPlaceholderImage:(UIImage *)arg1 ;
-(void)setHiddenAlbumPlaceholderImage:(UIImage *)arg1 ;
-(long long)estimatedIndexOfAssetForStackItemAtIndex:(long long)arg1 inCollection:(id)arg2 albumListCellContentView:(id)arg3 ;
-(void)_recalculateAlbumCellSize;
-(void)configureAlbumListCellContentView:(id)arg1 forCollection:(id)arg2 title:(id)arg3 animated:(BOOL)arg4 enabled:(BOOL)arg5 editing:(BOOL)arg6 ;
-(void)setAlbumCellSize:(CGSize)arg1 ;
-(id)subtitleForCollection:(id)arg1 ;
-(UIImage *)emptyAlbumPlaceholderImage;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_updateStackView:(id)arg1 forFaces:(id)arg2 inCollection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4 ;
-(UIImage *)recentlyDeletedAlbumPlaceholderImage;
@end

