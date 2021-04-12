/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <RunningBoard/RBProcessState.h>

@interface RBMutableProcessState : RBProcessState
-(void)addInheritance:(id)arg1 ;
-(void)addTag:(id)arg1 ;
-(void)removePreventIdleSleepIdentifier:(id)arg1 ;
-(void)removeInheritance:(id)arg1 ;
-(void)unionState:(id)arg1 ;
-(void)setPreventIdleSleep:(BOOL)arg1 ;
-(void)removeAllPreventIdleSleepIdentifiers;
-(void)addPreventIdleSleepIdentifier:(id)arg1 ;
-(void)setJetsamBand:(unsigned char)arg1 ;
-(void)addLegacyAssertion:(id)arg1 ;
-(void)addRBAssertion:(id)arg1 ;
-(void)setLegacyFinishTaskReason:(unsigned long long)arg1 ;
-(void)setRole:(unsigned char)arg1 ;
-(void)setTerminationResistance:(unsigned char)arg1 ;
-(void)setForceRoleManage:(BOOL)arg1 ;
-(void)setGPUAllowed:(BOOL)arg1 ;
-(void)removeAllInheritances;
-(void)setPreventSuspend:(BOOL)arg1 ;
-(void)setMaxCPUUsageLimits:(id)arg1 forRole:(unsigned char)arg2 ;
-(void)setIsBeingDebugged:(BOOL)arg1 ;
-(void)setJetsamLenientMode:(BOOL)arg1 ;
-(void)setMinCPUUsageLimits:(id)arg1 forRole:(unsigned char)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setThrottleBestEffortNetworking:(BOOL)arg1 ;
@end

