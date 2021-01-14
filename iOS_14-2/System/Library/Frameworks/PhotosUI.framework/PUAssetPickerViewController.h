/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol PUAssetPickerViewControllerActionHandler;
@class UICollectionView, NSArray, PUAssetPickerFilterOptions, NSOrderedSet, NSDictionary, PHImageManager, PXCachingCountManager, UICollectionViewDiffableDataSource, NSMutableDictionary, NSString;

@interface PUAssetPickerViewController : UIViewController <UICollectionViewDelegate> {

	BOOL _viewEmbeddedInGridHeader;
	UICollectionView* _collectionView;
	NSArray* _sectionDataItems;
	PUAssetPickerFilterOptions* _filterOptions;
	NSOrderedSet* _selectedAssets;
	NSDictionary* _downloadProgress;
	PHImageManager* _imageManager;
	PXCachingCountManager* _countManager;
	id<PUAssetPickerViewControllerActionHandler> _actionHandler;
	UICollectionViewDiffableDataSource* _dataSource;
	NSMutableDictionary* _identifierMapping;

}

@property (nonatomic,copy) NSArray * sectionDataItems;                                                         //@synthesize sectionDataItems=_sectionDataItems - In the implementation block
@property (nonatomic,retain) PUAssetPickerFilterOptions * filterOptions;                                       //@synthesize filterOptions=_filterOptions - In the implementation block
@property (nonatomic,copy) NSOrderedSet * selectedAssets;                                                      //@synthesize selectedAssets=_selectedAssets - In the implementation block
@property (nonatomic,copy) NSDictionary * downloadProgress;                                                    //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,readonly) PHImageManager * imageManager;                                                  //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,readonly) PXCachingCountManager * countManager;                                           //@synthesize countManager=_countManager - In the implementation block
@property (nonatomic,readonly) BOOL viewEmbeddedInGridHeader;                                                  //@synthesize viewEmbeddedInGridHeader=_viewEmbeddedInGridHeader - In the implementation block
@property (nonatomic,__weak,readonly) id<PUAssetPickerViewControllerActionHandler> actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                                //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierMapping;                                          //@synthesize identifierMapping=_identifierMapping - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createCollectionViewWithLayout:(id)arg1 ;
+(id)createCollectionViewLayoutWithSectionDataItems:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id<PUAssetPickerViewControllerActionHandler>)actionHandler;
-(UICollectionView *)collectionView;
-(void)setFilterOptions:(PUAssetPickerFilterOptions *)arg1 ;
-(PUAssetPickerFilterOptions *)filterOptions;
-(UICollectionViewDiffableDataSource *)dataSource;
-(PHImageManager *)imageManager;
-(NSDictionary *)downloadProgress;
-(void)setDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(id)createDataSourceForCollectionView:(id)arg1 ;
-(PXCachingCountManager *)countManager;
-(id)initWithSectionDataItems:(id)arg1 viewEmbeddedInGridHeader:(BOOL)arg2 actionHandler:(id)arg3 ;
-(id)_configuredCellForCollectionView:(id)arg1 indexPath:(id)arg2 itemIdentifier:(id)arg3 ;
-(id)_configuredSupplementaryViewForCollectionView:(id)arg1 kind:(id)arg2 indexPath:(id)arg3 ;
-(NSArray *)sectionDataItems;
-(void)setSectionDataItems:(NSArray *)arg1 ;
-(BOOL)viewEmbeddedInGridHeader;
-(NSMutableDictionary *)identifierMapping;
-(void)setIdentifierMapping:(NSMutableDictionary *)arg1 ;
-(void)viewDidLoad;
-(void)setDownloadProgress:(NSDictionary *)arg1 ;
-(NSOrderedSet *)selectedAssets;
-(id)initWithSectionDataItems:(id)arg1 filterOptions:(id)arg2 selectedAssets:(id)arg3 downloadProgress:(id)arg4 imageManager:(id)arg5 countManager:(id)arg6 viewEmbeddedInGridHeader:(BOOL)arg7 actionHandler:(id)arg8 ;
-(void)setSelectedAssets:(NSOrderedSet *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)selectedAssetsDidChange:(id)arg1 ;
-(void)downloadProgressDidChange:(id)arg1 changedAssetIdentifier:(id)arg2 ;
@end

