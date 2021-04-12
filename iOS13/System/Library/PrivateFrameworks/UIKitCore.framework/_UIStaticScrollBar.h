/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollAccessory.h>

@class UIButton, UIView, NSInvocation, NSArray, UIScrollView;

@interface _UIStaticScrollBar : UIView <UIScrollAccessory> {

	UIButton* _upButton;
	UIButton* _downButton;
	UIView* _dividerLine;
	NSInvocation* _invocation;
	NSArray* _constraints;
	BOOL _shouldInsetButtonsForIndex;
	UIScrollView* _scrollView;
	long long _edge;

}

@property (assign,nonatomic) BOOL shouldInsetButtonsForIndex;               //@synthesize shouldInsetButtonsForIndex=_shouldInsetButtonsForIndex - In the implementation block
@property (nonatomic,readonly) long long desiredAccessoryEdge; 
@property (assign,nonatomic,__weak) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) long long edge;                                //@synthesize edge=_edge - In the implementation block
@property (nonatomic,readonly) BOOL overlay; 
-(BOOL)overlay;
-(void)update;
-(unsigned long long)_axis;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)willMoveToWindow:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setEdge:(long long)arg1 ;
-(long long)edge;
-(CGRect)centeringBounds;
-(void)setShouldInsetButtonsForIndex:(BOOL)arg1 ;
-(long long)desiredAccessoryEdge;
-(void)buttonTapped:(id)arg1 ;
-(void)_setupSubviewsIfNeeded;
-(id)_constraintsForEdge:(long long)arg1 ;
-(BOOL)shouldInsetButtonsForIndex;
@end

