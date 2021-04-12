/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@interface VTVoiceProfileMigration : NSObject
+(unsigned long long)getCurrentVoiceProfileVersionForLanguageCode:(id)arg1 ;
+(void)updateVoiceProfileVersionFileForLanguageCode:(id)arg1 ;
+(BOOL)checkIfMigrationNecessaryForCompatibilityVersion:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
+(BOOL)migrateVoiceProfileToVersion:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
@end

