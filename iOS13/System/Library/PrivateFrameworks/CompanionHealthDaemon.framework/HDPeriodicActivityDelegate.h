/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionHealthDaemon.framework/CompanionHealthDaemon
*/


@protocol HDPeriodicActivityDelegate <NSObject>
@optional
-(BOOL)periodicActivityRequiresProtectedData:(id)arg1;

@required
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2;

@end

