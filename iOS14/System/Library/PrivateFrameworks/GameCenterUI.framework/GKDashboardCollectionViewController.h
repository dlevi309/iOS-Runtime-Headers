/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKLoadingViewController.h>
#import <libobjc.A.dylib/NSPopoverDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class UICollectionView, GKCollectionDataSource, NSMutableIndexSet, GKNoContentView, NSLayoutConstraint, UIView, NSString;

@interface GKDashboardCollectionViewController : GKLoadingViewController <NSPopoverDelegate, UIAdaptivePresentationControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {

	BOOL _autoWidthUsesTwoColumnsWhenSpace;
	UICollectionView* _collectionView;
	GKCollectionDataSource* _dataSource;
	NSMutableIndexSet* _sectionsToReload;
	GKNoContentView* _noContentView;
	/*^block*/id _dismissHandler;
	NSLayoutConstraint* _keyboardConstraint;
	double _keyboardConstraintDefaultConstant;
	UIView* _keyboardAdjustedView;
	UIView* _collectionContainerView;
	UIEdgeInsets _contentInsetsBeforeKeyboard;
	UIEdgeInsets _scrollInsetsBeforeKeyboard;

}

@property (nonatomic,retain) UICollectionView * collectionView;                           //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsetsBeforeKeyboard;                    //@synthesize contentInsetsBeforeKeyboard=_contentInsetsBeforeKeyboard - In the implementation block
@property (assign,nonatomic) UIEdgeInsets scrollInsetsBeforeKeyboard;                     //@synthesize scrollInsetsBeforeKeyboard=_scrollInsetsBeforeKeyboard - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * keyboardConstraint;              //@synthesize keyboardConstraint=_keyboardConstraint - In the implementation block
@property (assign,nonatomic) double keyboardConstraintDefaultConstant;                    //@synthesize keyboardConstraintDefaultConstant=_keyboardConstraintDefaultConstant - In the implementation block
@property (assign,nonatomic,__weak) UIView * keyboardAdjustedView;                        //@synthesize keyboardAdjustedView=_keyboardAdjustedView - In the implementation block
@property (assign,nonatomic,__weak) UIView * collectionContainerView;                     //@synthesize collectionContainerView=_collectionContainerView - In the implementation block
@property (nonatomic,readonly) BOOL isLoading; 
@property (nonatomic,retain) GKCollectionDataSource * dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL autoWidthUsesTwoColumnsWhenSpace;                       //@synthesize autoWidthUsesTwoColumnsWhenSpace=_autoWidthUsesTwoColumnsWhenSpace - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * sectionsToReload;                        //@synthesize sectionsToReload=_sectionsToReload - In the implementation block
@property (nonatomic,retain) GKNoContentView * noContentView;                             //@synthesize noContentView=_noContentView - In the implementation block
@property (nonatomic,copy) id dismissHandler;                                             //@synthesize dismissHandler=_dismissHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setupDataSource;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)preferredFocusEnvironments;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)isLoading;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)hasData;
-(void)setDismissHandler:(id)arg1 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(GKCollectionDataSource *)dataSource;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)setAutoWidthColumns:(long long)arg1 ;
-(void)setToHorizontalLayout:(BOOL)arg1 ;
-(void)setAutoWidthUsesTwoColumnsWhenSpace:(BOOL)arg1 ;
-(void)setNeedsRefresh;
-(void)dataUpdated:(BOOL)arg1 withError:(id)arg2 ;
-(void)setupNoContentView:(id)arg1 withError:(id)arg2 ;
-(void)loadData;
-(void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2 ;
-(id)horizontalCollectionViewLayout;
-(id)verticalCollectionViewLayout;
-(void)createCollectionViewInsideView:(id)arg1 ;
-(void)setKeyboardConstraintDefaultConstant:(double)arg1 ;
-(void)setKeyboardAdjustedView:(UIView *)arg1 ;
-(void)prepareForAutomaticTwoColumnLayout;
-(void)hideNoContentPlaceholder;
-(void)showNoContentPlaceholderForError:(id)arg1 ;
-(void)clearSelectionForCollectionView:(id)arg1 ;
-(double)keyboardConstraintDefaultConstant;
-(NSLayoutConstraint *)keyboardConstraint;
-(void)didEnterRefreshingState;
-(void)didExitRefreshingState;
-(void)popoverDidClose:(id)arg1 ;
-(void)windowDidEndSheet:(id)arg1 ;
-(BOOL)autoWidthUsesTwoColumnsWhenSpace;
-(NSMutableIndexSet *)sectionsToReload;
-(void)setSectionsToReload:(NSMutableIndexSet *)arg1 ;
-(void)setKeyboardConstraint:(NSLayoutConstraint *)arg1 ;
-(UIEdgeInsets)contentInsetsBeforeKeyboard;
-(void)setContentInsetsBeforeKeyboard:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)scrollInsetsBeforeKeyboard;
-(void)setScrollInsetsBeforeKeyboard:(UIEdgeInsets)arg1 ;
-(UIView *)keyboardAdjustedView;
-(UIView *)collectionContainerView;
-(void)setCollectionContainerView:(UIView *)arg1 ;
-(id)dismissHandler;
-(void)setDataSource:(GKCollectionDataSource *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)clearSelection;
-(void)keyboardWillHide:(id)arg1 ;
-(void)didEnterLoadingState;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setNoContentView:(GKNoContentView *)arg1 ;
-(GKNoContentView *)noContentView;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2 ;
@end

