/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PXDisplayAsset;
@class PHFetchResult, PUPhotoSelectionManager, PXPhotosDataSource, NSDictionary, NSArray, PHPerson, NSString;

@interface PUActivitySharingConfiguration : NSObject {

	BOOL _allowsAirPlayActivity;
	BOOL _allowsRemoveFromFeaturedPhotosActivity;
	BOOL _wantsActionSheet;
	BOOL _excludeShareActivity;
	PHFetchResult* _collectionListFetchResult;
	PUPhotoSelectionManager* _selectionManager;
	PXPhotosDataSource* _photosDataSource;
	NSDictionary* _assetsFetchResultsByAssetCollection;
	NSArray* _activities;
	NSArray* _excludedActivityTypes;
	PHPerson* _person;
	NSString* _title;
	NSString* _subtitle;
	id<PXDisplayAsset> _keyAsset;
	long long _sourceOrigin;

}

@property (nonatomic,readonly) PHFetchResult * collectionListFetchResult;                   //@synthesize collectionListFetchResult=_collectionListFetchResult - In the implementation block
@property (nonatomic,readonly) PUPhotoSelectionManager * selectionManager;                  //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,retain) PXPhotosDataSource * photosDataSource;                         //@synthesize photosDataSource=_photosDataSource - In the implementation block
@property (nonatomic,copy) NSDictionary * assetsFetchResultsByAssetCollection;              //@synthesize assetsFetchResultsByAssetCollection=_assetsFetchResultsByAssetCollection - In the implementation block
@property (nonatomic,copy) NSArray * activities;                                            //@synthesize activities=_activities - In the implementation block
@property (nonatomic,copy) NSArray * excludedActivityTypes;                                 //@synthesize excludedActivityTypes=_excludedActivityTypes - In the implementation block
@property (assign,nonatomic) BOOL allowsAirPlayActivity;                                    //@synthesize allowsAirPlayActivity=_allowsAirPlayActivity - In the implementation block
@property (assign,nonatomic) BOOL allowsRemoveFromFeaturedPhotosActivity;                   //@synthesize allowsRemoveFromFeaturedPhotosActivity=_allowsRemoveFromFeaturedPhotosActivity - In the implementation block
@property (nonatomic,retain) PHPerson * person;                                             //@synthesize person=_person - In the implementation block
@property (assign,nonatomic) BOOL wantsActionSheet;                                         //@synthesize wantsActionSheet=_wantsActionSheet - In the implementation block
@property (assign,nonatomic) BOOL excludeShareActivity;                                     //@synthesize excludeShareActivity=_excludeShareActivity - In the implementation block
@property (nonatomic,copy) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                             //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) id<PXDisplayAsset> keyAsset;                                   //@synthesize keyAsset=_keyAsset - In the implementation block
@property (assign,nonatomic) long long sourceOrigin;                                        //@synthesize sourceOrigin=_sourceOrigin - In the implementation block
-(PHPerson *)person;
-(NSArray *)activities;
-(void)setPhotosDataSource:(PXPhotosDataSource *)arg1 ;
-(PUPhotoSelectionManager *)selectionManager;
-(PXPhotosDataSource *)photosDataSource;
-(id<PXDisplayAsset>)keyAsset;
-(void)setActivities:(NSArray *)arg1 ;
-(id)initWithCollectionsFetchResult:(id)arg1 selectionManager:(id)arg2 ;
-(BOOL)wantsActionSheet;
-(void)setWantsActionSheet:(BOOL)arg1 ;
-(void)setExcludeShareActivity:(BOOL)arg1 ;
-(void)setSourceOrigin:(long long)arg1 ;
-(void)setExcludedActivityTypes:(NSArray *)arg1 ;
-(void)setKeyAsset:(id<PXDisplayAsset>)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(PHFetchResult *)collectionListFetchResult;
-(void)setPerson:(PHPerson *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSArray *)excludedActivityTypes;
-(NSDictionary *)assetsFetchResultsByAssetCollection;
-(void)setAssetsFetchResultsByAssetCollection:(NSDictionary *)arg1 ;
-(BOOL)allowsAirPlayActivity;
-(void)setAllowsAirPlayActivity:(BOOL)arg1 ;
-(BOOL)allowsRemoveFromFeaturedPhotosActivity;
-(void)setAllowsRemoveFromFeaturedPhotosActivity:(BOOL)arg1 ;
-(BOOL)excludeShareActivity;
-(long long)sourceOrigin;
-(NSString *)title;
@end

