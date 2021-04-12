/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol AFAnalyticsService <NSObject>
@optional
-(oneway void)stageEvent:(id)arg1;
-(oneway void)stageEvents:(id)arg1;

@required
-(oneway void)stageEvents:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)logInstrumentationOfType:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;
-(oneway void)beginEventsGrouping;
-(oneway void)endEventsGrouping;

@end

