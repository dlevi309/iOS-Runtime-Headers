/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class NSString, SBAppExposeGridSwitcherModifier;

@interface SBAppExposeToHomeSwitcherModifier : SBTransitionSwitcherModifier {

	long long _direction;
	NSString* _bundleIdentifier;
	SBAppExposeGridSwitcherModifier* _appExposeModifier;

}
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(double)plusButtonAlpha;
-(id)transitionDidEnd;
-(BOOL)_isEffectivelyHome;
-(id)transitionWillBegin;
-(id)initWithTransitionID:(id)arg1 direction:(long long)arg2 bundleIdentifier:(id)arg3 appExposeModifier:(id)arg4 ;
-(id)_newAppExposeModifier;
@end

