/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(id)handleEvent:(id)arg1 ;
-(long long)floatingConfiguration;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(void)setFloatingSwitcherVisible:(BOOL)arg1 ;
-(void)setFloatingConfiguration:(long long)arg1 ;
-(CGRect)containerViewBounds;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(BOOL)isFloatingSwitcherVisible;
-(id)transitionModifierForMainTransitionEvent:(id)arg1 ;
-(id)floorModifierForTransitionEvent:(id)arg1 ;
-(id)multitaskingModifierForEvent:(id)arg1 ;
-(id)newMultitaskingModifierFromMultitaskingModifier:(id)arg1 ;
-(Class)_defaultMultitaskingModifierClass;
-(id)gestureModifierForGestureEvent:(id)arg1 ;
-(id)appExposeModifierForAppExposeEvent:(id)arg1 ;
-(id)insertionModifierForInsertionEvent:(id)arg1 ;
-(id)tetheredRemovalModifierForTetheredRemovalEvent:(id)arg1 ;
-(id)tetheredInsertionModifierFortetheredInsertionEvent:(id)arg1 ;
-(id)lowEndHardwareModifier;
-(SBAppLayout *)activeAppLayout;
-(void)setActiveAppLayout:(SBAppLayout *)arg1 ;
-(id)entityRemovalModifierForEvent:(id)arg1 ;
-(void)setContainerViewBounds:(CGRect)arg1 ;
@end

