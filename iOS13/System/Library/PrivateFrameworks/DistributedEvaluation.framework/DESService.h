/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/


@protocol DESService <NSObject>
@required
-(void)saveRecordForBundleId:(id)arg1 data:(id)arg2 recordInfo:(id)arg3 completion:(/*^block*/id)arg4;
-(void)fetchSavedRecordInfoForRecordType:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteAllSavedRecordsForBundleId:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteSavedRecordForBundleId:(id)arg1 identfier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)saveCoreDuetEvent:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchInstalledBundlesIdsWithCompletion:(/*^block*/id)arg1;
-(void)fetchRecordsForBundleId:(id)arg1 completion:(/*^block*/id)arg2;
-(void)runEvaluationForBundleId:(id)arg1 recipePath:(id)arg2 recordUUIDs:(id)arg3 attachments:(id)arg4 completion:(/*^block*/id)arg5;
-(void)runLiveEvaluationForBundleId:(id)arg1 baseURL:(id)arg2 localeIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(void)runLiveEvaluationForAllBundlesWithBaseURL:(id)arg1 localeIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchTelemetryForBundleId:(id)arg1 completion:(/*^block*/id)arg2;
-(void)postRecipeResultForBundleId:(id)arg1 baseURL:(id)arg2 result:(id)arg3 recipeUUID:(id)arg4 completion:(/*^block*/id)arg5;
-(void)setValue:(id)arg1 forInfoKey:(id)arg2 bundleID:(id)arg3 completion:(/*^block*/id)arg4;

@end

