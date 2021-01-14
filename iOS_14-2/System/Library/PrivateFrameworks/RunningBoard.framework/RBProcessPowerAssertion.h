/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RBPowerAssertion.h>

@class RBProcessState, RBProcess;

@interface RBProcessPowerAssertion : RBPowerAssertion {

	RBProcessState* _state;
	RBProcess* _process;

}
-(id)_preventIdleSleepIdentifiers;
-(int)_targetPid;
@end

