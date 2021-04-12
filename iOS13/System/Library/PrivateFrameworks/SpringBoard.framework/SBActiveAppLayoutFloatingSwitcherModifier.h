/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>

@class SBStackedFloatingSwitcherModifier, _SBActiveAppFloorFloatingSwitcherModifier;

@interface SBActiveAppLayoutFloatingSwitcherModifier : SBSwitcherModifier {

	SBStackedFloatingSwitcherModifier* _stackedModifier;
	_SBActiveAppFloorFloatingSwitcherModifier* _floorModifier;

}
-(id)initWithActiveAppLayout:(id)arg1 floatingConfiguration:(long long)arg2 ;
@end

