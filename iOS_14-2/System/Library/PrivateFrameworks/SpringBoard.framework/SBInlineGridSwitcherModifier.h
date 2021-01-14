/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>

@class NSString, SBGridLayoutSwitcherModifier, _SBInlineGridFloorSwitcherModifier;

@interface SBInlineGridSwitcherModifier : SBSwitcherModifier {

	NSString* _bundleIdentifier;
	unsigned long long _scrollAxis;
	CGSize _fixedCardSize;
	double _cardScale;
	BOOL _floating;
	BOOL _overlay;
	SBGridLayoutSwitcherModifier* _gridLayoutModifier;
	_SBInlineGridFloorSwitcherModifier* _floorModifier;
	unsigned long long _initialScrollAxis;
	CGSize _initialCardSize;
	double _initialCardScale;
	BOOL _hasScrolledToInitialAppLayoutForTransitionIntoSwitcher;
	unsigned long long _ongoingAppLayoutRemovals;

}
-(id)visibleAppLayouts;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(id)handleTapAppLayoutEvent:(id)arg1 ;
-(id)handleTapOutsideToDismissEvent:(id)arg1 ;
-(unsigned long long)numberOfRows;
-(unsigned long long)scrollAxis;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 scrollAxis:(unsigned long long)arg2 fixedCardSize:(CGSize)arg3 cardScale:(double)arg4 floating:(BOOL)arg5 overlay:(BOOL)arg6 ;
-(double)cardScale;
-(CGSize)fixedCardSize;
-(id)handleInlineTransitionEvent:(id)arg1 ;
-(id)gridLayoutModifier;
@end

