/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier, NSSet;

@interface SBRemovalSwitcherModifier : SBSwitcherModifier {

	SBAppLayout* _appLayout;
	long long _reason;
	SBSwitcherModifier* _multitaskingModifier;
	BOOL _simulatingPostRemovalState;
	unsigned long long _indexToScrollToAfterRemoval;
	unsigned long long _indexOfAppLayoutPriorToRemoval;
	NSSet* _visibleAppLayoutsPriorToRemoval;
	unsigned long long _phase;

}
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)topMostLayoutElements;
-(id)visibleAppLayouts;
-(CGPoint)scrollViewContentOffset;
-(id)handleRemovalEvent:(id)arg1 ;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(id)initWithAppLayout:(id)arg1 reason:(long long)arg2 ;
-(id)handleInsertionEvent:(id)arg1 ;
-(void)_performBlockWhileSimulatingPostRemovalAppLayoutState:(/*^block*/id)arg1 ;
@end

