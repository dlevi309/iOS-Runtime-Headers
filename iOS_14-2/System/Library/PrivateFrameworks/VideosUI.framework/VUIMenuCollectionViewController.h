/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/VUICollectionViewDelegate.h>

@protocol VUIMenuCollectionViewControllerDelegate;
@class VUIMenuDataSource, VUICollectionConfiguration, VUICollectionView, UICollectionViewCell, VUIMenuSectionHeaderCollectionViewCell, UICollectionViewDiffableDataSource, NSArray, _UIDiffableDataSourceSectionController, NSString;

@interface VUIMenuCollectionViewController : UIViewController <UICollectionViewDelegate, VUICollectionViewDelegate> {

	BOOL _shouldShowLeftBarButton;
	BOOL _shouldShowBackButton;
	BOOL _shouldDeselectOnViewAppear;
	BOOL _shouldMarkFirstCategorySelected;
	BOOL _genresOnlyMenu;
	BOOL _isDesignedForIpadEnabled;
	id<VUIMenuCollectionViewControllerDelegate> _delegate;
	VUIMenuDataSource* _categories;
	VUICollectionConfiguration* _collectionConfiguration;
	VUICollectionView* _menuCollectionView;
	UICollectionViewCell* _sizingCell;
	VUIMenuSectionHeaderCollectionViewCell* _sectionHeaderSizingCell;
	UICollectionViewDiffableDataSource* _diffableDataSource;
	NSArray* _mainMenuItems;
	NSArray* _genreMenuItems;
	_UIDiffableDataSourceSectionController* _sectionController;

}

@property (nonatomic,retain) VUICollectionConfiguration * collectionConfiguration;                          //@synthesize collectionConfiguration=_collectionConfiguration - In the implementation block
@property (assign,nonatomic) BOOL shouldMarkFirstCategorySelected;                                          //@synthesize shouldMarkFirstCategorySelected=_shouldMarkFirstCategorySelected - In the implementation block
@property (assign,nonatomic) BOOL genresOnlyMenu;                                                           //@synthesize genresOnlyMenu=_genresOnlyMenu - In the implementation block
@property (nonatomic,retain) VUICollectionView * menuCollectionView;                                        //@synthesize menuCollectionView=_menuCollectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewCell * sizingCell;                                             //@synthesize sizingCell=_sizingCell - In the implementation block
@property (nonatomic,retain) VUIMenuSectionHeaderCollectionViewCell * sectionHeaderSizingCell;              //@synthesize sectionHeaderSizingCell=_sectionHeaderSizingCell - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * diffableDataSource;                       //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (nonatomic,retain) NSArray * mainMenuItems;                                                       //@synthesize mainMenuItems=_mainMenuItems - In the implementation block
@property (nonatomic,retain) NSArray * genreMenuItems;                                                      //@synthesize genreMenuItems=_genreMenuItems - In the implementation block
@property (nonatomic,retain) _UIDiffableDataSourceSectionController * sectionController;                    //@synthesize sectionController=_sectionController - In the implementation block
@property (assign,nonatomic) BOOL isDesignedForIpadEnabled;                                                 //@synthesize isDesignedForIpadEnabled=_isDesignedForIpadEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<VUIMenuCollectionViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VUIMenuDataSource * categories;                                                //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLeftBarButton;                                                  //@synthesize shouldShowLeftBarButton=_shouldShowLeftBarButton - In the implementation block
@property (assign,nonatomic) BOOL shouldShowBackButton;                                                     //@synthesize shouldShowBackButton=_shouldShowBackButton - In the implementation block
@property (assign,nonatomic) BOOL shouldDeselectOnViewAppear;                                               //@synthesize shouldDeselectOnViewAppear=_shouldDeselectOnViewAppear - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(void)viewWillLayoutSubviews;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setCategories:(VUIMenuDataSource *)arg1 ;
-(id<VUIMenuCollectionViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(VUIMenuDataSource *)categories;
-(void)setTitle:(id)arg1 ;
-(UICollectionViewCell *)sizingCell;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)setSizingCell:(UICollectionViewCell *)arg1 ;
-(_UIDiffableDataSourceSectionController *)sectionController;
-(void)setSectionController:(_UIDiffableDataSourceSectionController *)arg1 ;
-(void)setDelegate:(id<VUIMenuCollectionViewControllerDelegate>)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(id)_backButton;
-(void)viewDidLoad;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(id)_createDiffableDataSourceSnapshot;
-(id)_createDiffableDataSource;
-(NSArray *)mainMenuItems;
-(void)setMainMenuItems:(NSArray *)arg1 ;
-(NSArray *)genreMenuItems;
-(void)setGenreMenuItems:(NSArray *)arg1 ;
-(BOOL)isDesignedForIpadEnabled;
-(void)setIsDesignedForIpadEnabled:(BOOL)arg1 ;
-(void)setCollectionConfiguration:(VUICollectionConfiguration *)arg1 ;
-(void)setGenresOnlyMenu:(BOOL)arg1 ;
-(void)setShouldShowBackButton:(BOOL)arg1 ;
-(void)setShouldShowLeftBarButton:(BOOL)arg1 ;
-(void)setShouldDeselectOnViewAppear:(BOOL)arg1 ;
-(VUICollectionConfiguration *)collectionConfiguration;
-(BOOL)shouldShowLeftBarButton;
-(id)_leftBarButton;
-(BOOL)shouldShowBackButton;
-(VUICollectionView *)menuCollectionView;
-(void)_applySnapshotsToSectionController:(BOOL)arg1 ;
-(void)_selectFirstMenuItemIfNecessary;
-(BOOL)shouldDeselectOnViewAppear;
-(void)_setGenreMenuItemsForCategories:(id)arg1 ;
-(void)_backSelected:(id)arg1 ;
-(void)_leftBarButtonSelected:(id)arg1 ;
-(id)initWithCategories:(id)arg1 gridConfiguration:(id)arg2 ;
-(void)updateWithCategories:(id)arg1 ;
-(BOOL)_menuHasContent;
-(BOOL)shouldMarkFirstCategorySelected;
-(void)setShouldMarkFirstCategorySelected:(BOOL)arg1 ;
-(BOOL)genresOnlyMenu;
-(void)setMenuCollectionView:(VUICollectionView *)arg1 ;
-(VUIMenuSectionHeaderCollectionViewCell *)sectionHeaderSizingCell;
-(void)setSectionHeaderSizingCell:(VUIMenuSectionHeaderCollectionViewCell *)arg1 ;
@end
