/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/PPQuickTypeServantProtocol.h>

@class PPConnectionsMetricsTracker;

@interface PPQuickTypeConnectionsServant : NSObject <PPQuickTypeServantProtocol> {

	PPConnectionsMetricsTracker* _metricsTracker;

}
-(id)init;
-(id)_locationForQuery:(id)arg1 limit:(unsigned long long)arg2 consumer:(unsigned long long)arg3 explanationSet:(id)arg4 ;
-(id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3 ;
-(id)criteriaFromQuery:(id)arg1 ;
@end

