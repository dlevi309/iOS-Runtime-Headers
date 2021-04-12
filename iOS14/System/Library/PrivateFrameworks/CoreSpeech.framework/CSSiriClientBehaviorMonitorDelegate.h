/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSSiriClientBehaviorMonitorDelegate <NSObject>
@optional
-(void)siriClientBehaviorMonitor:(id)arg1 didChangedRecordState:(BOOL)arg2 withEventUUID:(id)arg3 withContext:(id)arg4;

@required
-(void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;
-(void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
-(void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
-(void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 withEventUUID:(id)arg5;

@end

