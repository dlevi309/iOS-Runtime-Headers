/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@class NSString;

@interface SBTimerEventSwitcherEventResponse : SBSwitcherModifierEventResponse {

	NSString* _reason;

}

@property (nonatomic,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithDelay:(double)arg1 validator:(/*^block*/id)arg2 reason:(id)arg3 ;
-(NSString *)reason;
-(long long)type;
@end

