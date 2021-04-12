/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>

@class SBFullScreenAppLayoutSwitcherModifier;

@interface SBAppUnderFloatingSwitcherSwitcherModifier : SBSwitcherModifier {

	SBFullScreenAppLayoutSwitcherModifier* _fullScreenAppLayoutModifier;

}
-(long long)liveContentRasterizationStyle;
-(BOOL)wantsMinificationFilter;
-(BOOL)isHomeGrabberVisible;
-(BOOL)wantsAsynchronousSurfaceRetentionAssertion;
-(BOOL)wantsResignActiveAssertion;
-(long long)sceneDeactivationReason;
-(long long)keyboardSuppressionMode;
-(id)initWithActiveAppLayout:(id)arg1 ;
@end

