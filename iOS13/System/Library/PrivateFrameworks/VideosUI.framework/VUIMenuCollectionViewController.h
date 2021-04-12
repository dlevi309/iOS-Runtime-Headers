/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol VUIMenuCollectionViewControllerDelegate;
@class VUIMenuDataSource, VUICollectionConfiguration, VUICollectionView, UICollectionViewCell, VUIMenuSectionHeaderCollectionViewCell, UICollectionViewDiffableDataSource, NSArray, NSString;

@interface VUIMenuCollectionViewController : UIViewController <UICollectionViewDelegate> {

	BOOL _shouldShowBackButton;
	BOOL _shouldDeselectOnViewAppear;
	BOOL _shouldMarkFirstCategorySelected;
	BOOL _genresOnlyMenu;
	id<VUIMenuCollectionViewControllerDelegate> _delegate;
	VUIMenuDataSource* _categories;
	VUICollectionConfiguration* _collectionConfiguration;
	VUICollectionView* _menuCollectionView;
	UICollectionViewCell* _sizingCell;
	VUIMenuSectionHeaderCollectionViewCell* _sectionHeaderSizingCell;
	UICollectionViewDiffableDataSource* _diffableDataSource;
	NSArray* _mainMenuItems;
	NSArray* _genreMenuItems;

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
@property (assign,nonatomic,__weak) id<VUIMenuCollectionViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VUIMenuDataSource * categories;                                                //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) BOOL shouldShowBackButton;                                                     //@synthesize shouldShowBackButton=_shouldShowBackButton - In the implementation block
@property (assign,nonatomic) BOOL shouldDeselectOnViewAppear;                                               //@synthesize shouldDeselectOnViewAppear=_shouldDeselectOnViewAppear - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<VUIMenuCollectionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VUIMenuCollectionViewControllerDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(VUIMenuDataSource *)categories;
-(void)setCategories:(VUIMenuDataSource *)arg1 ;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(UICollectionViewCell *)sizingCell;
-(void)setSizingCell:(UICollectionViewCell *)arg1 ;
-(id)_createDiffableDataSourceSnapshot;
-(NSArray *)mainMenuItems;
-(void)setMainMenuItems:(NSArray *)arg1 ;
-(NSArray *)genreMenuItems;
-(void)setGenreMenuItems:(NSArray *)arg1 ;
-(id)_createDiffableDataSource;
-(void)setCollectionConfiguration:(VUICollectionConfiguration *)arg1 ;
-(void)setGenresOnlyMenu:(BOOL)arg1 ;
-(void)setShouldShowBackButton:(BOOL)arg1 ;
-(void)setShouldDeselectOnViewAppear:(BOOL)arg1 ;
-(VUICollectionConfiguration *)collectionConfiguration;
-(BOOL)shouldShowBackButton;
-(void)_backSelected:(id)arg1 ;
-(VUICollectionView *)menuCollectionView;
-(BOOL)shouldDeselectOnViewAppear;
-(BOOL)_menuHasContent;
-(id)initWithCategories:(id)arg1 gridConfiguration:(id)arg2 ;
-(void)updateWithCategories:(id)arg1 ;
-(BOOL)shouldMarkFirstCategorySelected;
-(void)setShouldMarkFirstCategorySelected:(BOOL)arg1 ;
-(BOOL)genresOnlyMenu;
-(void)setMenuCollectionView:(VUICollectionView *)arg1 ;
-(VUIMenuSectionHeaderCollectionViewCell *)sectionHeaderSizingCell;
-(void)setSectionHeaderSizingCell:(VUIMenuSectionHeaderCollectionViewCell *)arg1 ;
@end

