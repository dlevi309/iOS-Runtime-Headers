/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@class NSDictionary;

@interface SBEmitSBEventSwitcherEventResponse : SBSwitcherModifierEventResponse {

	unsigned long long _eventType;
	NSDictionary* _payload;

}

@property (nonatomic,readonly) unsigned long long eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) NSDictionary * payload;                    //@synthesize payload=_payload - In the implementation block
-(unsigned long long)eventType;
-(NSDictionary *)payload;
-(long long)type;
-(id)initWithSBEventWithEventType:(unsigned long long)arg1 payload:(id)arg2 ;
@end

