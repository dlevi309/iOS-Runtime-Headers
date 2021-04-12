/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>

@class SBGridLayoutSwitcherModifier, _SBGridFloorSwitcherModifier, SBAppLayout;

@interface SBGridSwitcherModifier : SBSwitcherModifier {

	SBGridLayoutSwitcherModifier* _gridLayoutModifier;
	_SBGridFloorSwitcherModifier* _floorModifier;
	unsigned long long _ongoingAppLayoutRemovals;
	SBAppLayout* _activeAppLayoutInSwitcher;

}
-(id)handleTapAppLayoutEvent:(id)arg1 ;
-(id)handleTapOutsideToDismissEvent:(id)arg1 ;
-(unsigned long long)numberOfRows;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)gridLayoutModifier;
@end

