/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

