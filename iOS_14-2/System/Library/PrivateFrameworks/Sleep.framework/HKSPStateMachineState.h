/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/HKSPStateMachineEventHandler.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKSPStateMachine, NSString;

@interface HKSPStateMachineState : NSObject <HKSPStateMachineEventHandler, NSCopying> {

	HKSPStateMachine* _stateMachine;

}

@property (assign,nonatomic,__weak) HKSPStateMachine * stateMachine;              //@synthesize stateMachine=_stateMachine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setStateMachine:(HKSPStateMachine *)arg1 ;
-(NSString *)description;
-(void)updateState;
-(HKSPStateMachine *)stateMachine;
-(id)stateName;
-(void)willExitWithNextState:(id)arg1 context:(id)arg2 ;
-(void)didExitWithNextState:(id)arg1 context:(id)arg2 ;
-(void)willEnterWithPreviousState:(id)arg1 context:(id)arg2 ;
-(id)equalsBuilderWithObject:(id)arg1 ;
-(id)initWithStateMachine:(id)arg1 ;
-(void)didEnterWithPreviousState:(id)arg1 context:(id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

