/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class ATXActionResponse;

@interface ATXActionSessionLog : NSObject {

	unsigned long long _engagementType;
	ATXActionResponse* _actionResponse;
	BOOL _isShadowLog;

}
+(double)_bucketize:(double)arg1 bucketSize:(double)arg2 ;
+(double)roundedElapsedTimeWithStartDate:(id)arg1 endDate:(id)arg2 accuracy:(double)arg3 ;
+(void)performSessionLoggingWithActionResponse:(id)arg1 engagementType:(unsigned long long)arg2 isShadowLog:(BOOL)arg3 forTestingMode:(BOOL)arg4 ;
-(id)init;
-(id)initWithActionEngagementType:(unsigned long long)arg1 actionResponse:(id)arg2 isShadowLog:(BOOL)arg3 ;
-(void)performSessionLogging:(BOOL)arg1 ;
-(id)constructSessionLogDictionaryWithAWDSessionOut:(id*)arg1 forTestingMode:(BOOL)arg2 ;
-(void)_removeScoreInputsWithoutCrashTracerApproval:(id)arg1 ;
-(id)constructActionDataDictionaryWithEngagedIndicesOut:(id*)arg1 andAWDActionOut:(id*)arg2 andEngagementTypeFound:(unsigned long long*)arg3 forTestingMode:(BOOL)arg4 ;
@end

