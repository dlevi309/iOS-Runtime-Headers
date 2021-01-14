/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/


@class RBSProcessHandle, RBSProcessState, RBSProcessExitEvent;

@interface RBSProcessStateUpdate : NSObject {

	RBSProcessHandle* _process;
	RBSProcessState* _state;
	RBSProcessState* _previousState;
	RBSProcessExitEvent* _exitEvent;

}

@property (nonatomic,readonly) RBSProcessHandle * process;                   //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) RBSProcessState * state;                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) RBSProcessState * previousState;              //@synthesize previousState=_previousState - In the implementation block
@property (nonatomic,readonly) RBSProcessExitEvent * exitEvent;              //@synthesize exitEvent=_exitEvent - In the implementation block
+(id)updateWithState:(id)arg1 previousState:(id)arg2 exitEvent:(id)arg3 ;
-(RBSProcessHandle *)process;
-(RBSProcessState *)previousState;
-(RBSProcessExitEvent *)exitEvent;
-(id)description;
-(RBSProcessState *)state;
@end

