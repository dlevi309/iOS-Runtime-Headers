/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol PXDisplaySuggestion;
@class PXSuggestionsDataSourceManager, PXSuggestionsDataSource, PXPhotosDataSource, PXForYouSuggestionsAssetsDataSource, NSDictionary, NSString;

@interface PXForYouSuggestionAssetsDataSourceManager : PXAssetsDataSourceManager <PXSectionedDataSourceManagerObserver, PXPhotoLibraryUIChangeObserver> {

	id<PXDisplaySuggestion> _displayOriginalSuggestion;
	PXSuggestionsDataSourceManager* _suggestionsDataSourceManager;
	PXSuggestionsDataSource* _suggestionsDataSource;

}

@property (nonatomic,readonly) PXSuggestionsDataSourceManager * suggestionsDataSourceManager;              //@synthesize suggestionsDataSourceManager=_suggestionsDataSourceManager - In the implementation block
@property (nonatomic,retain) PXSuggestionsDataSource * suggestionsDataSource;                              //@synthesize suggestionsDataSource=_suggestionsDataSource - In the implementation block
@property (nonatomic,readonly) PXPhotosDataSource * photosDataSource; 
@property (nonatomic,retain) id<PXDisplaySuggestion> displayOriginalSuggestion;                            //@synthesize displayOriginalSuggestion=_displayOriginalSuggestion - In the implementation block
@property (nonatomic,readonly) PXForYouSuggestionsAssetsDataSource * dataSource; 
@property (nonatomic,readonly) NSDictionary * snapshotAssetToSuggestionMap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXPhotosDataSource *)photosDataSource;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(id)createInitialDataSource;
-(void)setDisplayOriginalSuggestion:(id<PXDisplaySuggestion>)arg1 ;
-(id)initWithSuggestionsDataSourceManager:(id)arg1 ;
-(id<PXDisplaySuggestion>)displayOriginalSuggestion;
-(PXSuggestionsDataSource *)suggestionsDataSource;
-(void)setSuggestionsDataSource:(PXSuggestionsDataSource *)arg1 ;
-(PXSuggestionsDataSourceManager *)suggestionsDataSourceManager;
-(NSDictionary *)snapshotAssetToSuggestionMap;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

