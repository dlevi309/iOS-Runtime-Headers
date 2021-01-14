/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@interface CATStateMachineEvent : NSObject {

	id _trigger;
	id _context;

}

@property (nonatomic,readonly) id trigger;              //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) id context;              //@synthesize context=_context - In the implementation block
+(id)eventWithTrigger:(id)arg1 context:(id)arg2 ;
-(id)trigger;
-(id)context;
-(id)initWithEventTrigger:(id)arg1 context:(id)arg2 ;
-(id)description;
@end

