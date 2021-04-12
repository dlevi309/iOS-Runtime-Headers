/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSOpportuneSpeakBehaviorMonitorDelegate <NSObject>
@required
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 audioProviderUUID:(id)arg3 option:(id)arg4;
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 audioProviderUUID:(id)arg3 successfully:(BOOL)arg4 option:(id)arg5;
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;

@end

