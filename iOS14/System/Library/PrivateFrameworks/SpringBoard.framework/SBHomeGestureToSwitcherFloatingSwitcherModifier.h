/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)visibleAppLayouts;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(SBFluidSwitcherAnimationSettings *)animationSettings;
-(void)setAnimationSettings:(SBFluidSwitcherAnimationSettings *)arg1 ;
-(id)_layoutSettings;
-(id)transitionWillBegin;
-(SBSwitcherModifier *)multitaskingModifier;
-(SBAppLayout *)selectedAppLayout;
-(void)setSelectedAppLayout:(SBAppLayout *)arg1 ;
-(id)initWithTransitionID:(id)arg1 multitaskingModifier:(id)arg2 selectedAppLayout:(id)arg3 ;
-(void)setMultitaskingModifier:(SBSwitcherModifier *)arg1 ;
@end

