/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

