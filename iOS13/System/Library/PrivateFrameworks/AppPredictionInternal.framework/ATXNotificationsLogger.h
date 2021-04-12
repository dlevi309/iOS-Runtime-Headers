/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ATXNotificationsLogger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	double _standardSamplingRate;

}
+(id)sharedInstance;
-(id)init;
-(void)submitWithProtobuf:(id)arg1 logtype:(long long)arg2 ;
-(double)samplingRateForLogType:(long long)arg1 ;
-(id)samplingRateFromParsecBag;
@end

