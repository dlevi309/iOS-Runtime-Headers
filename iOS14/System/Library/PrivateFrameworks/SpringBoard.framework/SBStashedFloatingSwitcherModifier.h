/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>

@class SBActiveAppLayoutFloatingSwitcherModifier;

@interface SBStashedFloatingSwitcherModifier : SBSwitcherModifier {

	SBActiveAppLayoutFloatingSwitcherModifier* _activeModifier;

}
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowVisible;
-(id)visibleAppLayouts;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(id)init;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
@end

