/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@protocol TRITaskQueuing <TRITaskQueueControlling>
@required
-(unsigned long long)count;
-(BOOL)cancelTask:(id)arg1;
-(BOOL)addTask:(id)arg1 options:(id)arg2;
-(BOOL)resumeWithXPCActivityDescriptor:(id)arg1 executeWhenSuspended:(/*^block*/id)arg2;

@end

