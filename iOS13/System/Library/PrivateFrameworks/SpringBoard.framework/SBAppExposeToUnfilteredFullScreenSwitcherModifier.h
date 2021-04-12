/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBSwitcherModifier, SBAppLayout;

@interface SBAppExposeToUnfilteredFullScreenSwitcherModifier : SBTransitionSwitcherModifier {

	SBSwitcherModifier* _switcherToFullScreenModifier;
	SBAppLayout* _activeAppLayout;

}
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)handleEvent:(id)arg1 ;
-(id)opacitySettings;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)_isIndexFullScreenAppLayout:(unsigned long long)arg1 ;
-(id)topMostAppLayouts;
-(id)initWithTransitionID:(id)arg1 switcherToFullScreenModifier:(id)arg2 activeAppLayout:(id)arg3 ;
@end

