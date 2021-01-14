/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBFluidSwitcherRootSwitcherModifier.h>

@class SBAppLayout;

@interface SBFloatingFluidSwitcherRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier {

	BOOL _floatingSwitcherVisible;
	SBAppLayout* _activeAppLayout;
	long long _interfaceOrientation;
	long long _floatingConfiguration;
	CGRect _containerViewBounds;

}

@property (nonatomic,retain) SBAppLayout * activeAppLayout;                                              //@synthesize activeAppLayout=_activeAppLayout - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                                             //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) long long floatingConfiguration;                                            //@synthesize floatingConfiguration=_floatingConfiguration - In the implementation block
@property (assign,getter=isFloatingSwitcherVisible,nonatomic) BOOL floatingSwitcherVisible;              //@synthesize floatingSwitcherVisible=_floatingSwitcherVisible - In the implementation block
@property (assign,nonatomic) CGRect containerViewBounds;                                                 //@synthesize containerViewBounds=_containerViewBounds - In the implementation block
-(id)topMostLayoutElements;
-(BOOL)isFloatingSwitcherVisible;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(id)init;
-(id)transitionModifierForMainTransitionEvent:(id)arg1 ;
-(id)multitaskingModifierForEvent:(id)arg1 ;
-(id)handleEvent:(id)arg1 ;
-(id)removalModifierForRemovalEvent:(id)arg1 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(id)_newMultitaskingModifier;
-(CGRect)containerViewBounds;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg1 ;
-(id)swipeToKillModifierForSwipeToKillEvent:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)lowEndHardwareModifier;
-(long long)interfaceOrientation;
-(long long)floatingConfiguration;
-(id)insertionModifierForInsertionEvent:(id)arg1 ;
-(Class)_defaultMultitaskingModifierClass;
-(id)floorModifierForTransitionEvent:(id)arg1 ;
-(id)gestureModifierForGestureEvent:(id)arg1 ;
-(id)userScrollingModifierForScrollEvent:(id)arg1 ;
-(void)setFloatingSwitcherVisible:(BOOL)arg1 ;
-(void)setFloatingConfiguration:(long long)arg1 ;
-(id)_entityRemovalModifierForEvent:(id)arg1 ;
-(SBAppLayout *)activeAppLayout;
-(void)setActiveAppLayout:(SBAppLayout *)arg1 ;
-(void)setContainerViewBounds:(CGRect)arg1 ;
@end

