/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@interface PPSourceStorage : NSObject
+(double)matchAccuracyForSecondsFrom1970;
+(id)sha256ForSource:(id)arg1 ;
+(id)loadSourcesWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 txnWitness:(id)arg4 ;
+(id)createSourceWithStatement:(id)arg1 ;
+(long long)updateOrCreateRowForSource:(id)arg1 addingRefCount:(long long)arg2 txnWitness:(id)arg3 ;
+(id)statsWithDatabase:(id)arg1 medianRefCountNeeded:(BOOL)arg2 table:(id)arg3 txnWitness:(id)arg4 ;
+(id)statsForTableWithName:(id)arg1 medianRefCountNeeded:(BOOL)arg2 txnWitness:(id)arg3 ;
+(id)statsWithDatabase:(id)arg1 medianRefCountNeeded:(BOOL)arg2 ;
+(id)statsWithMedianRefCountNeeded:(BOOL)arg1 ;
@end

