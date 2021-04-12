/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@interface CATStateMachineEvent : NSObject {

	id _trigger;
	id _context;

}

@property (nonatomic,readonly) id trigger;              //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) id context;              //@synthesize context=_context - In the implementation block
+(id)eventWithTrigger:(id)arg1 context:(id)arg2 ;
-(id)description;
-(id)context;
-(id)trigger;
-(id)initWithEventTrigger:(id)arg1 context:(id)arg2 ;
@end

