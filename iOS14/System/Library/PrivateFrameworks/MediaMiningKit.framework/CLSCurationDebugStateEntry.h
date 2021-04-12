/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)agent;
-(NSString *)stage;
-(NSString *)reason;
-(unsigned long long)state;
-(id)initWithState:(unsigned long long)arg1 reason:(id)arg2 agent:(id)arg3 stage:(id)arg4 ;
@end

