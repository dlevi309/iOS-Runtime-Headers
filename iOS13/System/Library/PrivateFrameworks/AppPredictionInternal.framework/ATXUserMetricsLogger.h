/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol ATXUserMetricsLoggerTarget;
@class NSObject;

@interface ATXUserMetricsLogger : NSObject {

	NSObject*<ATXUserMetricsLoggerTarget> _target;

}
-(id)init;
-(id)initWithTarget:(id)arg1 ;
-(void)storeUserMetric:(id)arg1 ;
-(void)storeUserMetric:(id)arg1 forceUserId:(id)arg2 ;
@end

