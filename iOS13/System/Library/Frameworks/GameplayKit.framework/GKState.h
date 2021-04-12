/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/


@class GKStateMachine;

@interface GKState : NSObject {

	GKStateMachine* _stateMachine;

}

@property (nonatomic,__weak,readonly) GKStateMachine * stateMachine; 
+(id)state;
-(id)init;
-(GKStateMachine *)stateMachine;
-(void)didEnterWithPreviousState:(id)arg1 ;
-(void)willExitWithNextState:(id)arg1 ;
-(void)updateWithDeltaTime:(double)arg1 ;
-(BOOL)isValidNextState:(Class)arg1 ;
-(void)_setStateMachine:(id)arg1 ;
@end

