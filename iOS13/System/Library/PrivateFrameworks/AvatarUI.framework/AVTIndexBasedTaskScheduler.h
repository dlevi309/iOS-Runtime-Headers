/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTIndexBasedTaskScheduler <NSObject>
@required
-(void)cancelAllTasks;
-(void)cancelTask:(/*^block*/id)arg1;
-(void)scheduleTask:(/*^block*/id)arg1 forIndex:(unsigned long long)arg2;
-(void)taskReady:(/*^block*/id)arg1 forIndex:(unsigned long long)arg2;

@end

