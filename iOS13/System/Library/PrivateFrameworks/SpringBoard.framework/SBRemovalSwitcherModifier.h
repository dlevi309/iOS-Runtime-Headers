/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>

@protocol SBFluidSwitcherScrollProviding;
@class SBAppLayout, SBSwitcherModifier;

@interface SBRemovalSwitcherModifier : SBSwitcherModifier {

	SBAppLayout* _appLayout;
	long long _reason;
	SBSwitcherModifier*<SBFluidSwitcherScrollProviding> _multitaskingModifier;
	BOOL _simulatingPostRemovalState;
	unsigned long long _indexToScrollToAfterRemoval;
	unsigned long long _indexOfAppLayoutPriorToRemoval;
	unsigned long long _phase;

}
-(CGPoint)scrollViewContentOffset;
-(id)appLayouts;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(id)topMostAppLayouts;
-(long long)layoutUpdateMode;
-(id)appLayoutsForInsertionOrRemoval;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)initWithAppLayout:(id)arg1 reason:(long long)arg2 multitaskingModifier:(id)arg3 ;
-(void)_performBlockWhileSimulatingPostRemovalAppLayoutState:(/*^block*/id)arg1 ;
@end

