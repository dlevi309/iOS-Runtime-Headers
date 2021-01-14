/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBFluidSwitcherRootSwitcherModifier.h>

@class NSString;

@interface SBInlineAppExposeRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier {

	long long _layoutRole;
	BOOL _overlay;
	NSString* _bundleIdentifier;
	UIRectCornerRadii _fullscreenCornerRadii;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) UIRectCornerRadii fullscreenCornerRadii;              //@synthesize fullscreenCornerRadii=_fullscreenCornerRadii - In the implementation block
-(id)multitaskingModifierForEvent:(id)arg1 ;
-(id)removalModifierForRemovalEvent:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)_newMultitaskingModifier;
-(id)swipeToKillModifierForSwipeToKillEvent:(id)arg1 ;
-(id)insertionModifierForInsertionEvent:(id)arg1 ;
-(double)floatingDockHeight;
-(id)floorModifierForTransitionEvent:(id)arg1 ;
-(id)userScrollingModifierForScrollEvent:(id)arg1 ;
-(id)transitionModifierForInlineTransitionEvent:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 layoutRole:(long long)arg2 overlay:(BOOL)arg3 ;
-(void)setFullscreenCornerRadii:(UIRectCornerRadii)arg1 ;
-(UIRectCornerRadii)fullscreenCornerRadii;
@end

