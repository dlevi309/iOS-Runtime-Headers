/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canBecomeFocused;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(CGRect)_visibleBounds;
-(void)setDelegate:(id<_TVCollectionViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)reloadData;
-(void)_notifyDidScroll;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)layoutBelowIfNeeded;
-(void)_getGradientMaskBounds:(out CGRect*)arg1 startInsets:(out UIEdgeInsets*)arg2 endInsets:(out UIEdgeInsets*)arg3 intensities:(out UIEdgeInsets*)arg4 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_longPressAction:(id)arg1 ;
-(void)_performBlockWithLongPressedCellIndexPath:(/*^block*/id)arg1 ;
-(void)_performBlockWithFocusedCellIndexPath:(/*^block*/id)arg1 ;
-(void)_performWithoutLayoutBelow:(/*^block*/id)arg1 ;
-(void)_playButtonAction:(id)arg1 ;
-(void)setBottomPaddingForVisibleBounds:(double)arg1 ;
-(void)_setGradientBoundsInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)_gradientBoundsInsets;
-(NSIndexPath *)indexPathForLastFocusedItem;
@end

