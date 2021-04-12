/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@protocol TRITaskQueuing
@required
-(unsigned long long)count;
-(void)stop;
-(BOOL)addTask:(id)arg1;
-(BOOL)cancelTask:(id)arg1;
-(BOOL)cancelTasksWithTag:(id)arg1;
-(BOOL)resumeWithXPCActivityDescriptor:(id)arg1 executeWhenSuspended:(/*^block*/id)arg2;

@end

