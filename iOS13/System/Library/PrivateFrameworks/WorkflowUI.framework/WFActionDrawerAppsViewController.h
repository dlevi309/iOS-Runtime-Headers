/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/WFActionDrawerStateConfigurable.h>

@protocol WFActionDrawerAppsViewControllerDelegate;
@class WFActionDrawerResultsController, NSArray, UICollectionView, NSString;

@interface WFActionDrawerAppsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, WFActionDrawerStateConfigurable> {

	id<WFActionDrawerAppsViewControllerDelegate> _delegate;
	WFActionDrawerResultsController* _resultsController;
	NSArray* _appItems;
	UICollectionView* _collectionView;

}

@property (nonatomic,retain) WFActionDrawerResultsController * resultsController;                       //@synthesize resultsController=_resultsController - In the implementation block
@property (nonatomic,retain) NSArray * appItems;                                                        //@synthesize appItems=_appItems - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                         //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionDrawerAppsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFActionDrawerAppsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFActionDrawerAppsViewControllerDelegate>)arg1 ;
-(id)state;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(WFActionDrawerResultsController *)resultsController;
-(void)setResultsController:(WFActionDrawerResultsController *)arg1 ;
-(NSArray *)appItems;
-(void)setAppItems:(NSArray *)arg1 ;
-(BOOL)moveToState:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithActionDrawerResultsController:(id)arg1 ;
-(long long)numberOfItemsWithWidth:(double)arg1 totalWidth:(double)arg2 minimumSpacing:(double)arg3 ;
-(double)insetForEqualSpacingWithCollectionViewWidth:(double)arg1 numberOfItems:(long long)arg2 itemSize:(double)arg3 ;
-(double)insetForCollectionViewWidth:(double)arg1 numberOfItems:(long long)arg2 itemSize:(double)arg3 spacing:(double)arg4 ;
-(void)updateAppItems;
-(void)fetchBundleIdentifiersFromActionRegistryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchBundleIdentifiersFromRecentDonationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)expectedCollectionViewWidth;
@end

