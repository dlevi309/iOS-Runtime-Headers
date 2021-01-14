/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifierEvent.h>

@class NSString;

@interface SBTimerSwitcherModifierEvent : SBSwitcherModifierEvent {

	NSString* _reason;

}

@property (nonatomic,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithReason:(id)arg1 ;
-(NSString *)reason;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

