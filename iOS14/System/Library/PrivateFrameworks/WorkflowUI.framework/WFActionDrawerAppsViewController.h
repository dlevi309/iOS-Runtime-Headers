/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/WFActionDrawerStateConfigurable.h>

@class WFActionDrawerCoordinator, NSArray, UICollectionView, NSString;

@interface WFActionDrawerAppsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, WFActionDrawerStateConfigurable> {

	WFActionDrawerCoordinator* _coordinator;
	NSArray* _appItems;
	UICollectionView* _collectionView;

}

@property (nonatomic,__weak,readonly) WFActionDrawerCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) NSArray * appItems;                                            //@synthesize appItems=_appItems - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                             //@synthesize collectionView=_collectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id)initWithCoordinator:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(id)state;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(WFActionDrawerCoordinator *)coordinator;
-(NSArray *)appItems;
-(void)setAppItems:(NSArray *)arg1 ;
-(BOOL)moveToState:(id)arg1 animated:(BOOL)arg2 ;
-(long long)numberOfItemsWithWidth:(double)arg1 totalWidth:(double)arg2 minimumSpacing:(double)arg3 ;
-(double)insetForEqualSpacingWithCollectionViewWidth:(double)arg1 numberOfItems:(long long)arg2 itemSize:(double)arg3 ;
-(double)insetForCollectionViewWidth:(double)arg1 numberOfItems:(long long)arg2 itemSize:(double)arg3 spacing:(double)arg4 ;
-(void)updateAppItems;
-(void)fetchBundleIdentifiersFromActionRegistryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchBundleIdentifiersFromRecentDonationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)expectedCollectionViewWidth;
@end

