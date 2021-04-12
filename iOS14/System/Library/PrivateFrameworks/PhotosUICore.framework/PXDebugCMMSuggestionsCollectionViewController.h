/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXCMMWorkflowCoordinatorDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol PXDebugCMMSuggestionsDelegate;
@class PXCMMWorkflowCoordinator, UIView, PXDebugCMMSuggestionCollectionViewCell, _PXCMMSizingSuggestion, PXCMMSuggestionsDataSourceManager, PXCMMSuggestionsDataSource, PHCachingImageManager, PHImageRequestOptions, NSString;

@interface PXDebugCMMSuggestionsCollectionViewController : UICollectionViewController <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXCMMWorkflowCoordinatorDelegate, UICollectionViewDelegateFlowLayout> {

	CGSize _lastUpdateReferenceSize;
	PXCMMWorkflowCoordinator* _workflowCoordinator;
	UIView* _emptyPlaceholderView;
	PXDebugCMMSuggestionCollectionViewCell* _sizingCell;
	_PXCMMSizingSuggestion* _sizingSuggestion;
	PXCMMSuggestionsDataSourceManager* _dataSourceManager;
	id<PXDebugCMMSuggestionsDelegate> _suggestionsDelegate;
	PXCMMSuggestionsDataSource* _dataSource;
	PHCachingImageManager* _cachingImageManager;
	PHImageRequestOptions* _imageRequestOptions;

}

@property (nonatomic,retain) PXCMMSuggestionsDataSource * dataSource;                                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) PHCachingImageManager * cachingImageManager;                             //@synthesize cachingImageManager=_cachingImageManager - In the implementation block
@property (nonatomic,readonly) PHImageRequestOptions * imageRequestOptions;                             //@synthesize imageRequestOptions=_imageRequestOptions - In the implementation block
@property (nonatomic,readonly) PXCMMSuggestionsDataSourceManager * dataSourceManager;                   //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (assign,nonatomic,__weak) id<PXDebugCMMSuggestionsDelegate> suggestionsDelegate;              //@synthesize suggestionsDelegate=_suggestionsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(id)initWithDataSourceManager:(id)arg1 scrollDirection:(long long)arg2 ;
-(void)_updateEmptyPlaceholderView;
-(BOOL)_dataSourceIsEmpty;
-(void)_configureGadgetView:(id)arg1 forSuggestion:(id)arg2 ;
-(double)_suggestionCellWidth;
-(id<PXDebugCMMSuggestionsDelegate>)suggestionsDelegate;
-(void)setSuggestionsDelegate:(id<PXDebugCMMSuggestionsDelegate>)arg1 ;
-(void)_updateCollectionViewLayout;
-(id)initWithDataSourceManager:(id)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(PHCachingImageManager *)cachingImageManager;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(PXCMMSuggestionsDataSource *)dataSource;
-(void)setDataSource:(PXCMMSuggestionsDataSource *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(PXCMMSuggestionsDataSourceManager *)dataSourceManager;
-(void)viewDidLoad;
-(PHImageRequestOptions *)imageRequestOptions;
-(void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishSession:(id)arg3 withActivityState:(unsigned long long)arg4 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

