/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTIndexBasedTaskScheduler <NSObject>
@required
-(void)cancelAllTasks;
-(void)scheduleTask:(/*^block*/id)arg1 forIndex:(unsigned long long)arg2;
-(void)cancelTask:(/*^block*/id)arg1;
-(void)taskReady:(/*^block*/id)arg1 forIndex:(unsigned long long)arg2;

@end

