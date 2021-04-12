/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VUILibraryDataSourceDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol VUIFamilyMembersViewControllerDelegate;
@class VUILibraryFamilyMembersDataSource, UICollectionViewDiffableDataSource, VUIViewControllerContentPresenter, VUICollectionView, VUIFamilyMemberCell, NSString;

@interface VUIFamilyMembersViewController : UIViewController <VUILibraryDataSourceDelegate, UICollectionViewDelegate> {

	BOOL _requiresRelayout;
	id<VUIFamilyMembersViewControllerDelegate> _delegate;
	VUILibraryFamilyMembersDataSource* _dataSource;
	UICollectionViewDiffableDataSource* _diffableDataSource;
	VUIViewControllerContentPresenter* _contentPresenter;
	VUICollectionView* _collectionView;
	VUIFamilyMemberCell* _sizingCell;
	long long _gridType;
	long long _gridStyle;
	double _tvCellWidth;

}

@property (nonatomic,retain) VUILibraryFamilyMembersDataSource * dataSource;                          //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * diffableDataSource;                 //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (nonatomic,retain) VUIViewControllerContentPresenter * contentPresenter;                    //@synthesize contentPresenter=_contentPresenter - In the implementation block
@property (nonatomic,retain) VUICollectionView * collectionView;                                      //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) VUIFamilyMemberCell * sizingCell;                                        //@synthesize sizingCell=_sizingCell - In the implementation block
@property (assign,nonatomic) long long gridType;                                                      //@synthesize gridType=_gridType - In the implementation block
@property (assign,nonatomic) long long gridStyle;                                                     //@synthesize gridStyle=_gridStyle - In the implementation block
@property (assign,nonatomic) BOOL requiresRelayout;                                                   //@synthesize requiresRelayout=_requiresRelayout - In the implementation block
@property (assign,nonatomic) double tvCellWidth;                                                      //@synthesize tvCellWidth=_tvCellWidth - In the implementation block
@property (assign,nonatomic,__weak) id<VUIFamilyMembersViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<VUIFamilyMembersViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VUIFamilyMembersViewControllerDelegate>)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(VUILibraryFamilyMembersDataSource *)dataSource;
-(void)setDataSource:(VUILibraryFamilyMembersDataSource *)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(VUICollectionView *)collectionView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setCollectionView:(VUICollectionView *)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(void)_updateLayout;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(VUIFamilyMemberCell *)sizingCell;
-(void)setSizingCell:(VUIFamilyMemberCell *)arg1 ;
-(long long)gridType;
-(id)_createCollectionView;
-(VUIViewControllerContentPresenter *)contentPresenter;
-(void)setContentPresenter:(VUIViewControllerContentPresenter *)arg1 ;
-(id)_createDiffableDataSourceSnapshot;
-(void)dataSourceDidFinishFetching:(id)arg1 ;
-(long long)gridStyle;
-(id)_createDiffableDataSource;
-(void)_updateCurrentViewIfNeeded;
-(void)setGridStyle:(long long)arg1 ;
-(void)setGridType:(long long)arg1 ;
-(BOOL)requiresRelayout;
-(void)setRequiresRelayout:(BOOL)arg1 ;
-(void)_clearCollectionViewSelections:(BOOL)arg1 ;
-(id)_getFamilyMemberIdentifiersFromFamilyMembers;
-(double)tvCellWidth;
-(void)setTvCellWidth:(double)arg1 ;
@end

