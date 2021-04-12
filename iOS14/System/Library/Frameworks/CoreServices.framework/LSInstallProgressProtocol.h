/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@protocol LSInstallProgressProtocol <NSObject>
@required
-(void)_lsPing:(id)arg1 reply:(/*^block*/id)arg2;
-(void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2;
-(void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3 reply:(/*^block*/id)arg4;
-(void)removeObserver;
-(void)installationFailedForApplication:(id)arg1 reply:(/*^block*/id)arg2;
-(void)sendNotification:(int)arg1 forApplications:(id)arg2 withPlugins:(BOOL)arg3;
-(void)addObserver;

@end

