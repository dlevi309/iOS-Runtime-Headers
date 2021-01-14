/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class PHFetchResult, NSDictionary, NSString, PXPhotosDetailsViewModel, PXPhotosDataSource;


@protocol PXMutablePhotosDetailsContext <NSObject>
@property (nonatomic,retain) PHFetchResult * assetCollections; 
@property (nonatomic,copy) NSDictionary * assetsByCollection; 
@property (nonatomic,retain) PHFetchResult * people; 
@property (nonatomic,retain) PHFetchResult * keyAssetsFetchResult; 
@property (nonatomic,copy) NSString * localizedTitle; 
@property (nonatomic,copy) NSString * localizedSubtitle; 
@property (nonatomic,copy) NSString * titleFontName; 
@property (assign,nonatomic) BOOL shouldShowMovieHeader; 
@property (assign,nonatomic) BOOL hasLocation; 
@property (assign,nonatomic) long long viewSourceOrigin; 
@property (nonatomic,retain) PXPhotosDetailsViewModel * viewModel; 
@property (nonatomic,retain) PXPhotosDataSource * photosDataSource; 
@required
-(void)setLocalizedTitle:(id)arg1;
-(void)setPhotosDataSource:(id)arg1;
-(PXPhotosDataSource *)photosDataSource;
-(NSString *)localizedTitle;
-(NSString *)titleFontName;
-(void)setHasLocation:(BOOL)arg1;
-(void)setPeople:(id)arg1;
-(PHFetchResult *)keyAssetsFetchResult;
-(void)setKeyAssetsFetchResult:(id)arg1;
-(void)setTitleFontName:(id)arg1;
-(PXPhotosDetailsViewModel *)viewModel;
-(NSString *)localizedSubtitle;
-(void)setLocalizedSubtitle:(id)arg1;
-(PHFetchResult *)people;
-(void)setViewModel:(id)arg1;
-(void)setViewSourceOrigin:(long long)arg1;
-(BOOL)hasLocation;
-(PHFetchResult *)assetCollections;
-(void)setAssetCollections:(id)arg1;
-(NSDictionary *)assetsByCollection;
-(void)setAssetsByCollection:(id)arg1;
-(BOOL)shouldShowMovieHeader;
-(void)setShouldShowMovieHeader:(BOOL)arg1;
-(long long)viewSourceOrigin;

@end

