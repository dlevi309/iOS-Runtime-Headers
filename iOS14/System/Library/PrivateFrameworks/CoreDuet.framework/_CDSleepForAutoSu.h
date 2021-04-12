/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol _DKKnowledgeQuerying;
@class _CDAutoSuConfig;

@interface _CDSleepForAutoSu : NSObject {

	BOOL _enableCaching;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	_CDAutoSuConfig* _autoSuConfig;

}

@property (nonatomic,retain) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (retain) _CDAutoSuConfig * autoSuConfig;                                 //@synthesize autoSuConfig=_autoSuConfig - In the implementation block
@property (assign) BOOL enableCaching;                                             //@synthesize enableCaching=_enableCaching - In the implementation block
+(id)readConfigurationFromDefaults;
+(id)tuningDictionary;
+(id)defaultTuningConfiguration;
+(id)sanitizeTuningConfiguration:(id)arg1 ;
-(id)init;
-(id)predictForDate:(id)arg1 fromState:(id)arg2 ;
-(id)defaultTimesWhenPredictionUnavailable:(id)arg1 withConfig:(id)arg2 ;
-(id)defaultTimesWhenPredictionUnavailable:(id)arg1 ;
-(id)predictForDate:(id)arg1 fromState:(id)arg2 withConfig:(id)arg3 ;
-(void)setEnableCaching:(BOOL)arg1 ;
-(id)getUnlockAndSoftwareUpdateTimes;
-(id)getUnlockAndSoftwareUpdateTimesWithConfig:(id)arg1 referenceDate:(id)arg2 ;
-(void)setAutoSuConfig:(_CDAutoSuConfig *)arg1 ;
-(id)makeDictionaryForEventStreamWhenPredictionTemporarilyUnavailable:(id)arg1 ;
-(id)predictedSleepDictionaryForDate:(id)arg1 ;
-(id)predicitLastUnlockForDay:(id)arg1 ;
-(id)proposeTimesFromRelativeOffsetsForDate:(id)arg1 lastUnlock:(int)arg2 suStart:(int)arg3 suEnd:(int)arg4 unrestrictedSleepEnd:(int)arg5 config:(id)arg6 ;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)retrieveSleepProbabilities:(id)arg1 ;
-(BOOL)enableCaching;
-(_CDAutoSuConfig *)autoSuConfig;
-(id)initWithKnowledgeStore:(id)arg1 ;
-(id)predictNextDateForLastUnlockAttemptOfTheDay;
-(id)predictedSleepDictionaryForDate:(id)arg1 usingKnowledge:(id)arg2 ;
@end

