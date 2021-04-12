/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierAction.h>

@class SBAppLayout;

@interface SBIconOverlayVisibilitySwitcherModifierAction : SBSwitcherModifierAction {

	BOOL _visible;
	SBAppLayout* _appLayout;

}

@property (nonatomic,readonly) SBAppLayout * appLayout;                    //@synthesize appLayout=_appLayout - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible;              //@synthesize visible=_visible - In the implementation block
-(long long)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isVisible;
-(SBAppLayout *)appLayout;
-(id)initWithAppLayout:(id)arg1 visible:(BOOL)arg2 ;
@end

