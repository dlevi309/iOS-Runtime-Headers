/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol OS_dispatch_queue;
#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSString, AnalyticsWorkspace, NSObject, ImpoExpoService, NSArray, NSCalendar, SystemSettingsRelay, NSDate;

@interface NetworkAnalyticsModel : NSObject {

	NSString* journalName;
	AnalyticsWorkspace* workspace;
	NSObject*<OS_dispatch_queue> queue;
	ImpoExpoService* ieService;
	int wifiPredictionLogic;
	int cellPredictionLogic;
	int weightStrategy;
	NSString* _pathForReadingIpsFile;
	NSString* _simulatedJournalPath;
	unsigned long long periodPerDay;
	unsigned long long minimumEventsToConsiderPattern;
	long long firstEventTimeStampWifi;
	long long firstEventTimeStampCell;
	long long lastEventTimeStampWifi;
	long long lastEventTimeStampCell;
	long long latestPredictionTrainingTimeCell;
	long long latestPredictionTrainingTimeWifi;
	unsigned long long numberOfDaysWithWifiEvents;
	unsigned long long numberOfDaysWithCellEvents;
	NSArray* defaultArrayOfDaysGroupWifi;
	NSArray* defaultArrayOfDaysGroupCell;
	NSArray* currentArrayOfDaysGroupWifi;
	NSArray* currentArrayOfDaysGroupCell;
	long long timezoneOffsetFromUtcNoDaylight;
	long long homeTimezoneOffsetFromUtcNoDaylight;
	BOOL homeTimezoneOffsetKnownCoreRoutine;
	double wifiPredictionError;
	double cellPredictionError;
	NSArray* defaultLQMPredictionsWifi;
	NSArray* defaultLQMPredictionsCell;
	NSArray* currentLQMPredictionsWifi;
	NSArray* currentLQMPredictionsCell;
	NSString* currentlyConnectedWifiSsid;
	NSArray* disconnectionPatternsWifi;
	unsigned long long recallCounterWifi;
	unsigned long long recallCounterCell;
	unsigned long long pullupCounterWifi;
	unsigned long long pullupCounterCell;
	id _cellEpochObserver;
	id _wifiEpochObserver;
	id _timezoneChangedObserver;
	NSCalendar* _calendar;
	unsigned long long limMinSamples;
	double limRatio;
	SystemSettingsRelay* systemSettingsRelay;
	BOOL _isHelper;
	NSDate* _lastModelRunTime;
	NSDate* _debugTrainingTime;

}

@property (retain) NSDate * lastModelRunTime;               //@synthesize lastModelRunTime=_lastModelRunTime - In the implementation block
@property (retain) NSDate * debugTrainingTime;              //@synthesize debugTrainingTime=_debugTrainingTime - In the implementation block
@property (assign,nonatomic) BOOL isHelper;                 //@synthesize isHelper=_isHelper - In the implementation block
+(id)fetchPredictionsForInterfaceType:(long long)arg1 isAny:(BOOL)arg2 isBuiltin:(BOOL)arg3 scopedToLOI:(long long)arg4 hasCustomSignature:(id)arg5 error:(id*)arg6 ;
+(unsigned long long)modelResolution;
+(void)resetModel;
+(void)purgeAllJournalRecords;
+(double)fetchTrainingProgressForInterfaceType:(long long)arg1 isAny:(BOOL)arg2 isBuiltin:(BOOL)arg3 scopedToLOI:(long long)arg4 hasCustomSignature:(id)arg5 ;
+(double)fetchPredictionErrorForInterfaceType:(long long)arg1 isAny:(BOOL)arg2 isBuiltin:(BOOL)arg3 scopedToLOI:(long long)arg4 hasCustomSignature:(id)arg5 ;
+(id)getDaysWithSimilarPatternForInterfaceType:(long long)arg1 ;
+(id)modelGeneratedAt;
-(id)_readJournalEntries;
-(unsigned)numberOfGroupOfSimilarDaysForInterface:(long long)arg1 ;
-(id)_purgeAndReturnValidJournalWithPrefix:(id)arg1 olderThan:(unsigned long long)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)_fetchPredictionErrorForInterfaceType:(long long)arg1 isAny:(BOOL)arg2 isBuiltin:(BOOL)arg3 scopedToLOI:(long long)arg4 hasCustomSignature:(id)arg5 ;
-(void)_purgeSavedPredictionsOlderThan:(unsigned long long)arg1 ;
-(long long)_getWifiInstantQualityBasedOnLQM:(char)arg1 ;
-(id)_getSavedPredictionHeaderNameForInterface:(long long)arg1 ;
-(double)_clusterUsingKMeansOn:(id)arg1 into:(int)arg2 iterations:(int)arg3 saveCentroidsTo:(id)arg4 ;
-(unsigned long long)_getTotalWeightForCompletedHistory;
-(void)_handleNetworkNotificationFrom:(long long)arg1 notification:(id)arg2 ;
-(void)_shuffleArray:(id)arg1 ;
-(double)_fetchTrainingProgressForInterfaceType:(long long)arg1 ;
-(void)_processNetworkState:(SCD_Struct_Ne43*)arg1 toStateSet:(id)arg2 stateStartTimeInfo:(SCD_Struct_Ne44)arg3 stateEndTimeInfo:(SCD_Struct_Ne44)arg4 effectiveNetworkId:(id)arg5 ;
-(void)_loadLatestPredictionFromJournalWithInterfaceType:(long long)arg1 ;
-(void)setDebugTrainingTime:(NSDate *)arg1 ;
-(int)_elbowOfList:(id)arg1 ;
-(id)_getComplementaryPredictionNameForInterface:(long long)arg1 ;
-(id)_readJournalEntriesUsingIpsfile;
-(BOOL)isHelper;
-(void)_resetModel;
-(void)_fetchHomeTimezoneOffsetFromJournal;
-(SCD_Struct_Ne45)_calculateStatisticsFromNetworkStateTable:(id)arg1 usingPredicate:(id)arg2 ;
-(id)_clusterEventsInWeekUsingKMeansOn:(id)arg1 ;
-(void)_printInternalStateSet:(id)arg1 ;
-(id)_loadSavedPredictionBasedOnHeaderData:(id)arg1 interface:(long long)arg2 ;
-(void)postAWDPredictionMetricsForInterface:(long long)arg1 previousTime:(long long)arg2 ;
-(id)_learnDisconnectionPatternForSetOfDays:(id)arg1 impairmentEvents:(id)arg2 ;
-(id)_readJournalEntriesUsingSimulatedfile;
-(void)trainModel;
-(void)_handleTimezoneChanged;
-(void)_trainModelAt:(id)arg1 ;
-(BOOL)_isLegacyJournal:(id)arg1 ;
-(id)_getPredictionJournalNameWithPrefix:(id)arg1 forInterface:(long long)arg2 slotSizeMinutes:(unsigned long long)arg3 ;
-(void)_actUponSystemSettingsAirplaneChanged:(BOOL)arg1 wifiChanged:(BOOL)arg2 cellDataChanged:(BOOL)arg3 ;
-(long long)_getDominantLQMInSlotWithTimeSpentInBest:(long long)arg1 inFair:(long long)arg2 inMinimallyViable:(long long)arg3 inNone:(long long)arg4 ;
-(double)_evaluateErrorOfLQMPredictions:(id)arg1 againstObservedLQMTable:(id)arg2 ;
-(BOOL)_isValidTimezoneToTrain;
-(unsigned long long)_sanitizeInternalLQMStateEventFrom:(id)arg1 toTable:(id)arg2 ;
-(BOOL)_savePredictionToJournalForInterface:(long long)arg1 ;
-(unsigned long long)_getWeightForAge:(long long)arg1 ;
-(id)_createHeaderDataForSavedPredictionsName:(id)arg1 hasComplementaryPrediction:(BOOL)arg2 interfaceType:(long long)arg3 ;
-(id)_fetchPredictionsForInterfaceType:(long long)arg1 isAny:(BOOL)arg2 isBuiltin:(BOOL)arg3 scopedToLOI:(long long)arg4 hasCustomSignature:(id)arg5 error:(id*)arg6 ;
-(id)_extractImpairmentEventsFromNetworkStateTable:(id)arg1 setOfDays:(id)arg2 ;
-(long long)_getNWInstantQualityForNetwork:(long long)arg1 basedOnLQM:(char)arg2 ;
-(NSDate *)debugTrainingTime;
-(void)_finishedReadingLowInternetModeRecords:(id)arg1 ;
-(void)_processJournalData:(id)arg1 startFrom:(long long)arg2 endAt:(long long)arg3 rawWifiStateSet:(id)arg4 rawCellStateSet:(id)arg5 ;
-(void)_processLowInternetModeRecord:(id)arg1 addTo:(id)arg2 ;
-(BOOL)_shouldCreateIpsFile;
-(id)_readJournalEntriesUsingImpoExpoService;
-(void)setLastModelRunTime:(NSDate *)arg1 ;
-(id)_clusterEventsUsingKMeansForSetOfDays:(id)arg1 networkStateTable:(id)arg2 saveCentroidsTo:(id)arg3 ;
-(BOOL)_isValidTimezoneToReturnPredictions;
-(void)_clusterImpairmentEventsUsingKMeansOn:(id)arg1 saveCentroidsTo:(id)arg2 ;
-(double)_fetchTrainingProgressForInterfaceType:(long long)arg1 isAny:(BOOL)arg2 isBuiltin:(BOOL)arg3 scopedToLOI:(long long)arg4 hasCustomSignature:(id)arg5 ;
-(long long)_predictNetworkQualityBasedOnAverageNWInstantQuality:(double)arg1 ;
-(long long)_getCellInstantQualityBasedOnLQM:(char)arg1 ;
-(void)_generatePredictionForDays:(id)arg1 fromClusteredEvents:(id)arg2 clusterCentroids:(id)arg3 interfaceType:(long long)arg4 basedOnWeekClusters:(long long)arg5 savePredictionsTo:(id)arg6 ;
-(void)_trainModelForInterfaceType:(long long)arg1 sanitizedLQMTable:(id)arg2 ;
-(void)_setCalendar:(id)arg1 ;
-(BOOL)_insertInternalNetworkStateRecordTo:(id)arg1 networkId:(id)arg2 networkLQM:(long long)arg3 age:(long long)arg4 dayOfWeek:(long long)arg5 slotId:(long long)arg6 numberOfSlots:(long long)arg7 stateDuration:(long long)arg8 ;
-(id)_getDaysWithSimilarPatternForInterfaceType:(long long)arg1 ;
-(void)_removePrimarykeyAndLocationInJournalRecordInfo:(id)arg1 ;
-(NSDate *)lastModelRunTime;
-(long long)_getCurrentLocationTimezoneOffsetWithoutDST;
-(SCD_Struct_Ne44)_parseTimeIntoWeekdayAndSlotId:(long long)arg1 withReferenceDate:(id)arg2 ;
-(void)processProxyTrain;
-(void)_updateHomeTimezoneOffsetIfNeeded;
-(id)initWithJournalName:(id)arg1 workspace:(id)arg2 queue:(id)arg3 ;
-(void)_purgeAllJournalRecords;
-(void)dealloc;
-(void)setIsHelper:(BOOL)arg1 ;
-(unsigned long long)_modelResolution;
@end

