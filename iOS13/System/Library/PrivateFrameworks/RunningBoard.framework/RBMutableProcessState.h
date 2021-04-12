/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <RunningBoard/RBProcessState.h>

@interface RBMutableProcessState : RBProcessState
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTerminationResistance:(unsigned char)arg1 ;
-(void)setRole:(unsigned char)arg1 ;
-(void)addTag:(id)arg1 ;
-(void)setJetsamBand:(unsigned char)arg1 ;
-(void)setPreventIdleSleep:(BOOL)arg1 ;
-(void)addPreventIdleSleepIdentifier:(id)arg1 ;
-(void)setGPUAllowed:(BOOL)arg1 ;
-(void)setJetsamLenientMode:(BOOL)arg1 ;
-(void)setThrottleBestEffortNetworking:(BOOL)arg1 ;
-(void)setMaxCPUUsageLimits:(id)arg1 forRole:(unsigned char)arg2 ;
-(void)setLegacyFinishTaskReason:(unsigned long long)arg1 ;
-(void)setIsBeingDebugged:(BOOL)arg1 ;
-(void)unionState:(id)arg1 ;
-(void)addInheritance:(id)arg1 ;
-(void)removeInheritance:(id)arg1 ;
-(void)removePreventIdleSleepIdentifier:(id)arg1 ;
-(void)removeAllPreventIdleSleepIdentifiers;
-(void)setMinCPUUsageLimits:(id)arg1 forRole:(unsigned char)arg2 ;
-(void)setPreventLaunch:(BOOL)arg1 ;
-(void)removeAllInheritances;
-(void)addLegacyAssertion:(id)arg1 ;
-(void)addRBAssertion:(id)arg1 ;
@end

