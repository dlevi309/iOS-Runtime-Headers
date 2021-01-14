/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLockState:(long long)arg1 ;
-(id)init;
-(void)setPermanentlyBlocked:(BOOL)arg1 ;
-(void)setBackOffTime:(double)arg1 ;
-(void)setShouldWipe:(BOOL)arg1 ;
-(void)setFailedAttemptCount:(unsigned long long)arg1 ;
-(id)initWithMKBLockStateInfo:(id)arg1 ;
-(id)_mutableState;
-(void)setEscrowCount:(long long)arg1 ;
-(void)setRecoveryPossible:(BOOL)arg1 ;
-(void)setRecoveryEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRecoveryRequired:(BOOL)arg1 ;
@end

