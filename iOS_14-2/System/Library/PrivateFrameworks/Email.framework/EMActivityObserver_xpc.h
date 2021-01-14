/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/


@protocol EMActivityObserver_xpc <NSObject>
@required
-(void)startedActivity:(id)arg1;
-(void)activityWithID:(id)arg1 setUserInfoObject:(id)arg2 forKey:(id)arg3;
-(void)activityWithID:(id)arg1 setCompletedCount:(id)arg2 totalCount:(id)arg3;
-(void)activityWithID:(id)arg1 finishedWithError:(id)arg2;
-(void)removedActivityWithID:(id)arg1;

@end

