/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVCollectionView.h>

@class _TVShelfViewLayout;

@interface _TVShelfView : _TVCollectionView {

	_TVShelfViewLayout* _shelfFlowLayout;

}

@property (nonatomic,retain) _TVShelfViewLayout * shelfFlowLayout;              //@synthesize shelfFlowLayout=_shelfFlowLayout - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(CGPoint)_contentOffsetForNewFrame:(CGRect)arg1 oldFrame:(CGRect)arg2 newContentSize:(CGSize)arg3 andOldContentSize:(CGSize)arg4 ;
-(id)initWithFrame:(CGRect)arg1 shelfViewLayout:(id)arg2 ;
-(_TVShelfViewLayout *)shelfFlowLayout;
-(UIEdgeInsets)_selectionMarginsForCell:(id)arg1 ;
-(UIEdgeInsets)selectionMarginsForCellAtIndexPath:(id)arg1 ;
-(CGRect)tv_augmentedSelectionFrameForFrame:(CGRect)arg1 ;
-(CGSize)tv_sizeThatFits:(CGSize)arg1 withContentInset:(UIEdgeInsets)arg2 ;
-(void)_updateLayoutForFocusedView:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)updateLayoutForFocusedView:(id)arg1 ;
-(void)setShelfFlowLayout:(_TVShelfViewLayout *)arg1 ;
@end

