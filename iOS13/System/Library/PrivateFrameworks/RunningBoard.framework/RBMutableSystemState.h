/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <RunningBoard/RBSystemState.h>

@interface RBMutableSystemState : RBSystemState
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addTag:(id)arg1 ;
-(void)setPreventIdleSleep:(BOOL)arg1 ;
-(void)addPreventIdleSleepIdentifier:(id)arg1 ;
-(void)setThrottleBestEffortNetworking:(BOOL)arg1 ;
-(void)unionState:(id)arg1 ;
-(void)removePreventIdleSleepIdentifier:(id)arg1 ;
-(void)removeAllPreventIdleSleepIdentifiers;
-(void)setPreventLaunch:(BOOL)arg1 ;
@end

