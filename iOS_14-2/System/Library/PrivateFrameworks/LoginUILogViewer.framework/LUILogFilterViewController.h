/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
*/

#import <LoginUILogViewer/LoginUILogViewer-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/LUILogFilterCurrentPredicateTableViewCellDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol LUILogFilterViewControllerDelegate;
@class LUILogFilterView, NSString;

@interface LUILogFilterViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UITableViewDelegate, UITableViewDataSource, LUILogFilterCurrentPredicateTableViewCellDelegate, UITextFieldDelegate> {

	id<LUILogFilterViewControllerDelegate> _delegate;
	LUILogFilterView* _filterView;

}

@property (nonatomic,retain) LUILogFilterView * filterView;                                       //@synthesize filterView=_filterView - In the implementation block
@property (assign,nonatomic,__weak) id<LUILogFilterViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(void)viewWillLayoutSubviews;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)setFilterView:(LUILogFilterView *)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id<LUILogFilterViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(LUILogFilterView *)filterView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)addButtonTapped:(id)arg1 ;
-(void)_setupButtons;
-(void)setDelegate:(id<LUILogFilterViewControllerDelegate>)arg1 ;
-(void)_setupTableView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)keyboardWillShow:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_setupCollectionView;
-(void)keyboardWillHide:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)predicateDataUpdated;
-(void)predicateTableViewCellDeleteButtonTapped:(id)arg1 ;
-(void)applyButtonTapped:(id)arg1 ;
-(id)predicateValueCandidates;
-(id)sizeArrayWithStrings:(id)arg1 ;
-(id)predicateKeyCandidates;
-(id)predicateComparisonCandidates;
-(void)_clearCellsSelection;
-(void)_shakeInputView:(id)arg1 ;
-(void)_clearPredicateInput;
-(void)_updatePredicateText;
-(id)predicateValueCandidatesSize;
@end

