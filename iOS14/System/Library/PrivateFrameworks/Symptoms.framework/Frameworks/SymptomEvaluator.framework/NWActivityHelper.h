/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol OS_dispatch_queue;
@class NSObject, AnalyticsWorkspace;

@interface NWActivityHelper : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AnalyticsWorkspace* _workspace;

}
-(id)init;
-(id)analyticsWorkspace;
-(void)_uploadCompleteNWActivityMetrics;
-(void)_garbageCollectNWActivityMetrics;
-(void)_deleteAllMetrics;
-(void)_deleteOldMetrics;
-(void)_deleteAllFragmentsMatchingPredicate:(id)arg1 ;
-(id)_fetchActivitiesWithPredicate:(id)arg1 batch:(BOOL)arg2 ;
-(void)_deleteNWActivityFragment:(id)arg1 fromContext:(id)arg2 ;
-(id)_findNWActivityMetricsForUploading;
-(void)sendReportToMetricStream:(id)arg1 ;
-(BOOL)shouldSendMetricStream;
-(void)startNWActivitySuperMetricProcessing;
-(void)cleanOutNWActivityMetrics;
-(void)purgeOldNWActivityMetrics;
@end

