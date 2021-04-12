/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/ATXUserMetricsLog.h>

@class ATXUserMetricsPBActionPredictionsMetricsLogEntry;

@interface ATXActionUserMetricsLog : NSObject <ATXUserMetricsLog> {

	ATXUserMetricsPBActionPredictionsMetricsLogEntry* _metric;

}
-(id)scheme;
-(double)enrollmentPeriod;
-(double)enrollmentRate;
-(id)getPBCodableWithUserId:(id)arg1 ;
-(id)initWithActionResponse:(id)arg1 abGroup:(id)arg2 rankOfFirstEngagement:(id)arg3 currentCalendar:(id)arg4 ;
@end

