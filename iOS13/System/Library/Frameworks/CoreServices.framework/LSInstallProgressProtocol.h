/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@protocol LSInstallProgressProtocol <NSObject>
@required
-(void)addObserver;
-(void)_lsPing:(id)arg1 reply:(/*^block*/id)arg2;
-(void)removeObserver;
-(void)sendNotification:(int)arg1 forApplications:(id)arg2 withPlugins:(BOOL)arg3;
-(void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2;
-(void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3 reply:(/*^block*/id)arg4;
-(void)installationFailedForApplication:(id)arg1 reply:(/*^block*/id)arg2;

@end

