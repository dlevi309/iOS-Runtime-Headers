/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBFullScreenToHomeIconZoomSwitcherModifier;

@interface SBPIPRestoreToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _fromAppLayout;
	SBAppLayout* _toAppLayout;
	SBFullScreenToHomeIconZoomSwitcherModifier* _zoomModifier;

}
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)visibleAppLayouts;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)_layoutSettings;
-(BOOL)isHomeGrabberVisibleForIndex:(unsigned long long)arg1 ;
-(id)transitionWillBegin;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(BOOL)completesWhenChildrenComplete;
-(id)initWithTransitionID:(id)arg1 zoomModifier:(id)arg2 fromAppLayout:(id)arg3 toAppLayout:(id)arg4 ;
-(BOOL)_isFromAppLayout:(unsigned long long)arg1 ;
-(BOOL)_isToAppLayout:(unsigned long long)arg1 ;
@end

