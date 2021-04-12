/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
*/


@class NSMutableSet, NSMutableDictionary;

@interface STMetrics : NSObject {

	NSMutableSet* memoryUsageMetricsTypes;
	NSMutableDictionary* performanceMetricsEvents;

}
+(id)sharedMetricsLogger;
-(id)init;
-(void)observeAndLogClientFlowPerformanceMetrics;
-(void)observeAndLogClientFlowMemoryUsageMetrics;
@end

