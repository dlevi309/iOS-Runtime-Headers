/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@interface VTSpeakerIdUtilities : NSObject
+(id)getSATDirectoryForLanguageCode:(id)arg1 ;
+(id)stringForVTSpIdType:(unsigned long long)arg1 ;
+(id)getSATDirectoryForModelType:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
+(id)getSATAudioDirectoryForType:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
+(id)getSATModelDirectoryForType:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
+(id)createSATDirectoriesForType:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
+(id)_getAssetHashFromConfigPath:(id)arg1 ;
+(id)getSpeakerModelPathForType:(unsigned long long)arg1 withLanguageCode:(id)arg2 withConfigPath:(id)arg3 createDirectory:(BOOL)arg4 ;
+(id)getProfileVersionFilePathForLanguageCode:(id)arg1 ;
+(id)getExplicitEnrollmentUtterancesForType:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
+(id)getSortedImplicitEnrollmentUtterancesForType:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
+(id)getImplicitEnrollmentUtterancesPriorTo:(id)arg1 forType:(unsigned long long)arg2 forLanguageCode:(id)arg3 ;
+(id)getSortedEnrollmentUtterancesForType:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
+(id)timeStampWithSaltGrain;
+(BOOL)deleteExistingSATModelForLanguageCode:(id)arg1 ;
@end

