/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSNumber;

@interface SBSecurityDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,getter=isBlockedForThermal,nonatomic) BOOL blockedForThermal; 
@property (getter=isPendingDeviceWipe,nonatomic,retain) NSNumber * pendingDeviceWipe; 
@property (getter=isBlockedForPasscode,nonatomic,retain) NSNumber * blockedForPasscode; 
@property (nonatomic,retain) NSNumber * numberOfFailedPasscodeAttempts; 
@property (nonatomic,retain) NSNumber * unblockTimeFromReferenceDate; 
@property (nonatomic,retain) NSNumber * blockStateGeneration; 
@property (getter=isDeviceWipeEnabled,nonatomic,readonly) BOOL deviceWipeEnabled; 
@property (nonatomic,readonly) BOOL dontLockEver; 
@property (nonatomic,readonly) BOOL allowLockAndUnlockWithCase; 
@property (nonatomic,readonly) BOOL enableLayerBasedViewSecurity; 
@property (nonatomic,readonly) BOOL reportSecureDrawViolations; 
-(void)setBlockStateGeneration:(NSNumber *)arg1 ;
-(NSNumber *)blockStateGeneration;
-(void)setReportSecureDrawViolations:(BOOL)arg1 ;
-(BOOL)reportSecureDrawViolations;
-(void)setAllowLockAndUnlockWithCase:(BOOL)arg1 ;
-(BOOL)allowLockAndUnlockWithCase;
-(void)setPendingDeviceWipe:(NSNumber *)arg1 ;
-(id)isPendingDeviceWipe;
-(void)setDontLockEver:(BOOL)arg1 ;
-(BOOL)dontLockEver;
-(void)setDeviceWipeEnabled:(BOOL)arg1 ;
-(BOOL)isDeviceWipeEnabled;
-(void)setBlockedForThermal:(BOOL)arg1 ;
-(BOOL)isBlockedForThermal;
-(void)setBlockedForPasscode:(NSNumber *)arg1 ;
-(id)isBlockedForPasscode;
-(void)setEnableLayerBasedViewSecurity:(BOOL)arg1 ;
-(BOOL)enableLayerBasedViewSecurity;
-(void)setUnblockTimeFromReferenceDate:(NSNumber *)arg1 ;
-(NSNumber *)unblockTimeFromReferenceDate;
-(void)setNumberOfFailedPasscodeAttempts:(NSNumber *)arg1 ;
-(NSNumber *)numberOfFailedPasscodeAttempts;
-(id)deviceLockDefaultForKey:(id)arg1 ;
-(void)setDeviceLockDefault:(id)arg1 forKey:(id)arg2 ;
-(void)_bindAndRegisterDefaults;
@end

