/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/


@interface APAnalytics : NSObject
+(void)_sendEvent:(id)arg1 payload:(id)arg2 ;
+(void)sendEvent:(id)arg1 ;
+(void)_analyticsSendEvent:(id)arg1 eventPayload:(id)arg2 ;
+(void)sendEventTimed:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 message:(id)arg4 ;
+(void)sendEventError:(long long)arg1 message:(id)arg2 ;
+(void)sendEvent:(id)arg1 valueInt:(long long)arg2 ;
+(void)sendEvent:(id)arg1 valueFloat:(float)arg2 ;
@end

