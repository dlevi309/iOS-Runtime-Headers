/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBExternalInlineAppExposeTransitionSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _fromAppLayout;
	SBAppLayout* _toAppLayout;

}
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(id)transitionWillBegin;
-(id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 ;
@end

