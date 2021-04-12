/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <libobjc.A.dylib/ICNanoPairedDeviceStatusObserver.h>
#import <libobjc.A.dylib/ATMessageLinkObserver.h>
#import <libobjc.A.dylib/ATSessionObserver.h>

@protocol OS_dispatch_queue;
@class ATDeviceService, NSObject, NSString;

@interface ATDevicePairedSyncManager : NSObject <ICNanoPairedDeviceStatusObserver, ATMessageLinkObserver, ATSessionObserver> {

	ATDeviceService* _deviceService;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPairedSyncManager;
-(id)init;
-(void)stop;
-(void)start;
-(void)_cleanupSyncState;
-(void)nanoPairedDeviceStatusMonitorPairedDeviceChanged:(id)arg1 ;
-(void)nanoPairedDeviceStatusMonitorNewActiveDevice:(id)arg1 ;
-(void)nanoPairedDeviceStatusMonitor:(id)arg1 didFinishInitialSyncForPairingIdentifier:(id)arg2 ;
-(void)nanoPairedDeviceStatusMonitor:(id)arg1 didChangeClientSyncState:(unsigned long long)arg2 ;
-(void)_triggerInitialSync;
-(void)_setInstallDateIfNeededForBundleID:(id)arg1 ;
-(BOOL)hasRestriction;
@end

