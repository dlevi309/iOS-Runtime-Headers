/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDActivityHookResponder <NSObject>
@optional
-(void)startedActivity:(id)arg1;
-(void)activityWithID:(id)arg1 setUserInfoObject:(id)arg2 forKey:(id)arg3;
-(void)activityWithID:(id)arg1 setCompletedCount:(long long)arg2 totalCount:(long long)arg3;
-(void)activityWithID:(id)arg1 finishedWithError:(id)arg2;
-(void)removedActivityWithID:(id)arg1;

@end

