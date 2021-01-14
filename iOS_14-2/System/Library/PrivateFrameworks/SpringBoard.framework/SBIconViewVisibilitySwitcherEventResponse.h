/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@class SBAppLayout, SBFFluidBehaviorSettings, NSSet;

@interface SBIconViewVisibilitySwitcherEventResponse : SBSwitcherModifierEventResponse {

	BOOL _visible;
	SBAppLayout* _appLayout;
	SBFFluidBehaviorSettings* _animationSettings;
	NSSet* _excludedIconLocations;

}

@property (nonatomic,readonly) SBAppLayout * appLayout;                                   //@synthesize appLayout=_appLayout - In the implementation block
@property (nonatomic,readonly) SBFFluidBehaviorSettings * animationSettings;              //@synthesize animationSettings=_animationSettings - In the implementation block
@property (nonatomic,readonly) NSSet * excludedIconLocations;                             //@synthesize excludedIconLocations=_excludedIconLocations - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible;                             //@synthesize visible=_visible - In the implementation block
-(SBAppLayout *)appLayout;
-(SBFFluidBehaviorSettings *)animationSettings;
-(id)initWithAppLayout:(id)arg1 visible:(BOOL)arg2 animationSettings:(id)arg3 excludedIconLocations:(id)arg4 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isVisible;
-(long long)type;
-(NSSet *)excludedIconLocations;
@end

