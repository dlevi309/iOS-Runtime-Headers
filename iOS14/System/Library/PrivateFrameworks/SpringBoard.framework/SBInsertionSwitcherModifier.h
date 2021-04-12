/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout;

@interface SBInsertionSwitcherModifier : SBSwitcherModifier {

	SBAppLayout* _appLayout;
	BOOL _isSimulatingPreInsertionState;
	CGPoint _contentOffsetBeforeInsertion;
	unsigned long long _phase;

}

@property (nonatomic,readonly) unsigned long long phase;              //@synthesize phase=_phase - In the implementation block
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)visibleAppLayouts;
-(id)initWithAppLayout:(id)arg1 ;
-(CGPoint)scrollViewContentOffset;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)phase;
-(id)handleInsertionEvent:(id)arg1 ;
-(void)_performBlockBySimulatingPreInsertionState:(/*^block*/id)arg1 ;
@end

