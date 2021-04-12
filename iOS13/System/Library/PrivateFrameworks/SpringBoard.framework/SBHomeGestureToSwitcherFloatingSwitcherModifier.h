/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBSwitcherModifier, SBAppLayout, SBFluidSwitcherAnimationSettings;

@interface SBHomeGestureToSwitcherFloatingSwitcherModifier : SBTransitionSwitcherModifier {

	SBSwitcherModifier* _multitaskingModifier;
	SBAppLayout* _selectedAppLayout;
	SBFluidSwitcherAnimationSettings* _animationSettings;

}

@property (nonatomic,retain) SBSwitcherModifier * multitaskingModifier;                         //@synthesize multitaskingModifier=_multitaskingModifier - In the implementation block
@property (nonatomic,retain) SBAppLayout * selectedAppLayout;                                   //@synthesize selectedAppLayout=_selectedAppLayout - In the implementation block
@property (nonatomic,retain) SBFluidSwitcherAnimationSettings * animationSettings;              //@synthesize animationSettings=_animationSettings - In the implementation block
-(SBFluidSwitcherAnimationSettings *)animationSettings;
-(void)setAnimationSettings:(SBFluidSwitcherAnimationSettings *)arg1 ;
-(id)transitionWillBegin;
-(SBSwitcherModifier *)multitaskingModifier;
-(id)layoutSettings;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(long long)liveContentRasterizationStyle;
-(BOOL)wantsMinificationFilter;
-(SBAppLayout *)selectedAppLayout;
-(void)setSelectedAppLayout:(SBAppLayout *)arg1 ;
-(id)initWithTransitionID:(id)arg1 multitaskingModifier:(id)arg2 selectedAppLayout:(id)arg3 ;
-(void)setMultitaskingModifier:(SBSwitcherModifier *)arg1 ;
@end

