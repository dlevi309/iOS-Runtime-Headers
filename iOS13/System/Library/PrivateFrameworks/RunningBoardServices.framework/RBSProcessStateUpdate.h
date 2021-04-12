/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/


@class RBSProcessHandle, RBSProcessState;

@interface RBSProcessStateUpdate : NSObject {

	RBSProcessHandle* _process;
	RBSProcessState* _state;
	RBSProcessState* _previousState;

}

@property (nonatomic,readonly) RBSProcessHandle * process;                   //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) RBSProcessState * state;                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) RBSProcessState * previousState;              //@synthesize previousState=_previousState - In the implementation block
+(id)updateWithState:(id)arg1 previousState:(id)arg2 ;
-(id)description;
-(RBSProcessState *)state;
-(RBSProcessHandle *)process;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(RBSProcessState *)previousState;
@end

