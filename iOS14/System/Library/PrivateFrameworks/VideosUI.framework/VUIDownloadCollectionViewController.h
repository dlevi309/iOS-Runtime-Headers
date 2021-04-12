/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/VUIDownloadDataSourceDelegate.h>
#import <libobjc.A.dylib/VUICollectionViewDelegate.h>

@class VUIDownloadDataSource, VUIViewControllerContentPresenter, VUICollectionView, UIAlertController, UICollectionViewDiffableDataSource, VUIDownloadCollectionViewCell, UIBarButtonItem, NSMutableArray, NSDictionary, NSString;

@interface VUIDownloadCollectionViewController : UIViewController <UICollectionViewDelegate, VUIDownloadDataSourceDelegate, VUICollectionViewDelegate> {

	BOOL _requiresRelayout;
	BOOL _isEditing;
	BOOL _isSelectingAll;
	long long _gridStyle;
	long long _gridType;
	VUIDownloadDataSource* _downloadDataSource;
	VUIViewControllerContentPresenter* _contentPresenter;
	VUICollectionView* _collectionView;
	UIAlertController* _alertController;
	UICollectionViewDiffableDataSource* _diffableDataSource;
	VUIDownloadCollectionViewCell* _sizingCell;
	UIBarButtonItem* _leftBarButtonItem;
	UIBarButtonItem* _rightBarButtonItem;
	UIBarButtonItem* _backBarButtonItem;
	UIBarButtonItem* _selectAllBarButtonItem;
	NSMutableArray* _downloadEntities;
	NSDictionary* _identifierToDownloadEntityDictionary;
	NSMutableArray* _assetControllersToRemove;
	double _cellWidth;

}

@property (nonatomic,retain) VUIDownloadDataSource * downloadDataSource;                           //@synthesize downloadDataSource=_downloadDataSource - In the implementation block
@property (nonatomic,retain) VUIViewControllerContentPresenter * contentPresenter;                 //@synthesize contentPresenter=_contentPresenter - In the implementation block
@property (nonatomic,retain) VUICollectionView * collectionView;                                   //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                                  //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * diffableDataSource;              //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (nonatomic,retain) VUIDownloadCollectionViewCell * sizingCell;                           //@synthesize sizingCell=_sizingCell - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * leftBarButtonItem;                                  //@synthesize leftBarButtonItem=_leftBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * rightBarButtonItem;                                 //@synthesize rightBarButtonItem=_rightBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backBarButtonItem;                                  //@synthesize backBarButtonItem=_backBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * selectAllBarButtonItem;                             //@synthesize selectAllBarButtonItem=_selectAllBarButtonItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * downloadEntities;                                    //@synthesize downloadEntities=_downloadEntities - In the implementation block
@property (nonatomic,retain) NSDictionary * identifierToDownloadEntityDictionary;                  //@synthesize identifierToDownloadEntityDictionary=_identifierToDownloadEntityDictionary - In the implementation block
@property (nonatomic,retain) NSMutableArray * assetControllersToRemove;                            //@synthesize assetControllersToRemove=_assetControllersToRemove - In the implementation block
@property (assign,nonatomic) double cellWidth;                                                     //@synthesize cellWidth=_cellWidth - In the implementation block
@property (assign,nonatomic) BOOL requiresRelayout;                                                //@synthesize requiresRelayout=_requiresRelayout - In the implementation block
@property (assign,nonatomic) BOOL isEditing;                                                       //@synthesize isEditing=_isEditing - In the implementation block
@property (assign,nonatomic) BOOL isSelectingAll;                                                  //@synthesize isSelectingAll=_isSelectingAll - In the implementation block
@property (assign,nonatomic) long long gridStyle;                                                  //@synthesize gridStyle=_gridStyle - In the implementation block
@property (assign,nonatomic) long long gridType;                                                   //@synthesize gridType=_gridType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)viewWillLayoutSubviews;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(VUICollectionView *)arg1 ;
-(void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(VUICollectionView *)collectionView;
-(VUIDownloadCollectionViewCell *)sizingCell;
-(void)setSizingCell:(VUIDownloadCollectionViewCell *)arg1 ;
-(BOOL)isEditing;
-(UIAlertController *)alertController;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)setIsEditing:(BOOL)arg1 ;
-(void)viewDidLoad;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(void)_cancelPressed;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIBarButtonItem *)rightBarButtonItem;
-(UIBarButtonItem *)leftBarButtonItem;
-(void)loadView;
-(void)setLeftBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setRightBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setBackBarButtonItem:(UIBarButtonItem *)arg1 ;
-(long long)gridType;
-(void)viewDidLayoutSubviews;
-(UIBarButtonItem *)backBarButtonItem;
-(void)setCellWidth:(double)arg1 ;
-(double)cellWidth;
-(id)_createDiffableDataSourceSnapshot;
-(void)_editToggled;
-(void)_exitEditingMode;
-(VUIDownloadDataSource *)downloadDataSource;
-(void)setAssetControllersToRemove:(NSMutableArray *)arg1 ;
-(NSMutableArray *)assetControllersToRemove;
-(void)downloadCellDidRequestCancelDownload:(id)arg1 ;
-(void)setDownloadDataSource:(VUIDownloadDataSource *)arg1 ;
-(VUIViewControllerContentPresenter *)contentPresenter;
-(void)setContentPresenter:(VUIViewControllerContentPresenter *)arg1 ;
-(NSMutableArray *)downloadEntities;
-(long long)gridStyle;
-(id)_createDiffableDataSource;
-(void)setDownloadEntities:(NSMutableArray *)arg1 ;
-(NSDictionary *)identifierToDownloadEntityDictionary;
-(id)_createIdentifierToDownloadEntityDictionary;
-(void)setIdentifierToDownloadEntityDictionary:(NSDictionary *)arg1 ;
-(void)_deleteDownloadEntities:(id)arg1 ;
-(void)_deleteMediaEntitiesInDownloadEntities:(id)arg1 ;
-(id)_identifiersForDownloadEntities;
-(void)downloadManager:(id)arg1 downloadedFetchDidFinishWithEntities:(id)arg2 ;
-(double)_computeBottomMargin;
-(id)_createCollectionView;
-(void)_updateLayoutForSize:(CGSize)arg1 ;
-(void)setGridStyle:(long long)arg1 ;
-(void)setGridType:(long long)arg1 ;
-(void)_batchSelectToggled;
-(BOOL)isSelectingAll;
-(void)_updateSelectAllBarButtonItemIfNecessary;
-(void)_enterEditingMode;
-(id)_configureAlertController;
-(void)_updateAllVisibleCellsForEditingMode;
-(void)setIsSelectingAll:(BOOL)arg1 ;
-(UIBarButtonItem *)selectAllBarButtonItem;
-(void)_selectAllCells;
-(void)_clearSelections;
-(id)_deleteActionTitleString;
-(void)_configureNavigationBarForEditingMode;
-(void)setSelectAllBarButtonItem:(UIBarButtonItem *)arg1 ;
-(BOOL)requiresRelayout;
-(void)setRequiresRelayout:(BOOL)arg1 ;
@end

