/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@class SBAppLayout;

@interface SBBlurItemContainerSwitcherEventResponse : SBSwitcherModifierEventResponse {

	BOOL _shouldBlur;
	SBAppLayout* _appLayout;

}

@property (nonatomic,readonly) SBAppLayout * appLayout;              //@synthesize appLayout=_appLayout - In the implementation block
@property (nonatomic,readonly) BOOL shouldBlur;                      //@synthesize shouldBlur=_shouldBlur - In the implementation block
-(SBAppLayout *)appLayout;
-(id)description;
-(long long)type;
-(BOOL)shouldBlur;
-(id)initWithAppLayout:(id)arg1 shouldBlur:(BOOL)arg2 ;
@end

