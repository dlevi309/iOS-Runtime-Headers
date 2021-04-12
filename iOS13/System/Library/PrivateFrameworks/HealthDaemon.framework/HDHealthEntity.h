/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLiteEntity.h>
#import <libobjc.A.dylib/HDHealthEntityEncoding.h>

@interface HDHealthEntity : HDSQLiteEntity <HDHealthEntityEncoding>
+(id)databaseName;
+(long long)protectionClass;
+(id)protectedDatabaseName;
+(BOOL)deleteEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(BOOL)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 inaccessibilityHandler:(/*^block*/id)arg4 ;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(BOOL)performReadTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
+(long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 session:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5 ;
+(BOOL)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 session:(id)arg3 syncAnchorRange:(HDSyncAnchorRange)arg4 limit:(unsigned long long)arg5 lastSyncAnchor:(long long*)arg6 healthDatabase:(id)arg7 error:(id*)arg8 block:(/*^block*/id)arg9 ;
+(BOOL)enumerateProperties:(id)arg1 withPredicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 enumerationHandler:(/*^block*/id)arg5 ;
+(id)propertyForSyncProvenance;
+(BOOL)performWriteTransactionWithHealthDatabase:(id)arg1 context:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 inaccessibilityHandler:(/*^block*/id)arg5 ;
+(BOOL)performReadTransactionWithHealthDatabase:(id)arg1 context:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
+(BOOL)performReadTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
+(id)maxRowIDForPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(BOOL)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
+(id)defaultForeignKey;
+(id)propertyForSyncAnchor;
+(id)anyWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(BOOL)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
+(id)predicateForSyncWithPredicate:(id)arg1 syncEntityClass:(Class)arg2 session:(id)arg3 syncAnchorRange:(HDSyncAnchorRange)arg4 ;
+(id)updateSQLForTimeOffsetWithBindingCount:(unsigned long long*)arg1 ;
+(BOOL)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 inaccessibilityHandler:(/*^block*/id)arg4 ;
+(long long)countOfObjectsWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)columnNamesForTimeOffset;
+(BOOL)performPostJournalMergeCleanupWithTransaction:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)insertOrReplaceEntity:(BOOL)arg1 healthDatabase:(id)arg2 properties:(id)arg3 error:(id*)arg4 bindingHandler:(/*^block*/id)arg5 ;
+(BOOL)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 syncEntityClass:(Class)arg3 session:(id)arg4 syncAnchorRange:(HDSyncAnchorRange)arg5 orderingTerms:(id)arg6 limit:(unsigned long long)arg7 lastSyncAnchor:(long long*)arg8 healthDatabase:(id)arg9 error:(id*)arg10 block:(/*^block*/id)arg11 ;
+(id)_syncQueryWithDatabase:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 limit:(unsigned long long)arg4 anchorProperty:(id)arg5 ;
+(long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 syncEntityClass:(Class)arg3 session:(id)arg4 orderingTerms:(id)arg5 limit:(unsigned long long)arg6 healthDatabase:(id)arg7 error:(id*)arg8 ;
+(id)_syncQueryDescriptorWithPredicate:(id)arg1 orderingTerms:(id)arg2 limit:(unsigned long long)arg3 anchorProperty:(id)arg4 ;
+(BOOL)_isNilDatabase:(id)arg1 error:(id*)arg2 ;
+(id)_transactionContextForWriting:(BOOL)arg1 baseContext:(id)arg2 ;
+(BOOL)performWriteTransactionWithHealthDatabase:(id)arg1 context:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
+(BOOL)updateProperties:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 bindingHandler:(/*^block*/id)arg5 ;
+(id)propertyValueForAnyWithProperty:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
-(BOOL)getValuesForProperties:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(id)valueForProperty:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateProperties:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 bindingHandler:(/*^block*/id)arg4 ;
-(id)stringForProperty:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
-(id)dateForProperty:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)setDate:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
-(id)stringForProperty:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)setString:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
-(id)numberForProperty:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)setNumber:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
-(id)foreignKeyEntity:(Class)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
-(BOOL)setForeignKeyEntity:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
@end
