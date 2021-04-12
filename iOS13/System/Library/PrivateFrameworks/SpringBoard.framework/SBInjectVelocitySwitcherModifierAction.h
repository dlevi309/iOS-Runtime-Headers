/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifierAction.h>

@class SBAppLayout;

@interface SBInjectVelocitySwitcherModifierAction : SBSwitcherModifierAction {

	SBAppLayout* _appLayout;
	CGPoint _velocity;

}

@property (nonatomic,readonly) CGPoint velocity;                     //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,readonly) SBAppLayout * appLayout;              //@synthesize appLayout=_appLayout - In the implementation block
-(long long)type;
-(CGPoint)velocity;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBAppLayout *)appLayout;
-(id)initWithVelocity:(CGPoint)arg1 appLayout:(id)arg2 ;
@end

