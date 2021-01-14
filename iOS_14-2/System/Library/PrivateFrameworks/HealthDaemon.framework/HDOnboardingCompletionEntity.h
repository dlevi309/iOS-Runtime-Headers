/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDOnboardingCompletionEntity : HDHealthEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(id)_onboardingCompletionWithUUID:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(BOOL)_enumerateAllOnboardingCompletionModelsWithTransaction:(id)arg1 predicate:(id)arg2 orderedByProperty:(id)arg3 ascending:(BOOL)arg4 error:(id*)arg5 enumerationHandler:(/*^block*/id)arg6 ;
+(id)_insertEntityWithUUID:(id)arg1 featureIdentifier:(id)arg2 version:(long long)arg3 completionDate:(id)arg4 countryCode:(id)arg5 modificationDate:(id)arg6 deleted:(BOOL)arg7 syncProvenance:(long long)arg8 transaction:(id)arg9 error:(id*)arg10 ;
+(id)onboardingCompletionsForHighestVersionOfFeatureIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(id)propertyForSyncProvenance;
+(long long)protectionClass;
+(BOOL)_deleteEntitiesWithUUIDs:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(BOOL)_hasNoEquivalentCompletionForOnboardingCompletion:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(id)_deletedEntityWithUUID:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(BOOL)deleteAllCompletionsForFeatureIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(id)insertOnboardingCompletion:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(id)_onboardingCompletionsForHighestVersion:(BOOL)arg1 featureIdentifier:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
+(id)insertCodableOnboardingCompletions:(id)arg1 syncProvenance:(long long)arg2 transaction:(id)arg3 error:(id*)arg4 ;
+(BOOL)enumerateAllOnboardingCompletionsWithTransaction:(id)arg1 predicate:(id)arg2 error:(id*)arg3 enumerationHandler:(/*^block*/id)arg4 ;
+(BOOL)_insertCodableOnboardingCompletion:(id)arg1 syncProvenance:(long long)arg2 transaction:(id)arg3 changedFeatureIdentifier:(id*)arg4 error:(id*)arg5 ;
+(id)onboardingCompletionsForLowestVersionOfFeatureIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)onboardingCompletionWithTransaction:(id)arg1 error:(id*)arg2 ;
@end

