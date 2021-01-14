/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol CNAccountsAndGroupsViewControllerDelegate;
@class CNAccountsAndGroupsDataSource, UICollectionView, _UIDiffableDataSourceOutlineSectionController, UICollectionViewDiffableDataSource, UIButton, NSString;

@interface CNAccountsAndGroupsViewController : UIViewController <UICollectionViewDelegate> {

	BOOL _needsReload;
	BOOL _tableViewNeedsReloadAfterResume;
	CNAccountsAndGroupsDataSource* _dataSource;
	id<CNAccountsAndGroupsViewControllerDelegate> _delegate;
	UICollectionView* _collectionView;
	_UIDiffableDataSourceOutlineSectionController* _sectionController;
	UICollectionViewDiffableDataSource* _diffableDataSource;
	UIButton* _showAllButton;

}

@property (assign,nonatomic) BOOL needsReload;                                                           //@synthesize needsReload=_needsReload - In the implementation block
@property (assign,nonatomic) BOOL tableViewNeedsReloadAfterResume;                                       //@synthesize tableViewNeedsReloadAfterResume=_tableViewNeedsReloadAfterResume - In the implementation block
@property (retain) UICollectionView * collectionView;                                                    //@synthesize collectionView=_collectionView - In the implementation block
@property (retain) _UIDiffableDataSourceOutlineSectionController * sectionController;                    //@synthesize sectionController=_sectionController - In the implementation block
@property (retain) UICollectionViewDiffableDataSource * diffableDataSource;                              //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (retain) UIButton * showAllButton;                                                             //@synthesize showAllButton=_showAllButton - In the implementation block
@property (nonatomic,retain) CNAccountsAndGroupsDataSource * dataSource;                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<CNAccountsAndGroupsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactStoreDidChange:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id<CNAccountsAndGroupsViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)groupsStyle;
-(void)setNeedsReload:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(CNAccountsAndGroupsDataSource *)dataSource;
-(void)resetShowButtonFont;
-(void)showAllButtonTapped;
-(id)doneButtonItem;
-(void)configureDataSource;
-(void)toggleSelectionOfItem:(id)arg1 ;
-(_UIDiffableDataSourceOutlineSectionController *)sectionController;
-(void)done:(id)arg1 ;
-(BOOL)tableViewNeedsReloadAfterResume;
-(void)setTableViewNeedsReloadAfterResume:(BOOL)arg1 ;
-(UIButton *)showAllButton;
-(void)setSectionController:(_UIDiffableDataSourceOutlineSectionController *)arg1 ;
-(void)setShowAllButton:(UIButton *)arg1 ;
-(BOOL)needsReload;
-(void)applicationDidResume;
-(void)setDelegate:(id<CNAccountsAndGroupsViewControllerDelegate>)arg1 ;
-(void)setDataSource:(CNAccountsAndGroupsDataSource *)arg1 ;
-(void)reloadData;
-(void)viewDidLoad;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)layout;
@end

