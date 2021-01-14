/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol SGXPCActivityManagerProtocol
@required
-(BOOL)setState:(id)arg1 state:(long long)arg2;
-(void)registerForActivity:(int)arg1 handler:(/*^block*/id)arg2;
-(id)copyCriteria:(id)arg1;
-(long long)getState:(id)arg1;
-(void)registerActivitiesWithSystem;
-(id)activityForActivityId:(int)arg1;
-(BOOL)shouldDefer:(id)arg1;
-(void)setCriteria:(id)arg1 criteria:(id)arg2 forActivity:(int)arg3;

@end

