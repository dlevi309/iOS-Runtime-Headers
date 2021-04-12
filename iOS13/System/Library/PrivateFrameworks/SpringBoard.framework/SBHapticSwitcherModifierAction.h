/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierAction.h>

@interface SBHapticSwitcherModifierAction : SBSwitcherModifierAction {

	long long _hapticType;
	long long _phase;

}

@property (nonatomic,readonly) long long hapticType;              //@synthesize hapticType=_hapticType - In the implementation block
@property (nonatomic,readonly) long long phase;                   //@synthesize phase=_phase - In the implementation block
-(long long)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)phase;
-(long long)hapticType;
-(id)initWithHapticType:(long long)arg1 phase:(long long)arg2 ;
@end

