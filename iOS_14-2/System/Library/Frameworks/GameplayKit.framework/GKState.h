/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/


@class GKStateMachine;

@interface GKState : NSObject {

	GKStateMachine* _stateMachine;

}

@property (nonatomic,__weak,readonly) GKStateMachine * stateMachine; 
+(id)state;
-(id)init;
-(void)willExitWithNextState:(id)arg1 ;
-(void)didEnterWithPreviousState:(id)arg1 ;
-(GKStateMachine *)stateMachine;
-(void)updateWithDeltaTime:(double)arg1 ;
-(BOOL)isValidNextState:(Class)arg1 ;
-(void)_setStateMachine:(id)arg1 ;
@end

