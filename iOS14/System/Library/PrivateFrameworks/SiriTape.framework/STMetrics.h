/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

