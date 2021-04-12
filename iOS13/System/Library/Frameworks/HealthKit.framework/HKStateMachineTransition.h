/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSString, HKStateMachineState;

@interface HKStateMachineTransition : NSObject {

	long long _event;
	NSString* _label;
	HKStateMachineState* _fromState;
	HKStateMachineState* _toState;

}

@property (nonatomic,readonly) long long event;                                     //@synthesize event=_event - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,__weak,readonly) HKStateMachineState * fromState;              //@synthesize fromState=_fromState - In the implementation block
@property (nonatomic,__weak,readonly) HKStateMachineState * toState;                //@synthesize toState=_toState - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)label;
-(long long)event;
-(HKStateMachineState *)fromState;
-(HKStateMachineState *)toState;
-(id)initWithEvent:(long long)arg1 label:(id)arg2 from:(id)arg3 to:(id)arg4 ;
@end

