/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollAccessory.h>

@class UIView, NSInvocation, NSArray, UIScrollView, UIButton;

@interface _UIStaticScrollBar : UIView <UIScrollAccessory> {

	UIView* _dividerLine;
	NSInvocation* _invocation;
	NSArray* _constraints;
	BOOL _shouldInsetButtonsForIndex;
	UIScrollView* _scrollView;
	long long _edge;
	UIButton* _upButton;
	UIButton* _downButton;

}

@property (nonatomic,readonly) UIButton * upButton;                         //@synthesize upButton=_upButton - In the implementation block
@property (nonatomic,readonly) UIButton * downButton;                       //@synthesize downButton=_downButton - In the implementation block
@property (assign,nonatomic) BOOL shouldInsetButtonsForIndex;               //@synthesize shouldInsetButtonsForIndex=_shouldInsetButtonsForIndex - In the implementation block
@property (nonatomic,readonly) long long desiredAccessoryEdge; 
@property (assign,nonatomic,__weak) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) long long edge;                                //@synthesize edge=_edge - In the implementation block
@property (nonatomic,readonly) BOOL overlay; 
-(long long)edge;
-(unsigned long long)_axis;
-(void)setEdge:(long long)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(UIButton *)downButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)upButton;
-(void)_setupSubviewsIfNeeded;
-(id)_constraintsForEdge:(long long)arg1 ;
-(BOOL)shouldInsetButtonsForIndex;
-(void)update;
-(void)layoutSubviews;
-(void)updateConstraints;
-(BOOL)overlay;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(CGRect)centeringBounds;
-(void)setShouldInsetButtonsForIndex:(BOOL)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(UIScrollView *)scrollView;
-(long long)desiredAccessoryEdge;
@end

