/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsFoundation.framework/SettingsFoundation
*/


@interface SFRestrictionsPasscodeController : NSObject
+(BOOL)validatePIN:(id)arg1 ;
+(void)setPIN:(id)arg1 ;
+(BOOL)settingEnabled;
+(void)migrateRestrictionsPasscode;
+(id)_keychainPasswordForRestrictions;
+(BOOL)hasHashAndSaltLegacyPassword;
+(id)pinFromHashAndSaltLegacyPassword;
+(void)removePasswordForHashAndSaltLegacyRestrictions;
+(void)_setKeychainPasswordForRestrictions:(id)arg1 ;
+(void)_removeKeychainPasswordForRestrictions;
+(void)_migrateRestrictionsPasscodeIfNeeded;
+(BOOL)legacyRestrictionsInEffect;
+(id)hashForHashAndSaltLegacyRestrictions;
+(id)saltForHashAndSaltLegacyRestrictions;
+(id)newHashDataForPassword:(id)arg1 andSalt:(id)arg2 ;
+(id)_generateSalt;
@end

