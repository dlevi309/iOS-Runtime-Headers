/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, NSString, SBAppExposeGridSwitcherModifier, SBSwitcherModifier, SBRouteToAppExposeSwitcherModifier, NSArray;

@interface SBAppExposeToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {

	long long _direction;
	SBAppLayout* _fullScreenAppLayout;
	SBAppLayout* _floatingAppLayout;
	NSString* _bundleIdentifier;
	SBAppExposeGridSwitcherModifier* _appExposeModifier;
	SBSwitcherModifier* _fullscreenModifier;
	SBRouteToAppExposeSwitcherModifier* _routeToAppExposeModifier;
	BOOL _isSimulatingPreTransitionState;
	NSArray* _appLayoutsBeforeTransition;

}
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)visibleAppLayouts;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(double)plusButtonAlpha;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(id)transitionDidEnd;
-(id)transitionWillBegin;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)appLayouts;
-(id)initWithTransitionID:(id)arg1 direction:(long long)arg2 fullScreenAppLayout:(id)arg3 floatingAppLayout:(id)arg4 bundleIdentifier:(id)arg5 appExposeModifier:(id)arg6 fullScreenModifier:(id)arg7 ;
-(id)_newAppExposeModifier;
-(BOOL)_isEffectivelyFullScreen;
-(BOOL)_isIndexActive:(unsigned long long)arg1 ;
-(void)_performBlockBySimulatingPreTransitionState:(/*^block*/id)arg1 ;
@end

