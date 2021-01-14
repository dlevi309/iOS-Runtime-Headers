/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/_PASDatabaseMigrationProtocol.h>

@class NSString, _PASSqliteDatabase;

@interface ATXInformationStore : NSObject <_PASDatabaseMigrationProtocol> {

	NSString* _databasePath;
	NSString* _cachedSuggestionsPath;
	_PASSqliteDatabase* _db;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)readAllInfoSuggestions;
-(id)_openSqliteDatabaseAtPath:(id)arg1 ;
-(BOOL)addStackConfigStatistics:(id)arg1 ;
-(BOOL)deleteAllSuggestionsForSourceId:(id)arg1 excludingSuggestionId:(id)arg2 ;
-(BOOL)insertTimelineEntries:(id)arg1 forWidget:(id)arg2 ;
-(id)init;
-(BOOL)_openDatabase;
-(id)latestUpdateDateForSourceId:(id)arg1 ;
-(id)deleteExpiredSuggestions;
-(BOOL)appendDismissRecord:(id)arg1 ;
-(long long)mostRecentAbuseControlOutcomeForSuggestionId:(id)arg1 ;
-(void)close;
-(id)firstTimeAtWhichSuggestionPassedTimelineFilters:(id)arg1 ;
-(id)fetchTimelineEntriesForWidget:(id)arg1 sinceDate:(id)arg2 ;
-(BOOL)deleteExpiredProactiveStackRotations;
-(unsigned long long)numberOfInfoSuggestionsForAppBundleIdentifier:(id)arg1 ;
-(unsigned long long)numberOfTimelineInducedRotationsInPast24HrForWidget:(id)arg1 kind:(id)arg2 intent:(id)arg3 considerStalenessRotation:(BOOL)arg4 ;
-(id)nextImportantDateAmongTimelineInducedProactiveStackRotationRecords;
-(id)fetchStackConfigStatisticsForWidgetBundleId:(id)arg1 widgetKind:(id)arg2 containerBundleIdentifier:(id)arg3 widgetFamily:(long long)arg4 ;
-(BOOL)clearOldAbuseControlOutcomeData;
-(BOOL)updateMostRecentSignificantDwellOfWidget:(id)arg1 date:(id)arg2 ;
-(id)criterionOfInfoSuggestionWithIdentifier:(id)arg1 ;
-(BOOL)_migrateDatabaseIfNeeded;
-(BOOL)_insertTimelineEntries:(id)arg1 forWidget:(id)arg2 storageLimit:(unsigned long long)arg3 ;
-(id)readCachedSuggestions;
-(id)earliestFutureSuggestionChangeDate;
-(id)initWithDatabasePath:(id)arg1 cachedSuggestionsPath:(id)arg2 ;
-(id)readAllInfoSuggestionsWithSourceIdentifier:(id)arg1 ;
-(BOOL)insertOrIgnoreProactiveStackRotationRecord:(id)arg1 ;
-(BOOL)atomicallyDeleteInfoSuggestions:(id)arg1 insertInfoSuggestions:(id)arg2 ;
-(BOOL)_handleCorruptionIfNeeded;
-(id)mostRecentTimelineUpdateDateOfWidget:(id)arg1 kind:(id)arg2 ;
-(BOOL)_configureDatabase;
-(id)mostRecentRotationRecordForWidget:(id)arg1 kind:(id)arg2 intent:(id)arg3 considerStalenessRotation:(BOOL)arg4 filterByClientModelId:(id)arg5 ;
-(BOOL)deleteAllInfoSuggestionsWithSourceIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)mostRecentRotationRecordForSuggestionIdentifier:(id)arg1 ;
-(unsigned long long)numberOfInfoSuggestionsForSourceId:(id)arg1 ;
-(id)readCurrentlyRelevantSuggestions;
-(id)migrations;
-(BOOL)writeCacheWithNewSuggestions:(id)arg1 ;
-(id)mostRecentEngagementOfWidget:(id)arg1 ;
-(id)fetchDistinctWidgetsIgnoringIntentSinceDate:(id)arg1 ;
-(BOOL)rotationExistsForSuggestionWithId:(id)arg1 considerStalenessRotation:(BOOL)arg2 ;
-(id)mostRecentEngagementOfWidget:(id)arg1 kind:(id)arg2 ;
-(BOOL)addAbuseControlOutcomes:(id)arg1 ;
-(id)databaseHandle;
-(BOOL)writeInfoSuggestions:(id)arg1 ;
-(BOOL)recordSuggestionPassedTimelineFiltersForTheFirstTime:(id)arg1 ;
-(id)latestInfoSuggestionRelevantNowForSourceId:(id)arg1 ;
-(BOOL)updateEndDateForInfoSuggestions:(id)arg1 ;
-(BOOL)didSuggestionReachDurationLimit:(id)arg1 ;
-(BOOL)deleteInfoSuggestion:(id)arg1 ;
-(id)fetchAbuseControlOutcomesForSuggestion:(id)arg1 sinceDate:(id)arg2 ;
-(id)readAllDismissRecords;
-(void)dealloc;
-(id)queriesToSkipFromEmptyToVersion:(unsigned*)arg1 ;
-(BOOL)updateMostRecentTapOfWidget:(id)arg1 date:(id)arg2 ;
-(BOOL)addAbuseControlOutcomeForSuggestion:(id)arg1 forTimestamp:(long long)arg2 outcome:(long long)arg3 ;
-(id)recentRelevantTimelineEntriesOrderedByDescendingScore:(id)arg1 ;
@end

