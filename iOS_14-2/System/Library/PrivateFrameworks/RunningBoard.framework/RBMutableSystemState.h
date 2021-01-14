/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <RunningBoard/RBSystemState.h>

@interface RBMutableSystemState : RBSystemState
-(void)addTag:(id)arg1 ;
-(void)removePreventIdleSleepIdentifier:(id)arg1 ;
-(void)unionState:(id)arg1 ;
-(void)setPreventIdleSleep:(BOOL)arg1 ;
-(void)removeAllPreventIdleSleepIdentifiers;
-(void)addPreventIdleSleepIdentifier:(id)arg1 ;
-(id)init;
-(void)addPreventLaunchPredicate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPreventLaunch:(BOOL)arg1 ;
@end

