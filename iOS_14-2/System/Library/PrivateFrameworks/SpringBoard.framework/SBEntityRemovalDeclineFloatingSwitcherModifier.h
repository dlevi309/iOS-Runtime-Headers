/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBEntityRemovalDeclineFloatingSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _fromAppLayout;
	SBAppLayout* _toAppLayout;
	long long _floatingConfiguration;

}
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)topMostLayoutElements;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)visibleAppLayouts;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(CGRect)containerViewBounds;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(id)_layoutSettings;
-(id)transitionWillBegin;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(BOOL)_isIndexFromAppLayout:(unsigned long long)arg1 ;
-(BOOL)_isIndexToAppLayout:(unsigned long long)arg1 ;
-(id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 floatingConfiguration:(long long)arg4 ;
@end

