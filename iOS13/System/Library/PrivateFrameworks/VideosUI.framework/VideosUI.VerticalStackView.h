/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@interface VideosUI.VerticalStackView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	 platterView;
	 $__lazy_storage_$_expandableView;
	 $__lazy_storage_$_footerView;
	 $__lazy_storage_$_panelView;
	 layout;
	 $__lazy_storage_$_platterContainerView;
	 $__lazy_storage_$_hangerView;
	 panGesture;
	 topPlatterGradient;
	 bottomExpandableGradient;
	 bottomPlatterGradient;
	 lastExpandableViewFrame;
	 lastPanelFrame;
	 initialExpandableHeight;
	 maxExpandableHeight;
	 scrollDraggedOffset;
	 isInitialState;
	 isScrollable;

}
-(void)panGestureHandler:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
@end

