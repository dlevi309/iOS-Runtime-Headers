/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutablePhotosDetailsContext.h>
#import <libobjc.A.dylib/PXPhotosDataSourceChangeObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXHierarchicalContext.h>

@class PHFetchResult, NSDictionary, NSString, PXPhotosDetailsViewModel, PXPhotosDataSource, PXDisplayTitleInfo;

@interface PXPhotosDetailsContext : PXObservable <PXMutablePhotosDetailsContext, PXPhotosDataSourceChangeObserver, PXChangeObserver, PXHierarchicalContext> {

	BOOL _shouldShowMovieHeader;
	BOOL _hasLocation;
	BOOL _shouldUseKeyFace;
	PXPhotosDataSource* _photosDataSource;
	PXDisplayTitleInfo* _displayTitleInfo;
	PXPhotosDetailsContext* _parentContext;
	PHFetchResult* _keyAssetsFetchResult;
	long long _viewSourceOrigin;
	PXPhotosDetailsViewModel* _viewModel;
	unsigned long long _contextHierarchyDepth;
	PHFetchResult* _assetCollections;
	NSDictionary* _assetsByCollection;
	PHFetchResult* _people;
	NSString* _localizedTitle;
	NSString* _localizedSubtitle;
	NSString* _titleFontName;

}

@property (nonatomic,readonly) PXPhotosDataSource * photosDataSource;                      //@synthesize photosDataSource=_photosDataSource - In the implementation block
@property (nonatomic,readonly) PXDisplayTitleInfo * displayTitleInfo;                      //@synthesize displayTitleInfo=_displayTitleInfo - In the implementation block
@property (nonatomic,__weak,readonly) PXPhotosDetailsContext * parentContext;              //@synthesize parentContext=_parentContext - In the implementation block
@property (nonatomic,readonly) PHFetchResult * keyAssetsFetchResult;                       //@synthesize keyAssetsFetchResult=_keyAssetsFetchResult - In the implementation block
@property (nonatomic,readonly) long long viewSourceOrigin;                                 //@synthesize viewSourceOrigin=_viewSourceOrigin - In the implementation block
@property (nonatomic,readonly) PXPhotosDetailsViewModel * viewModel;                       //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) unsigned long long contextHierarchyDepth;                   //@synthesize contextHierarchyDepth=_contextHierarchyDepth - In the implementation block
@property (nonatomic,readonly) PHFetchResult * assetCollections;                           //@synthesize assetCollections=_assetCollections - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * assetsByCollection;                     //@synthesize assetsByCollection=_assetsByCollection - In the implementation block
@property (nonatomic,readonly) PHFetchResult * people;                                     //@synthesize people=_people - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;                             //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedSubtitle;                          //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleFontName;                              //@synthesize titleFontName=_titleFontName - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowMovieHeader;                                 //@synthesize shouldShowMovieHeader=_shouldShowMovieHeader - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation;                                           //@synthesize hasLocation=_hasLocation - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowHeaderTitle; 
@property (nonatomic,readonly) BOOL shouldUseKeyFace;                                      //@synthesize shouldUseKeyFace=_shouldUseKeyFace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)photosDetailsContextForAsset:(id)arg1 parentContext:(id)arg2 ;
+(id)photosDetailsContextForAssetCollection:(id)arg1 assets:(id)arg2 viewSourceOrigin:(long long)arg3 ;
+(id)photosDetailsContextForMemory:(id)arg1 enableCuration:(BOOL)arg2 enableKeyAssets:(BOOL)arg3 ;
+(id)photosDetailsContextForAssetCollection:(id)arg1 assets:(id)arg2 keyAssets:(id)arg3 enableCuration:(BOOL)arg4 enableKeyAssets:(BOOL)arg5 useVerboseSmartDescription:(BOOL)arg6 viewSourceOrigin:(long long)arg7 ;
+(id)photosDetailsContextForMemory:(id)arg1 ;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setPhotosDataSource:(PXPhotosDataSource *)arg1 ;
-(PXPhotosDataSource *)photosDataSource;
-(NSString *)localizedTitle;
-(NSString *)titleFontName;
-(void)setHasLocation:(BOOL)arg1 ;
-(id)init;
-(PXDisplayTitleInfo *)displayTitleInfo;
-(void)setPeople:(PHFetchResult *)arg1 ;
-(PHFetchResult *)keyAssetsFetchResult;
-(void)setKeyAssetsFetchResult:(PHFetchResult *)arg1 ;
-(void)setTitleFontName:(NSString *)arg1 ;
-(PXPhotosDetailsViewModel *)viewModel;
-(void)photosDataSource:(id)arg1 didChange:(id)arg2 ;
-(NSString *)localizedSubtitle;
-(void)setLocalizedSubtitle:(NSString *)arg1 ;
-(PHFetchResult *)people;
-(void)setViewModel:(PXPhotosDetailsViewModel *)arg1 ;
-(void)setViewSourceOrigin:(long long)arg1 ;
-(id)initWithPhotosDataSource:(id)arg1 displayTitleInfo:(id)arg2 parentContext:(id)arg3 keyAssetsFetchResult:(id)arg4 ;
-(BOOL)hasLocation;
-(PHFetchResult *)assetCollections;
-(id)mutableChangeObject;
-(PXPhotosDetailsContext *)parentContext;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setAssetCollections:(PHFetchResult *)arg1 ;
-(NSDictionary *)assetsByCollection;
-(void)setAssetsByCollection:(NSDictionary *)arg1 ;
-(BOOL)shouldShowMovieHeader;
-(void)setShouldShowMovieHeader:(BOOL)arg1 ;
-(long long)viewSourceOrigin;
-(void)_updatePropertiesDerivedFromPhotosDataSource;
-(void)_updatePropertiesDerivedFromDisplayTitleInfo;
-(BOOL)shouldUseKeyFace;
-(BOOL)shouldShowHeaderTitle;
-(unsigned long long)contextHierarchyDepth;
@end

