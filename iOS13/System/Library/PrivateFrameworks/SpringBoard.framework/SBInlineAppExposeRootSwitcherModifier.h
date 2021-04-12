/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)bundleIdentifier;
-(double)floatingDockHeight;
-(id)floorModifierForTransitionEvent:(id)arg1 ;
-(id)multitaskingModifierForEvent:(id)arg1 ;
-(id)newMultitaskingModifierFromMultitaskingModifier:(id)arg1 ;
-(id)insertionModifierForInsertionEvent:(id)arg1 ;
-(id)transitionModifierForInlineTransitionEvent:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 layoutRole:(long long)arg2 overlay:(BOOL)arg3 ;
-(void)setFullscreenCornerRadii:(UIRectCornerRadii)arg1 ;
-(UIRectCornerRadii)fullscreenCornerRadii;
@end

