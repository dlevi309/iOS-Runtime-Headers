/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)start;
-(void)nanoPairedDeviceStatusMonitor:(id)arg1 didFinishInitialSyncForPairingIdentifier:(id)arg2 ;
-(void)stop;
-(void)_cleanupSyncState;
-(void)nanoPairedDeviceStatusMonitorNewActiveDevice:(id)arg1 ;
-(void)_setInstallDateIfNeededForBundleID:(id)arg1 ;
-(BOOL)hasRestriction;
-(void)nanoPairedDeviceStatusMonitorPairedDeviceChanged:(id)arg1 ;
-(void)_triggerInitialSync;
-(void)nanoPairedDeviceStatusMonitor:(id)arg1 didChangeClientSyncState:(unsigned long long)arg2 ;
@end

