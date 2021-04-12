/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UICollectionView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UILongPressGestureRecognizer, NSIndexPath, NSString;

@interface _TVCollectionView : UICollectionView <UIGestureRecognizerDelegate> {

	UILongPressGestureRecognizer* _longPressRecognizer;
	double _bottomPadding;
	struct {
		unsigned _respondsToDidPlayItem : 1;
		unsigned _respondsToDidLongPressItem : 1;
		unsigned _respondsToCanBecomeFocused : 1;
	}  _delegateFlags;
	UIEdgeInsets _gradientBoundsInsets;
	struct {
		unsigned layoutBelowDisabled : 1;
	}  _flags;
	NSIndexPath* _indexPathForLastFocusedItem;

}

@property (assign,nonatomic,__weak) id<_TVCollectionViewDelegate> delegate; 
@property (nonatomic,copy,readonly) NSIndexPath * indexPathForLastFocusedItem;              //@synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<_TVCollectionViewDelegate>)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)layoutBelowIfNeeded;
-(void)_notifyDidScroll;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)reloadData;
-(CGRect)_visibleBounds;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)_getGradientMaskBounds:(out CGRect*)arg1 startInsets:(out UIEdgeInsets*)arg2 endInsets:(out UIEdgeInsets*)arg3 intensities:(out UIEdgeInsets*)arg4 ;
-(void)_longPressAction:(id)arg1 ;
-(void)_playButtonAction:(id)arg1 ;
-(UIEdgeInsets)_gradientBoundsInsets;
-(void)_performWithoutLayoutBelow:(/*^block*/id)arg1 ;
-(void)setBottomPaddingForVisibleBounds:(double)arg1 ;
-(void)_setGradientBoundsInsets:(UIEdgeInsets)arg1 ;
-(NSIndexPath *)indexPathForLastFocusedItem;
-(void)_performBlockWithLongPressedCellIndexPath:(/*^block*/id)arg1 ;
-(void)_performBlockWithFocusedCellIndexPath:(/*^block*/id)arg1 ;
@end

