/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/CSCommandControlBehaviorMonitorDelegate.h>

@class NSString;

@interface CSCommandControlStreamEventMonitor : CSEventMonitor <CSCommandControlBehaviorMonitorDelegate> {

	BOOL _isCommandControlStreaming;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_stopMonitoring;
-(BOOL)isStreaming;
-(void)_notifyStopCommandControl;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)commandControlBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 ;
-(void)commandControlBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 ;
-(void)commandControlBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3 ;
-(void)commandControlBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 ;
@end

