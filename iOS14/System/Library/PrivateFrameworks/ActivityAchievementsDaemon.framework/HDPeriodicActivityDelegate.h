/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@protocol HDPeriodicActivityDelegate <NSObject>
@optional
-(BOOL)periodicActivityRequiresProtectedData:(id)arg1;

@required
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;

@end

