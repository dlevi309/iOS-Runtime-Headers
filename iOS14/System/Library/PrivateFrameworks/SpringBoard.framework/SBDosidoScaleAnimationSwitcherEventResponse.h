/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@class SBAppLayout;

@interface SBDosidoScaleAnimationSwitcherEventResponse : SBSwitcherModifierEventResponse {

	SBAppLayout* _appLayout;

}

@property (nonatomic,readonly) SBAppLayout * appLayout;              //@synthesize appLayout=_appLayout - In the implementation block
-(SBAppLayout *)appLayout;
-(id)initWithAppLayout:(id)arg1 ;
-(long long)type;
@end

