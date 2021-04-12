/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol AFAnalyticsService <NSObject>
@optional
-(oneway void)stageEvent:(id)arg1;
-(oneway void)stageEvents:(id)arg1;

@required
-(oneway void)logInstrumentationOfType:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;
-(oneway void)beginEventsGrouping;
-(oneway void)endEventsGrouping;
-(oneway void)stageEvents:(id)arg1 completion:(/*^block*/id)arg2;

@end

