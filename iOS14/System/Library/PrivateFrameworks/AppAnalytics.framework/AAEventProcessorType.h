/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
*/


@protocol AAEventProcessorType
@optional
-(void)didEnterGroup:(id)arg1;
-(void)didLeaveGroup:(id)arg1;
-(void)didStartSession:(id)arg1;
-(void)didUpdateSession:(id)arg1;
-(void)didEndSession:(id)arg1 endDate:(id)arg2;

@required
-(void)processEvent:(id)arg1;

@end

