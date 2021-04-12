/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFMobileKeyBagState.h>

@interface SBFMutableMobileKeyBagState : SBFMobileKeyBagState

@property (assign,nonatomic) long long lockState; 
@property (assign,nonatomic) double backOffTime; 
@property (assign,nonatomic) unsigned long long failedAttemptCount; 
@property (assign,nonatomic) BOOL permanentlyBlocked; 
@property (assign,nonatomic) BOOL shouldWipe; 
@property (assign,nonatomic) BOOL recoveryEnabled; 
@property (assign,nonatomic) BOOL recoveryRequired; 
@property (assign,nonatomic) BOOL recoveryPossible; 
@property (assign,nonatomic) long long escrowCount; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLockState:(long long)arg1 ;
-(void)setFailedAttemptCount:(unsigned long long)arg1 ;
-(id)initWithMKBLockStateInfo:(id)arg1 ;
-(id)_mutableState;
-(void)setBackOffTime:(double)arg1 ;
-(void)setPermanentlyBlocked:(BOOL)arg1 ;
-(void)setShouldWipe:(BOOL)arg1 ;
-(void)setRecoveryRequired:(BOOL)arg1 ;
-(void)setRecoveryPossible:(BOOL)arg1 ;
-(void)setRecoveryEnabled:(BOOL)arg1 ;
-(void)setEscrowCount:(long long)arg1 ;
@end

