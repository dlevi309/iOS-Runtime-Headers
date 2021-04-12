/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/REMLMetricsProvider.h>

@class NSMutableDictionary, NSMutableSet;

@interface REMLMetricsSet : NSObject <REMLMetricsProvider> {

	NSMutableDictionary* metricsIndex;
	NSMutableSet* metricsSet;

}
-(id)init;
-(id)name;
-(void)reset;
-(BOOL)addMetrics:(id)arg1 ;
-(void)updateMetricsFromFeatures:(id)arg1 prediction:(id)arg2 truth:(id)arg3 ;
-(id)getMetricsByName:(id)arg1 ;
@end

