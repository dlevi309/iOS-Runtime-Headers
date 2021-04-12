/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierAction.h>

@class NSString;

@interface SBTimerEventSwitcherModifierAction : SBSwitcherModifierAction {

	NSString* _reason;

}

@property (nonatomic,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
-(long long)type;
-(NSString *)reason;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithDelay:(double)arg1 validator:(/*^block*/id)arg2 reason:(id)arg3 ;
@end

