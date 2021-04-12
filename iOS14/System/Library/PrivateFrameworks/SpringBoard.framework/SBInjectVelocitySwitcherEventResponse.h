/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@class SBAppLayout, NSString;

@interface SBInjectVelocitySwitcherEventResponse : SBSwitcherModifierEventResponse {

	SBAppLayout* _appLayout;
	NSString* _key;
	id _velocity;

}

@property (nonatomic,readonly) SBAppLayout * appLayout;              //@synthesize appLayout=_appLayout - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                  //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) id velocity;                          //@synthesize velocity=_velocity - In the implementation block
-(SBAppLayout *)appLayout;
-(id)velocity;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)key;
-(long long)type;
-(id)initWithVelocity:(id)arg1 forKey:(id)arg2 appLayout:(id)arg3 ;
@end

