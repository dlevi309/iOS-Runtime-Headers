/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@class SBAppLayout;

@interface SBIconOverlayVisibilitySwitcherEventResponse : SBSwitcherModifierEventResponse {

	BOOL _visible;
	SBAppLayout* _appLayout;

}

@property (nonatomic,readonly) SBAppLayout * appLayout;                    //@synthesize appLayout=_appLayout - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible;              //@synthesize visible=_visible - In the implementation block
-(SBAppLayout *)appLayout;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isVisible;
-(long long)type;
-(id)initWithAppLayout:(id)arg1 visible:(BOOL)arg2 ;
@end

