/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@interface CSInvalidSATEntriesCleaner : NSObject
-(id)init;
-(id)cleanupInvalidSATEntriesAtSATRoot:(id)arg1 payloadUtteranceLifeTimeInDays:(long long)arg2 dryRun:(BOOL)arg3 ;
-(void)_cleanupInvalidModelsForAsset:(id)arg1 ;
-(void)_cleanupImplicitUtteranceCache;
-(id)_cleanupOrphanedMetafilesForLanguage:(id)arg1 payloadUtteranceLifeTimeInDays:(long long)arg2 dryRun:(BOOL)arg3 ;
-(id)_cleanupOrphanedMetafilesAtURL:(id)arg1 dryRun:(BOOL)arg2 ;
-(id)_cleanupPayloadUtterancesExceedingLifeTimeInDays:(long long)arg1 forType:(unsigned long long)arg2 forLanguageCode:(id)arg3 dryRun:(BOOL)arg4 ;
-(id)_cleanupContentsOfSatFolderWithLanguageCode:(id)arg1 dryRun:(BOOL)arg2 ;
-(id)_cleanupInvalidAudioFiles:(id)arg1 dryRun:(BOOL)arg2 ;
-(void)_cleanupModelFilesAtDir:(id)arg1 forAsset:(id)arg2 ;
-(void)sanitizeSATFilesWithAsset:(id)arg1 ;
@end

