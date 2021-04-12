/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOAnalyticsPipelineProxy.h>

@class NSOperationQueue, geo_isolater, NSString;

@interface GEOAnalyticsPipelineRemoteProxy : NSObject <GEOAnalyticsPipelineProxy> {

	NSOperationQueue* _opQueue;
	unsigned long long _maxOpCount;
	unsigned long long _droppedLogMsgCount;
	geo_isolater* _enqueueLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setShortSessionValues:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)reportDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 completion:(/*^block*/id)arg5 completionQueue:(id)arg6 ;
-(void)reportDailySettingsStates:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(void)initiateUploadOfType:(int)arg1 ;
-(void)_reportMapKitCountType:(int)arg1 appId:(id)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4 ;
-(void)_reportDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 completion:(/*^block*/id)arg5 completionQueue:(id)arg6 ;
-(void)reportLogMsgType:(int)arg1 handlingPolicyId:(int)arg2 logMsg:(id)arg3 completion:(/*^block*/id)arg4 completionQueue:(id)arg5 ;
-(void)showEvalDataWithPredicate:(id)arg1 visitorBlock:(/*^block*/id)arg2 summaryBlock:(/*^block*/id)arg3 ;
-(void)reportCuratedCollectionActionType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4 ;
-(id)getEvalStatus;
-(void)_enqueueOperation:(id)arg1 ;
-(void)flushEvalData;
-(void)_reportDailySettingsStates:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(void)reportMapKitCountType:(int)arg1 appId:(id)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4 ;
-(void)shortSessionValuesWithCompletion:(/*^block*/id)arg1 ;
-(void)_reportCuratedCollectionActionType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4 ;
-(void)_reportLogMsgType:(int)arg1 handlingPolicyId:(int)arg2 logMsg:(id)arg3 completion:(/*^block*/id)arg4 completionQueue:(id)arg5 ;
-(void)setEvalMode:(BOOL)arg1 ;
-(void)runAggregationTasks;
@end

