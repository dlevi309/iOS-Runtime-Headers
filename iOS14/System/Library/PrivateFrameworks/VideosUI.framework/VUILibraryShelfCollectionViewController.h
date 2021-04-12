/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIShelfViewController.h>

@protocol VUILibraryShelfCollectionViewControllerDelegate;
@class VUILibraryLockupViewCell, NSString, NSArray, VUIMediaEntitiesDataSource, UICollectionViewDiffableDataSource;

@interface VUILibraryShelfCollectionViewController : VUIShelfViewController {

	VUILibraryLockupViewCell* _sizingCell;
	BOOL _disableSeeAllButton;
	NSString* _headerTitle;
	NSString* _headerSubtitle;
	id<VUILibraryShelfCollectionViewControllerDelegate> _delegate;
	NSArray* _fetchResults;
	VUIMediaEntitiesDataSource* _dataSource;
	UICollectionViewDiffableDataSource* _diffableDataSource;

}

@property (nonatomic,copy) NSArray * fetchResults;                                                             //@synthesize fetchResults=_fetchResults - In the implementation block
@property (nonatomic,retain) NSString * headerTitle;                                                           //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,retain) NSString * headerSubtitle;                                                        //@synthesize headerSubtitle=_headerSubtitle - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * diffableDataSource;                          //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (assign,nonatomic) BOOL disableSeeAllButton;                                                         //@synthesize disableSeeAllButton=_disableSeeAllButton - In the implementation block
@property (assign,nonatomic,__weak) id<VUILibraryShelfCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) VUIMediaEntitiesDataSource * dataSource;                                        //@synthesize dataSource=_dataSource - In the implementation block
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(NSString *)headerTitle;
-(NSArray *)fetchResults;
-(id<VUILibraryShelfCollectionViewControllerDelegate>)delegate;
-(id)initWithDataSource:(id)arg1 ;
-(VUIMediaEntitiesDataSource *)dataSource;
-(void)setDelegate:(id<VUILibraryShelfCollectionViewControllerDelegate>)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(void)_updateHeaderView;
-(void)updateWithDataSource:(id)arg1 ;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(NSString *)headerSubtitle;
-(void)setHeaderSubtitle:(NSString *)arg1 ;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(void)setFetchResults:(NSArray *)arg1 ;
-(id)_createDiffableDataSourceSnapshot;
-(id)_createDiffableDataSourceForCollectionView:(id)arg1 ;
-(void)configureWithCollectionView:(id)arg1 ;
-(double)_computeBottomMargin;
-(CGSize)_configureSizingCellWithEntity:(id)arg1 ;
-(id)_getEntityIdentifiersFromEntities;
-(BOOL)_hideSeeAllButton;
-(void)_didPressSeeAllButton:(id)arg1 ;
-(void)setHeaderTitle:(id)arg1 andSubtitle:(id)arg2 ;
-(BOOL)disableSeeAllButton;
-(void)setDisableSeeAllButton:(BOOL)arg1 ;
@end

