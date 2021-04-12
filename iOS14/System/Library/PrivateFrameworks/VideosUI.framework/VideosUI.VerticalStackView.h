/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@interface VideosUI.VerticalStackView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate> {

	 platterView;
	 $__lazy_storage_$_expandableView;
	 $__lazy_storage_$_panelView;
	 footerView;
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
	 isScrollable;
	 isPartiallyExpanded;

}
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)panGestureHandler:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
@end

