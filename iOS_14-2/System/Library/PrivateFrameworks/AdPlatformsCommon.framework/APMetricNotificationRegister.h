/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/


@protocol APMetricNotificationRegister <NSObject>
@required
-(long long)registerHandlerForRoute:(long long)arg1 andMetric:(long long)arg2 closure:(/*^block*/id)arg3;
-(long long)registerHandlerForRoute:(long long)arg1 closure:(/*^block*/id)arg2;
-(void)removeHandlerWithIdentifier:(long long)arg1;

@end

