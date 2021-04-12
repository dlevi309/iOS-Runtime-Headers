/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/REMLMetricsProvider.h>

@class NSMutableDictionary, NSMutableSet;

@interface REMLMetricsSet : NSObject <REMLMetricsProvider> {

	NSMutableDictionary* metricsIndex;
	NSMutableSet* metricsSet;

}
-(id)init;
-(BOOL)addMetrics:(id)arg1 ;
-(id)name;
-(void)reset;
-(void)updateMetricsFromFeatures:(id)arg1 prediction:(id)arg2 truth:(id)arg3 ;
-(id)getMetricsByName:(id)arg1 ;
@end

