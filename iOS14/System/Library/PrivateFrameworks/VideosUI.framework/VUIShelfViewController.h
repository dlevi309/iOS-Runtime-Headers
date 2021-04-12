/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setContainerView:(VUIShelfView *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(UICollectionView *)collectionView;
-(VUIShelfView *)containerView;
-(NSIndexPath *)focusedIndexPath;
-(void)setFocusedIndexPath:(NSIndexPath *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIView *)headerView;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithGridStyle:(long long)arg1 ;
-(long long)gridStyle;
-(void)_ensureScrollViewSnaps;
-(id)_findSnappingItemFromContentOffset:(inout CGPoint*)arg1 withVelocity:(CGPoint)arg2 ;
-(void)_snapTargetContentOffset:(inout CGPoint*)arg1 toItemIndexPath:(id)arg2 atItemOffset:(CGPoint)arg3 ;
-(void)_updateCollectionViewLayout:(BOOL)arg1 ;
-(void)updateContentOffsetWithTransitionCoordinator:(id)arg1 ;
@end

