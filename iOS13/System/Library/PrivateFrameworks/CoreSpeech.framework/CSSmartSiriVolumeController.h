/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSAlarmMonitorDelegate.h>
#import <libobjc.A.dylib/CSTimerMonitorDelegate.h>
#import <libobjc.A.dylib/CSVolumeMonitorDelegate.h>
#import <libobjc.A.dylib/CSSmartSiriVolumeDelegate.h>

@protocol CSSmartSiriVolumeControllerDelegate, OS_dispatch_queue;
@class NSObject, CSXPCClient, NSString;

@interface CSSmartSiriVolumeController : NSObject <CSAlarmMonitorDelegate, CSTimerMonitorDelegate, CSVolumeMonitorDelegate, CSSmartSiriVolumeDelegate> {

	id<CSSmartSiriVolumeControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	CSXPCClient* _xpcClient;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSXPCClient * xpcClient;                                              //@synthesize xpcClient=_xpcClient - In the implementation block
@property (assign,nonatomic,__weak) id<CSSmartSiriVolumeControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CSSmartSiriVolumeControllerDelegate>)delegate;
-(void)setDelegate:(id<CSSmartSiriVolumeControllerDelegate>)arg1 ;
-(CSXPCClient *)xpcClient;
-(void)setXpcClient:(CSXPCClient *)arg1 ;
-(void)_createXPCClientConnectionIfNeeded;
-(void)CSVolumeMonitor:(id)arg1 didReceiveMusicVolumeChanged:(float)arg2 ;
-(void)CSVolumeMonitor:(id)arg1 didReceiveAlarmVolumeChanged:(float)arg2 ;
-(void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2 ;
-(void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2 ;
-(void)CSSmartSiriVolumeDidReceiveAlarmChanged:(long long)arg1 ;
-(void)CSSmartSiriVolumeDidReceiveTimerChanged:(long long)arg1 ;
-(void)CSSmartSiriVolumeDidReceiveMusicVolumeChanged:(float)arg1 ;
-(float)getEstimatedTTSVolume;
@end

