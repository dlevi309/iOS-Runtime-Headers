/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/


@protocol DESService <NSObject>
@required
-(void)runLiveEvaluationForBundleId:(id)arg1 baseURL:(id)arg2 localeIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(void)fetchInstalledBundlesIdsWithCompletion:(/*^block*/id)arg1;
-(void)deleteSavedRecordForBundleId:(id)arg1 identfier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)saveCoreDuetEvent:(id)arg1 completion:(/*^block*/id)arg2;
-(void)runEvaluationForBundleId:(id)arg1 recipePath:(id)arg2 recordUUIDs:(id)arg3 attachments:(id)arg4 sandboxExtensions:(id)arg5 completion:(/*^block*/id)arg6;
-(void)fetchSavedRecordInfoForRecordType:(id)arg1 completion:(/*^block*/id)arg2;
-(void)runLiveEvaluationForAllBundlesWithBaseURL:(id)arg1 localeIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)wakeUpWithCompletion:(/*^block*/id)arg1;
-(void)fetchRecordsForBundleId:(id)arg1 completion:(/*^block*/id)arg2;
-(void)saveRecordForBundleId:(id)arg1 data:(id)arg2 recordInfo:(id)arg3 completion:(/*^block*/id)arg4;
-(void)setValue:(id)arg1 forInfoKey:(id)arg2 bundleID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)deleteAllSavedRecordsForBundleId:(id)arg1 completion:(/*^block*/id)arg2;
-(void)postRecipeResultForBundleId:(id)arg1 baseURL:(id)arg2 result:(id)arg3 recipeUUID:(id)arg4 completion:(/*^block*/id)arg5;
-(void)fetchNativeRecordDataForRecordUUID:(id)arg1 bundleId:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchTelemetryForBundleId:(id)arg1 completion:(/*^block*/id)arg2;

@end

