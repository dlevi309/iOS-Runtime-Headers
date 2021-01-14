/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<HULayoutAnchorProviding>)preferredFrameLayoutGuide;
-(id)initWithContentView:(id)arg1 ;
-(void)setPreferredFrameLayoutGuide:(id<HULayoutAnchorProviding>)arg1 ;
-(BOOL)hasSingleControlView;
-(void)updateConstraints;
-(void)didMoveToWindow;
-(UIView *)contentView;
-(void)_setupConstraintSet;
-(NAUILayoutConstraintSet *)constraintSet;
@end

