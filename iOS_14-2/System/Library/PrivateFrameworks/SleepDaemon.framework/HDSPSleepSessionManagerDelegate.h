/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


@protocol HDSPSleepSessionManagerDelegate <NSObject>
@optional
-(void)sleepSessionManagerDidFinishSession:(id)arg1;
-(void)sleepSessionManager:(id)arg1 didSaveArchivedSessions:(id)arg2;
-(id)sleepSessionManager:(id)arg1 requestsProcessedSessionForSession:(id)arg2;

@required
-(void)sleepSessionManager:(id)arg1 didSaveSession:(id)arg2;

@end

