/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <PowerUI/PowerUISignalMonitor.h>

@protocol PowerUISignalMonitorDelegate, OS_os_log, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface PowerUIWalletSignalMonitor : NSObject <PowerUISignalMonitor> {

	id<PowerUISignalMonitorDelegate> _delegate;
	NSObject*<OS_os_log> _log;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _waitForFinalChangeTimer;

}

@property (nonatomic,retain) id<PowerUISignalMonitorDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                           //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> waitForFinalChangeTimer;              //@synthesize waitForFinalChangeTimer=_waitForFinalChangeTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wallet;
+(id)monitorWithDelegate:(id)arg1 ;
-(unsigned long long)signalID;
-(void)stopMonitoring;
-(NSObject*<OS_os_log>)log;
-(id<PowerUISignalMonitorDelegate>)delegate;
-(id)requiredFullChargeDate;
-(void)startMonitoring;
-(void)setWaitForFinalChangeTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)sourceInformationChangedNotification:(id)arg1 ;
-(void)setDelegate:(id<PowerUISignalMonitorDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)waitForFinalChangeTimer;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

