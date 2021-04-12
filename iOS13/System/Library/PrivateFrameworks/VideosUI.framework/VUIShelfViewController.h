/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/TVShelfViewLayoutDelegate.h>

@class UICollectionView, UIView, VUIShelfView, NSIndexPath, NSString;

@interface VUIShelfViewController : UIViewController <UICollectionViewDelegate, TVShelfViewLayoutDelegate> {

	BOOL _shouldUpdateBeforeLayout;
	UICollectionView* _collectionView;
	UIView* _headerView;
	long long _gridStyle;
	VUIShelfView* _containerView;
	NSIndexPath* _focusedIndexPath;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) VUIShelfView * containerView;                   //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSIndexPath * focusedIndexPath;                 //@synthesize focusedIndexPath=_focusedIndexPath - In the implementation block
@property (nonatomic,retain) UIView * headerView;                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) long long gridStyle;                          //@synthesize gridStyle=_gridStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(VUIShelfView *)containerView;
-(void)setContainerView:(VUIShelfView *)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(UICollectionView *)collectionView;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(void)setFocusedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)focusedIndexPath;
-(id)initWithGridStyle:(long long)arg1 ;
-(long long)gridStyle;
-(void)_ensureScrollViewSnaps;
-(id)_findSnappingItemFromContentOffset:(inout CGPoint*)arg1 withVelocity:(CGPoint)arg2 ;
-(void)_snapTargetContentOffset:(inout CGPoint*)arg1 toItemIndexPath:(id)arg2 atItemOffset:(CGPoint)arg3 ;
-(void)_updateCollectionViewLayout:(BOOL)arg1 ;
-(void)updateContentOffsetWithTransitionCoordinator:(id)arg1 ;
@end

