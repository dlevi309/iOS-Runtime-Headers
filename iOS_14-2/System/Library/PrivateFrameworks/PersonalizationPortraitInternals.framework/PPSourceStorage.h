/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class PPSQLDatabase, PPContactStorage;

@interface PPSourceStorage : NSObject {

	PPSQLDatabase* _db;
	PPContactStorage* _contactStorage;

}
+(double)matchAccuracyForSecondsFrom1970;
-(id)init;
-(long long)pruneSourcesWithNoReferencesWithTxnWitness:(id)arg1 ;
-(BOOL)iterSourcesWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)whereSourceIdInSubclauseWithSourceIds:(id)arg1 tableNameAlias:(id)arg2 binders:(id)arg3 ;
-(id)createSourceWithStatement:(id)arg1 txnWitness:(id)arg2 ;
-(long long)updateOrCreateRowForSource:(id)arg1 addingRefCount:(long long)arg2 txnWitness:(id)arg3 ;
-(id)initWithDatabase:(id)arg1 ;
-(id)loadSourcesWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 txnWitness:(id)arg4 ;
@end

