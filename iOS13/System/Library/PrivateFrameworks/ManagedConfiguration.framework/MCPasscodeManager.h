/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@interface MCPasscodeManager : NSObject
+(id)sharedManager;
+(id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg1 ;
+(id)localizedDescriptionOfDefaultNewPasscodePolicyFromRestrictions:(id)arg1 ;
+(int)unlockScreenTypeForRestrictions:(id)arg1 ;
+(BOOL)isDeviceUnlocked;
+(int)defaultNewPasscodeEntrySimplePasscodeType;
+(int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1 outSimplePasscodeType:(int*)arg2 ;
+(int)unlockScreenTypeForRestrictions:(id)arg1 outSimplePasscodeType:(int*)arg2 ;
+(id)_localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg1 shouldBeDefault:(BOOL)arg2 ;
+(BOOL)passcode:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 checkHistory:(BOOL)arg3 outError:(id*)arg4 ;
+(id)characteristicsDictionaryFromPasscode:(id)arg1 ;
+(BOOL)_passcodeCharacteristics:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 outError:(id*)arg3 ;
+(id)deviceLockedError;
+(id)hashForPasscode:(id)arg1 usingMethod:(int)arg2 salt:(id)arg3 customIterations:(unsigned)arg4 ;
+(id)generateSalt;
+(int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1 ;
-(id)passcodeExpiryDateOutError:(id*)arg1 ;
-(BOOL)unlockDeviceWithPasscode:(id)arg1 outError:(id*)arg2 ;
-(BOOL)isDeviceLocked;
-(BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)arg1 outError:(id*)arg2 ;
-(void)lockDeviceImmediately:(BOOL)arg1 ;
-(BOOL)isPasscodeSet;
-(BOOL)passcode:(id)arg1 compliesWithPolicyCheckHistory:(BOOL)arg2 outError:(id*)arg3 ;
-(void)passcodeExpiryDateCompletionBlock:(/*^block*/id)arg1 ;
-(int)currentUnlockScreenType;
-(int)currentUnlockSimplePasscodeType;
-(int)newPasscodeEntryScreenType;
-(int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1 ;
-(int)minimumNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1 ;
-(int)defaultNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1 ;
-(void)lockDevice;
-(BOOL)isPasscodeCompliantWithNamedPolicy:(id)arg1 outError:(id*)arg2 ;
-(id)_wrongPasscodeError;
-(id)_privatePasscodeDict;
-(id)_publicPasscodeDict;
-(int)_newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1 shouldBeMinimum:(BOOL)arg2 ;
-(BOOL)_checkPasscode:(id)arg1 againstHistoryWithRestrictions:(id)arg2 outError:(id*)arg3 ;
-(id)_passcodeCharacteristics;
-(id)localizedDescriptionOfPasscodePolicy;
-(id)localizedDescriptionOfDefaultNewPasscodePolicy;
-(BOOL)isCurrentPasscodeCompliantOutError:(id*)arg1 ;
@end

