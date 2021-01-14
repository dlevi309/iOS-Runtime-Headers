/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>

@class SBFullScreenAppLayoutSwitcherModifier;

@interface SBAppUnderFloatingSwitcherSwitcherModifier : SBSwitcherModifier {

	SBFullScreenAppLayoutSwitcherModifier* _fullScreenAppLayoutModifier;

}
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(id)initWithActiveAppLayout:(id)arg1 ;
-(id)keyboardSuppressionMode;
-(BOOL)wantsAsynchronousSurfaceRetentionAssertion;
-(id)appLayoutsToResignActive;
-(BOOL)isHomeGrabberVisibleForIndex:(unsigned long long)arg1 ;
@end

