/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@interface SBHapticSwitcherEventResponse : SBSwitcherModifierEventResponse {

	long long _hapticType;
	long long _phase;

}

@property (nonatomic,readonly) long long hapticType;              //@synthesize hapticType=_hapticType - In the implementation block
@property (nonatomic,readonly) long long phase;                   //@synthesize phase=_phase - In the implementation block
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)hapticType;
-(long long)type;
-(long long)phase;
-(id)initWithHapticType:(long long)arg1 phase:(long long)arg2 ;
@end

