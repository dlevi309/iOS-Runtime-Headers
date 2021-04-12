/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)handleGestureEvent:(id)arg1 ;
-(void)didMoveToParentModifier:(id)arg1 ;
-(CGRect)containerViewBounds;
-(long long)layoutUpdateMode;
-(BOOL)isFloatingDockGesturePossible;
-(long long)currentFinalDestination;
-(id)initWithGestureID:(id)arg1 initialFloatingConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3 ;
-(void)_updateForGestureDidBeginOrChangeWithEvent:(id)arg1 ;
@end

