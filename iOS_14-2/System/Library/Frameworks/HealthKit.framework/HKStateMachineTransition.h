/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HKStateMachineState *)toState;
-(id)init;
-(HKStateMachineState *)fromState;
-(id)description;
-(long long)event;
-(id)initWithEvent:(long long)arg1 label:(id)arg2 from:(id)arg3 to:(id)arg4 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
@end

