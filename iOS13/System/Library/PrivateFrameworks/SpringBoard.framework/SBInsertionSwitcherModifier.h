/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout, NSArray;

@interface SBInsertionSwitcherModifier : SBSwitcherModifier {

	SBAppLayout* _appLayout;
	BOOL _keepAppLayoutsBeforeInsertionInHierarchy;
	unsigned long long _indexToScrollToAfterInsertion;
	CGPoint _contentOffsetBeforeInsertion;
	NSArray* _appLayoutsVisibleBeforeInsertion;
	BOOL _updatesContentOffsetAfterInsertion;
	unsigned long long _phase;

}

@property (nonatomic,readonly) unsigned long long phase;                           //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) BOOL updatesContentOffsetAfterInsertion;              //@synthesize updatesContentOffsetAfterInsertion=_updatesContentOffsetAfterInsertion - In the implementation block
-(unsigned long long)phase;
-(CGPoint)scrollViewContentOffset;
-(id)appLayouts;
-(id)initWithAppLayout:(id)arg1 ;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(long long)layoutUpdateMode;
-(id)appLayoutsForInsertionOrRemoval;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(id)handleInsertionEvent:(id)arg1 ;
-(void)setUpdatesContentOffsetAfterInsertion:(BOOL)arg1 ;
-(BOOL)updatesContentOffsetAfterInsertion;
@end

