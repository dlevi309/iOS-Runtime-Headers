/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@interface VTInvalidSATEntriesCleaner : NSObject
+(id)cleanupOrphanedMetafilesForLanguage:(id)arg1 payloadUtteranceLifeTimeInDays:(long long)arg2 dryRun:(BOOL)arg3 ;
+(id)cleanupOrphanedMetafilesAtURL:(id)arg1 dryRun:(BOOL)arg2 ;
+(id)cleanupPayloadUtterancesExceedingLifeTimeInDays:(long long)arg1 forType:(unsigned long long)arg2 forLanguageCode:(id)arg3 dryRun:(BOOL)arg4 ;
+(id)cleanupInvalidSATEntriesAtSATRoot:(id)arg1 payloadUtteranceLifeTimeInDays:(long long)arg2 dryRun:(BOOL)arg3 ;
@end

