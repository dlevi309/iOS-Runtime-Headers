/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>

@class NSArray;

@interface SBOverrideAppLayoutsSwitcherModifier : SBSwitcherModifier {

	NSArray* _appLayouts;
	unsigned long long _appLayoutsGenerationCount;

}
-(unsigned long long)appLayoutsGenerationCount;
-(void)didMoveToParentModifier:(id)arg1 ;
-(void)setState:(long long)arg1 ;
-(id)appLayouts;
-(id)initWithAppLayouts:(id)arg1 ;
@end

