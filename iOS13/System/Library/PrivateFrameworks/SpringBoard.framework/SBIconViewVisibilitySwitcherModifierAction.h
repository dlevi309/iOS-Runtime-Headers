/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierAction.h>

@class SBAppLayout, SBFFluidBehaviorSettings, NSSet;

@interface SBIconViewVisibilitySwitcherModifierAction : SBSwitcherModifierAction {

	BOOL _visible;
	SBAppLayout* _appLayout;
	SBFFluidBehaviorSettings* _animationSettings;
	NSSet* _excludedIconLocations;

}

@property (nonatomic,readonly) SBAppLayout * appLayout;                                   //@synthesize appLayout=_appLayout - In the implementation block
@property (nonatomic,readonly) SBFFluidBehaviorSettings * animationSettings;              //@synthesize animationSettings=_animationSettings - In the implementation block
@property (nonatomic,readonly) NSSet * excludedIconLocations;                             //@synthesize excludedIconLocations=_excludedIconLocations - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible;                             //@synthesize visible=_visible - In the implementation block
-(long long)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isVisible;
-(SBFFluidBehaviorSettings *)animationSettings;
-(id)initWithAppLayout:(id)arg1 visible:(BOOL)arg2 animationSettings:(id)arg3 excludedIconLocations:(id)arg4 ;
-(SBAppLayout *)appLayout;
-(NSSet *)excludedIconLocations;
@end

