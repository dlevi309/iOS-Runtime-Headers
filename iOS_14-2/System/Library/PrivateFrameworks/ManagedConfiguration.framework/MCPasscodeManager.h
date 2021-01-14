/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@interface MCPasscodeManager : NSObject
+(BOOL)isDeviceUnlocked;
+(id)_localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg1 shouldBeDefault:(BOOL)arg2 ;
+(int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1 ;
+(id)sharedManager;
+(int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1 outSimplePasscodeType:(int*)arg2 ;
+(id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg1 ;
+(id)hashForPasscode:(id)arg1 usingMethod:(int)arg2 salt:(id)arg3 customIterations:(unsigned)arg4 ;
+(id)generateSalt;
+(int)unlockScreenTypeForRestrictions:(id)arg1 ;
+(id)deviceLockedError;
+(id)localizedDescriptionOfDefaultNewPasscodePolicyFromRestrictions:(id)arg1 ;
+(BOOL)passcode:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 checkHistory:(BOOL)arg3 outError:(id*)arg4 ;
+(int)unlockScreenTypeForRestrictions:(id)arg1 outSimplePasscodeType:(int*)arg2 ;
+(id)characteristicsDictionaryFromPasscode:(id)arg1 ;
+(int)defaultNewPasscodeEntrySimplePasscodeType;
+(BOOL)_passcodeCharacteristics:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 outError:(id*)arg3 ;
-(void)lockDeviceImmediately:(BOOL)arg1 ;
-(id)passcodeExpiryDateOutError:(id*)arg1 ;
-(BOOL)isPasscodeCompliantWithNamedPolicy:(id)arg1 outError:(id*)arg2 ;
-(BOOL)isPasscodeSet;
-(BOOL)_checkPasscode:(id)arg1 againstHistoryWithRestrictions:(id)arg2 outError:(id*)arg3 ;
-(id)_privatePasscodeDict;
-(void)lockDevice;
-(BOOL)unlockDeviceWithPasscode:(id)arg1 outError:(id*)arg2 ;
-(BOOL)isDeviceLocked;
-(BOOL)isCurrentPasscodeCompliantOutError:(id*)arg1 ;
-(BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)arg1 outError:(id*)arg2 ;
-(id)_wrongPasscodeError;
-(int)minimumNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1 ;
-(id)localizedDescriptionOfDefaultNewPasscodePolicy;
-(void)passcodeExpiryDateCompletionBlock:(/*^block*/id)arg1 ;
-(id)_publicPasscodeDict;
-(BOOL)passcode:(id)arg1 compliesWithPolicyCheckHistory:(BOOL)arg2 outError:(id*)arg3 ;
-(int)currentUnlockSimplePasscodeType;
-(int)defaultNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1 ;
-(int)_newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1 shouldBeMinimum:(BOOL)arg2 ;
-(id)_passcodeCharacteristics;
-(int)newPasscodeEntryScreenType;
-(int)currentUnlockScreenType;
-(id)localizedDescriptionOfPasscodePolicy;
-(int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1 ;
@end

