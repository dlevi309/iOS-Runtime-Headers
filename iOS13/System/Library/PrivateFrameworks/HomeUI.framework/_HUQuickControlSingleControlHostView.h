/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIView.h>

@protocol HULayoutAnchorProviding;
@class UIView, NAUILayoutConstraintSet;

@interface _HUQuickControlSingleControlHostView : UIView {

	id<HULayoutAnchorProviding> _preferredFrameLayoutGuide;
	UIView* _contentView;
	NAUILayoutConstraintSet* _constraintSet;

}

@property (nonatomic,readonly) NAUILayoutConstraintSet * constraintSet;                          //@synthesize constraintSet=_constraintSet - In the implementation block
@property (nonatomic,retain) id<HULayoutAnchorProviding> preferredFrameLayoutGuide;              //@synthesize preferredFrameLayoutGuide=_preferredFrameLayoutGuide - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                             //@synthesize contentView=_contentView - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)updateConstraints;
-(void)didMoveToWindow;
-(id<HULayoutAnchorProviding>)preferredFrameLayoutGuide;
-(void)setPreferredFrameLayoutGuide:(id<HULayoutAnchorProviding>)arg1 ;
-(BOOL)hasSingleControlView;
-(void)_setupConstraintSet;
-(NAUILayoutConstraintSet *)constraintSet;
@end

