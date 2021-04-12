/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDQuantitySampleEntity.h>
#import <libobjc.A.dylib/HDSeriesEntity.h>

@class NSString;

@interface HDQuantitySampleSeriesEntity : HDQuantitySampleEntity <HDSeriesEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id*)arg5 insertHandler:(/*^block*/id)arg6 ;
+(long long)_insertionEra;
+(/*^block*/id)objectInsertionFilterForProfile:(id)arg1 ;
+(id)databaseTable;
+(BOOL)isConcreteEntity;
+(BOOL)supportsObjectMerging;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(id)foreignKeys;
+(id)_updatedSampleForSeries:(id)arg1 originalEntity:(id)arg2 HFDKey:(long long)arg3 newCount:(long long)arg4 transaction:(id)arg5 profile:(id)arg6 error:(id*)arg7 ;
+(id)quantitySampleSeriesEntitiesForAutoFreezeWithTransaction:(id)arg1 error:(id*)arg2 ;
+(BOOL)_deleteHFDSeriesIfFoundForPersistentID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(BOOL)_replaceEntity:(id)arg1 UUIDToDelete:(id)arg2 newEntity:(id)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(BOOL)_updateFrozenEntityToMatchReplacedUnfrozenEntity:(id)arg1 unfrozenSeriesUUID:(id)arg2 unfrozenSeriesHFDKey:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(void)_triggerABCForNotFinalSeriesSampleInsert:(id)arg1 reason:(id)arg2 ;
+(BOOL)primitiveInsertValues:(id)arg1 seriesVersion:(long long)arg2 HFDKey:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(BOOL)enumerateRawDataWithTransaction:(id)arg1 HFDKey:(long long)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
+(BOOL)_setStatisticsForQuantitySample:(id)arg1 HFDKey:(long long)arg2 transaction:(id)arg3 error:(id*)arg4 ;
+(BOOL)replaceObjectID:(id)arg1 replacementObjectID:(id)arg2 deleteOriginalHFDData:(BOOL)arg3 profile:(id)arg4 transaction:(id)arg5 error:(id*)arg6 ;
+(id)_propertiesToLeftJoin;
+(BOOL)insertValues:(id)arg1 series:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)primitiveRemoveDatums:(id)arg1 HFDKey:(long long)arg2 transaction:(id)arg3 error:(id*)arg4 ;
+(BOOL)performSeriesWriteTransactionWithProfile:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
+(id)quantitySampleSeriesEntitiesForAutoFreezeSQL;
+(id)additionalPredicateForEnumeration;
+(BOOL)deleteSeriesWithID:(id)arg1 deleteHFDData:(BOOL)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id*)arg5 ;
+(BOOL)_moveHFDKey:(long long)arg1 fromEntity:(id)arg2 toEntity:(id)arg3 transaction:(id)arg4 error:(id*)arg5 ;
+(id)_insertDataObject:(id)arg1 inDatabase:(id)arg2 persistentID:(id)arg3 error:(id*)arg4 ;
+(id)_removeValues:(id)arg1 fromQuantitySeriesSample:(id)arg2 transaction:(id)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(id)freezeSeriesWithIdentifier:(id)arg1 metadata:(id)arg2 endDate:(id)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(BOOL)enumerateDataWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
+(id)indices;
+(Class)entityClassForEnumeration;
+(BOOL)enumerateDataWithTransaction:(id)arg1 HFDKey:(long long)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
+(id)joinClausesForProperty:(id)arg1 ;
+(BOOL)performPostJournalMergeCleanupWithTransaction:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(void)_setStatistics:(id)arg1 cumulativeQuantitySeriesSample:(id)arg2 ;
+(void)_setStatistics:(id)arg1 discreteQuantitySeriesSample:(id)arg2 ;
+(BOOL)enumerateDataWithIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
+(BOOL)unitTesting_insertValues:(id)arg1 quantitySample:(id)arg2 seriesVersion:(long long)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(long long)_notFinalInserationEra;
+(BOOL)deleteSeriesFromHFDWithKey:(long long)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)orderingTermForSortDescriptor:(id)arg1 ;
+(id)removeValues:(id)arg1 fromQuantitySeriesSample:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)_statisticsProperties;
+(BOOL)replaceExistingObject:(id)arg1 existingObjectID:(id)arg2 replacementObject:(id)arg3 replacementObjectID:(id)arg4 profile:(id)arg5 transaction:(id)arg6 error:(id*)arg7 ;
+(id)_quantitySampleWithID:(id)arg1 canBeUnfrozen:(BOOL)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)hasSeriesDataForHFDKey:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(id)_updatedSampleUUIDForSeries:(id)arg1 originalEntity:(id)arg2 HFDKey:(long long)arg3 transaction:(id)arg4 profile:(id)arg5 error:(id*)arg6 ;
+(void)unitTesting_updateInsertionEra;
+(id)_statisticsWithHFDKey:(long long)arg1 statisticsCalculator:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
+(long long)unitTesting_insertionEra;
+(id)privateSubEntities;
-(BOOL)deleteFromDatabase:(id)arg1 error:(id*)arg2 ;
-(void)willDeleteFromDatabase:(id)arg1 ;
-(id)HFDKeyWithDatabase:(id)arg1 error:(id*)arg2 ;
-(BOOL)insertValues:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)_insertValues:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(long long)_canAddDatumInDatabase:(id)arg1 error:(id*)arg2 ;
-(id)_frozenUUIDForUnfrozenQuantitySample:(id)arg1 HFDKey:(long long)arg2 endDate:(id)arg3 transaction:(id)arg4 profile:(id)arg5 error:(id*)arg6 ;
-(id)_dataOriginProvenanceWithTransaction:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(id)_updatedSampleForQuantitySeriesSample:(id)arg1 HFDKey:(long long)arg2 endDate:(id)arg3 transaction:(id)arg4 error:(id*)arg5 ;
-(BOOL)_getFirstTimeEndTimeCountWithTransaction:(id)arg1 HFDKey:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)_setHFDKey:(long long)arg1 database:(id)arg2 error:(id*)arg3 ;
-(BOOL)enumerateDataWithTransaction:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)startTimeEndTimeCountForSeriesWithTransaction:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)_isSeriesInDatabase:(id)arg1 ;
-(id)_mergeCodableSeriesDataFromQuantitySampleSeries:(id)arg1 profile:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
-(long long)_hasV1SeriesDataWithDatabase:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setInsertionEra:(long long)arg1 database:(id)arg2 error:(id*)arg3 ;
-(id)countForSeriesWithTransaction:(id)arg1 error:(id*)arg2 ;
-(id)freezeWithEndDate:(id)arg1 transaction:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
-(id)hasSeriesDataWithTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateDataInInterval:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)unitTesting_setInsertionEra:(long long)arg1 profile:(id)arg2 error:(id*)arg3 ;
@end

