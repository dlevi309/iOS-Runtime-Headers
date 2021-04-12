/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class NSString;

@interface SBTimerSwitcherModifierEvent : SBSwitcherModifierEvent {

	NSString* _reason;

}

@property (nonatomic,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
-(long long)type;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

