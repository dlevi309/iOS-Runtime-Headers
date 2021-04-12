/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
*/


@protocol OS_dispatch_queue;
#import <SymptomPresentationFeed/SymptomPresentationFeed-Structs.h>
@class AnalyticsWorkspace, NSObject;

@interface NetworkPerformanceFeed : NSObject {

	AnalyticsWorkspace* workspace;
	NSObject*<OS_dispatch_queue> internalQueue;
	NSObject*<OS_dispatch_queue> callerQueue;
	id _delegate;

}

@property (assign,nonatomic) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setQueue:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)_consultReturn:(/*^block*/id)arg1 advice:(int)arg2 ;
-(id)_normalizedOpts:(id)arg1 toNetwork:(int)arg2 ;
-(BOOL)_rollFlowMetricsValuesFromDict:(id)arg1 toDict:(id)arg2 forKey:(id)arg3 andRequest:(id)arg4 ;
-(id)_flowMetricsPresentationFromRoll:(id)arg1 source:(flow_stats_stuct*)arg2 ;
-(BOOL)_rollRouteMetricsValuesFromDict:(id)arg1 toDict:(id)arg2 forKey:(id)arg3 ;
-(id)_routeMetricsPresentationFromRoll:(id)arg1 source:(route_stats_stuct*)arg2 since:(id)arg3 isKnownGood:(id)arg4 isLowInternetDL:(id)arg5 isLowInternetUL:(id)arg6 isHotSpot:(id)arg7 ;
-(id)_formatInstantRouteMetrics:(id)arg1 ;
-(id)_formatWatchpointHit:(id)arg1 ;
-(id)initWithWorkspace:(id)arg1 ;
-(BOOL)setReferencePoint:(int)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)usageConsultOn:(int)arg1 onlyRelativeToReferencePoint:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)predictWaitUntilKnownGoodNetworkFor:(int)arg1 matchSignature:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)fullScorecardFor:(int)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)watchpointOn:(int)arg1 forIdentifier:(id)arg2 andKey:(id)arg3 onThreshold:(double)arg4 withOptions:(id)arg5 uponHit:(/*^block*/id)arg6 ;
-(BOOL)resetDataForKeys:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

