/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierAction.h>

@class SBAppLayout;

@interface SBBlurItemContainerSwitcherModifierAction : SBSwitcherModifierAction {

	BOOL _shouldBlur;
	SBAppLayout* _appLayout;

}

@property (nonatomic,readonly) SBAppLayout * appLayout;              //@synthesize appLayout=_appLayout - In the implementation block
@property (nonatomic,readonly) BOOL shouldBlur;                      //@synthesize shouldBlur=_shouldBlur - In the implementation block
-(id)description;
-(long long)type;
-(SBAppLayout *)appLayout;
-(BOOL)shouldBlur;
-(id)initWithAppLayout:(id)arg1 shouldBlur:(BOOL)arg2 ;
@end

