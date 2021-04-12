/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierAction.h>

@class SBAppLayout;

@interface SBMatchMoveToIconViewSwitcherModifierAction : SBSwitcherModifierAction {

	BOOL _active;
	SBAppLayout* _appLayout;

}

@property (nonatomic,readonly) SBAppLayout * appLayout;                  //@synthesize appLayout=_appLayout - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active;              //@synthesize active=_active - In the implementation block
-(long long)type;
-(BOOL)isActive;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBAppLayout *)appLayout;
-(id)initWithAppLayout:(id)arg1 active:(BOOL)arg2 ;
@end

