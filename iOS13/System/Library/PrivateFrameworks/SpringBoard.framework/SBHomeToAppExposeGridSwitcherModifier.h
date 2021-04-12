/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBHomeToGridSwitcherModifier;

@interface SBHomeToAppExposeGridSwitcherModifier : SBTransitionSwitcherModifier {

	SBHomeToGridSwitcherModifier* _homeToGridModifier;

}
-(id)handleEvent:(id)arg1 ;
-(void)_invalidateChildActionIfNeeded:(id)arg1 ;
-(id)initWithTransitionID:(id)arg1 homeToGridModifier:(id)arg2 ;
@end

