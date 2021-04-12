/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol OS_dispatch_queue;
@class NSObject, AnalyticsWorkspace;

@interface NWActivityHelper : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AnalyticsWorkspace* _workspace;

}
-(id)init;
-(void)_uploadCompleteNWActivityMetrics;
-(void)_garbageCollectNWActivityMetrics;
-(id)_fetchActivitiesWithPredicate:(id)arg1 ;
-(id)analyticsWorkspace;
-(void)_deleteNWActivityFragment:(id)arg1 fromContext:(id)arg2 ;
-(id)_findNWActivityMetricsForUploading;
-(void)sendReportToMetricStream:(id)arg1 ;
-(BOOL)shouldSendMetricStream;
-(void)startNWActivitySuperMetricProcessing;
@end

