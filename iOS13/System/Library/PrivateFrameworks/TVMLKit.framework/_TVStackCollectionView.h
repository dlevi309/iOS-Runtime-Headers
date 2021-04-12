/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UICollectionView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSIndexPath, NSString;

@interface _TVStackCollectionView : UICollectionView <UIGestureRecognizerDelegate> {

	double _bottomPadding;
	UIEdgeInsets _gradientBoundsInsets;
	struct {
		unsigned layoutBelowDisabled : 1;
	}  _flags;
	NSIndexPath* _indexPathForLastFocusedItem;

}

@property (assign,setter=_setGradientBoundsInsets:,getter=_gradientBoundsInsets,nonatomic) UIEdgeInsets _gradientBoundsInsets; 
@property (nonatomic,copy,readonly) NSIndexPath * indexPathForLastFocusedItem;                                                              //@synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)layoutBelowIfNeeded;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)reloadData;
-(CGRect)_visibleBounds;
-(BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
-(void)_getGradientMaskBounds:(out CGRect*)arg1 startInsets:(out UIEdgeInsets*)arg2 endInsets:(out UIEdgeInsets*)arg3 intensities:(out UIEdgeInsets*)arg4 ;
-(UIEdgeInsets)_gradientBoundsInsets;
-(void)_performWithoutLayoutBelow:(/*^block*/id)arg1 ;
-(void)setBottomPaddingForVisibleBounds:(double)arg1 ;
-(void)_setGradientBoundsInsets:(UIEdgeInsets)arg1 ;
-(NSIndexPath *)indexPathForLastFocusedItem;
@end

