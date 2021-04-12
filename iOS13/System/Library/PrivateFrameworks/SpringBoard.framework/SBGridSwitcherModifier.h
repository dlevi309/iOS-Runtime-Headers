/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>
#import <libobjc.A.dylib/SBGridSwitcherScrollProviding.h>

@protocol SBFluidSwitcherScrollProvidingDelegate;
@class SBGridLayoutSwitcherModifier, _SBGridFloorSwitcherModifier, SBAppLayout, NSString;

@interface SBGridSwitcherModifier : SBSwitcherModifier <SBGridSwitcherScrollProviding> {

	SBGridLayoutSwitcherModifier* _gridLayoutModifier;
	_SBGridFloorSwitcherModifier* _floorModifier;
	unsigned long long _ongoingAppLayoutRemovals;
	SBAppLayout* _activeAppLayoutInSwitcher;
	id<SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBFluidSwitcherScrollProvidingDelegate> scrollDelegate;              //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfRows; 
@property (nonatomic,readonly) double effectiveHorizontalSpacing; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(unsigned long long)numberOfRows;
-(id<SBFluidSwitcherScrollProvidingDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id<SBFluidSwitcherScrollProvidingDelegate>)arg1 ;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)handleTapAppLayoutEvent:(id)arg1 ;
-(id)handleTapOutsideToDismissEvent:(id)arg1 ;
-(id)gridLayoutModifier;
-(double)effectiveHorizontalSpacing;
@end

