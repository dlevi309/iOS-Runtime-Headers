/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifier.h>
#import <libobjc.A.dylib/SBHomeGestureDockSwitcherModifierDelegate.h>

@class SBHomeGestureDockSwitcherModifier, NSString;

@interface SBExternalHomeGestureFloatingSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate> {

	SBHomeGestureDockSwitcherModifier* _dockModifier;
	long long _initialFloatingConfiguration;
	long long _interfaceOrientation;
	BOOL _stashed;
	CGRect _stashedContainerViewBounds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(CGRect)containerViewBounds;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)appLayoutsToResignActive;
-(BOOL)isFloatingDockGesturePossible;
-(id)handleGestureEvent:(id)arg1 ;
-(long long)currentFinalDestination;
-(id)initWithGestureID:(id)arg1 initialFloatingConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3 ;
-(void)_updateForGestureDidBeginOrChangeWithEvent:(id)arg1 ;
@end

