/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsFoundation.framework/SettingsFoundation
*/


@interface SFRestrictionsPasscodeController : NSObject
+(BOOL)settingEnabled;
+(void)_migrateRestrictionsPasscodeIfNeeded;
+(id)saltForHashAndSaltLegacyRestrictions;
+(void)migrateRestrictionsPasscode;
+(void)_removeKeychainPasswordForRestrictions;
+(void)removePasswordForHashAndSaltLegacyRestrictions;
+(id)_generateSalt;
+(BOOL)legacyRestrictionsInEffect;
+(BOOL)validatePIN:(id)arg1 ;
+(BOOL)hasHashAndSaltLegacyPassword;
+(id)_keychainPasswordForRestrictions;
+(id)pinFromHashAndSaltLegacyPassword;
+(void)setPIN:(id)arg1 ;
+(void)_setKeychainPasswordForRestrictions:(id)arg1 ;
+(id)hashForHashAndSaltLegacyRestrictions;
+(id)newHashDataForPassword:(id)arg1 andSalt:(id)arg2 ;
@end

