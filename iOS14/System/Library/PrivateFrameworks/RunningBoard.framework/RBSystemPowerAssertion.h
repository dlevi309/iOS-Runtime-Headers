/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RBPowerAssertion.h>

@class RBSystemState;

@interface RBSystemPowerAssertion : RBPowerAssertion {

	RBSystemState* _state;

}
-(id)init;
-(id)_preventIdleSleepIdentifiers;
-(int)_targetPid;
@end

