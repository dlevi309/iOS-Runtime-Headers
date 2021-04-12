/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/PPQuickTypeServantProtocol.h>

@class PPConnectionsMetricsTracker;

@interface PPQuickTypeConnectionsServant : NSObject <PPQuickTypeServantProtocol> {

	PPConnectionsMetricsTracker* _metricsTracker;

}
-(id)init;
-(id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3 ;
-(id)_locationForQuery:(id)arg1 limit:(unsigned long long)arg2 consumer:(unsigned long long)arg3 explanationSet:(id)arg4 ;
-(id)criteriaFromQuery:(id)arg1 ;
@end

