/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSString;

@interface CLSCurationDebugStateEntry : NSObject {

	unsigned long long _state;
	NSString* _reason;
	NSString* _agent;
	NSString* _stage;

}

@property (readonly) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (readonly) NSString * reason;                     //@synthesize reason=_reason - In the implementation block
@property (readonly) NSString * agent;                      //@synthesize agent=_agent - In the implementation block
@property (readonly) NSString * stage;                      //@synthesize stage=_stage - In the implementation block
-(NSString *)reason;
-(unsigned long long)state;
-(NSString *)stage;
-(NSString *)agent;
-(id)initWithState:(unsigned long long)arg1 reason:(id)arg2 agent:(id)arg3 stage:(id)arg4 ;
@end

