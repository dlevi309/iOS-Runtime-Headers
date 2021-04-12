/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXDisplayAsset;
@class PHFetchResult, PXPhotosDataSource, NSArray, NSString;

@interface PXActivitySharingContext : NSObject {

	BOOL _wantsActionSheet;
	BOOL _excludeShareActivity;
	PHFetchResult* _assetCollectionsFetchResult;
	PXPhotosDataSource* _photosDataSource;
	NSArray* _activities;
	NSString* _title;
	NSString* _subtitle;
	id<PXDisplayAsset> _keyAsset;
	long long _sourceOrigin;

}

@property (nonatomic,copy,readonly) PHFetchResult * assetCollectionsFetchResult;              //@synthesize assetCollectionsFetchResult=_assetCollectionsFetchResult - In the implementation block
@property (nonatomic,readonly) PXPhotosDataSource * photosDataSource;                         //@synthesize photosDataSource=_photosDataSource - In the implementation block
@property (nonatomic,copy) NSArray * activities;                                              //@synthesize activities=_activities - In the implementation block
@property (assign,nonatomic) BOOL wantsActionSheet;                                           //@synthesize wantsActionSheet=_wantsActionSheet - In the implementation block
@property (assign,nonatomic) BOOL excludeShareActivity;                                       //@synthesize excludeShareActivity=_excludeShareActivity - In the implementation block
@property (nonatomic,copy) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) id<PXDisplayAsset> keyAsset;                                     //@synthesize keyAsset=_keyAsset - In the implementation block
@property (assign,nonatomic) long long sourceOrigin;                                          //@synthesize sourceOrigin=_sourceOrigin - In the implementation block
-(NSArray *)activities;
-(PXPhotosDataSource *)photosDataSource;
-(id<PXDisplayAsset>)keyAsset;
-(void)setActivities:(NSArray *)arg1 ;
-(BOOL)wantsActionSheet;
-(id)init;
-(void)setWantsActionSheet:(BOOL)arg1 ;
-(void)setExcludeShareActivity:(BOOL)arg1 ;
-(void)setSourceOrigin:(long long)arg1 ;
-(void)setKeyAsset:(id<PXDisplayAsset>)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(PHFetchResult *)assetCollectionsFetchResult;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)excludeShareActivity;
-(id)initWithAssetCollection:(id)arg1 photosDataSource:(id)arg2 ;
-(id)initWithAssetCollection:(id)arg1 assetsDataSource:(id)arg2 ;
-(long long)sourceOrigin;
-(NSString *)title;
@end

