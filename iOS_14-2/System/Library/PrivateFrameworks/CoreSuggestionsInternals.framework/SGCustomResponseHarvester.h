/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol SGXPCActivityManagerProtocol;
@class PETEventTracker2, NSFileManager, NSString, NSDate, NSMutableDictionary;

@interface SGCustomResponseHarvester : NSObject {

	id<SGXPCActivityManagerProtocol> _xpcActivityManager;
	PETEventTracker2* _pet2tracker;
	NSFileManager* _fManager;
	NSString* _checkpointFullPath;
	NSString* _preferredLanguage;
	int _customResponsesStep;
	NSDate* _latestProcessedDate;
	NSString* _modelFilePath;
	NSString* _modelConfigPath;
	NSMutableDictionary* _modelExistsForLanguage;

}
+(void)clearCustomResponsesCheckpointForTesting;
+(void)runHarvestForTestingSkipMessageCollection:(BOOL)arg1 clearCheckpoint:(BOOL)arg2 reportMetrics:(BOOL)arg3 ;
-(void)harvestWithActivity:(id)arg1 ;
-(id)initWithActivityManager:(id)arg1 ;
-(id)customResponseParametersForTrial:(id)arg1 ;
-(id)_customResponseParametersWithExperimentResolver:(id)arg1 ;
-(id)_getCustomResponseParameters;
-(void)loadCustomResponsesCheckpoint;
-(BOOL)deferAfterWriteCheckpointForActivity:(id)arg1 ;
-(BOOL)isSupportedLanguage:(id)arg1 ;
-(id)modelForLanguage:(id)arg1 ;
-(BOOL)deferAfterFilterWithStore:(id)arg1 forActivity:(id)arg2 andCustomResponseParameters:(id)arg3 ;
-(void)setPet2TrackerForTesting:(id)arg1 ;
-(void)setCustomResponsesStepForTesting:(int)arg1 ;
-(int)getCustomResponsesStepForTesting;
-(void)setCustomResponsesLatestProcessedDateForTesting:(id)arg1 ;
-(id)getCustomResponsesLatestProcessedDateForTesting;
@end

