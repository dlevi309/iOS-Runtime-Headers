/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOAnalyticsPipelineProxy <NSObject>
@required
-(void)setShortSessionValues:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)reportDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 completion:(/*^block*/id)arg5 completionQueue:(id)arg6;
-(void)reportDailySettingsStates:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3;
-(void)initiateUploadOfType:(int)arg1;
-(void)reportLogMsgType:(int)arg1 handlingPolicyId:(int)arg2 logMsg:(id)arg3 completion:(/*^block*/id)arg4 completionQueue:(id)arg5;
-(void)showEvalDataWithPredicate:(id)arg1 visitorBlock:(/*^block*/id)arg2 summaryBlock:(/*^block*/id)arg3;
-(void)reportCuratedCollectionActionType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4;
-(id)getEvalStatus;
-(void)flushEvalData;
-(void)reportMapKitCountType:(int)arg1 appId:(id)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4;
-(void)shortSessionValuesWithCompletion:(/*^block*/id)arg1;
-(void)setEvalMode:(BOOL)arg1;
-(void)runAggregationTasks;

@end

