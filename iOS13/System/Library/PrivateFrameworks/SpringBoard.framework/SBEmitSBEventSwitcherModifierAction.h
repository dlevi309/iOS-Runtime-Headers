/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierAction.h>

@class NSDictionary;

@interface SBEmitSBEventSwitcherModifierAction : SBSwitcherModifierAction {

	unsigned long long _eventType;
	NSDictionary* _payload;

}

@property (nonatomic,readonly) unsigned long long eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) NSDictionary * payload;                    //@synthesize payload=_payload - In the implementation block
-(long long)type;
-(NSDictionary *)payload;
-(unsigned long long)eventType;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithSBEventWithEventType:(unsigned long long)arg1 payload:(id)arg2 ;
@end

