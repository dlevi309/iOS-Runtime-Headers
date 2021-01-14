/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <ATFoundation/ATConcreteService.h>
#import <libobjc.A.dylib/ATMessageLinkListenerDelegate.h>
#import <libobjc.A.dylib/ATMessageLinkRequestHandler.h>
#import <libobjc.A.dylib/ATEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/ATXPCInterfaceProtocol.h>
#import <libobjc.A.dylib/ATSyncClientDelegate.h>
#import <libobjc.A.dylib/ATIDSServiceListener.h>

@protocol OS_dispatch_queue;
@class ATLockdownListener, ATNetServiceListener, ATDevicePairedSyncManager, ATIDSService, ATXPCListener, ATServiceProxyListener, NSMapTable, ATStatusObserverListener, ATDeviceSyncManager, ATLegacyDeviceSyncManager, ATDeviceSettings, ATEventScheduler, ATEnvironmentMonitor, MSVXPCTransaction, NSObject, NSString;

@interface ATDeviceService : ATConcreteService <ATMessageLinkListenerDelegate, ATMessageLinkRequestHandler, ATEnvironmentMonitorObserver, ATXPCInterfaceProtocol, ATSyncClientDelegate, ATIDSServiceListener> {

	ATLockdownListener* _lockdownListener;
	ATLockdownListener* _legacyLockdownListener;
	ATNetServiceListener* _netServiceListener;
	ATDevicePairedSyncManager* _pairedSyncManager;
	ATIDSService* _idsService;
	ATXPCListener* _xpcListener;
	ATServiceProxyListener* _proxyListener;
	NSMapTable* _messageLinkProxyListeners;
	ATStatusObserverListener* _statusObserverListener;
	ATDeviceSyncManager* _deviceSyncManager;
	ATLegacyDeviceSyncManager* _legacyDeviceSyncManager;
	ATDeviceSettings* _settings;
	ATEventScheduler* _eventScheduler;
	ATEnvironmentMonitor* _environmentMonitor;
	MSVXPCTransaction* _xpcTransaction;
	int _atcRunningToken;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_cancelSyncForMessageLink:(id)arg1 ;
-(BOOL)run;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(id)proxyListenerForMessageLink:(id)arg1 ;
-(void)applicationInstallsDidPrioritize:(id)arg1 ;
-(id)init;
-(void)listener:(id)arg1 didReceiveMessageLinkRequest:(id)arg2 ;
-(void)_scheduleNewSyncIfNeeded;
-(void)clearSyncDataWithCompletion:(/*^block*/id)arg1 ;
-(void)_removeObserversFromMessageLink:(id)arg1 ;
-(void)requestKeybagSyncToPairedDeviceWithCompletion:(/*^block*/id)arg1 ;
-(id)_deviceMessageLink;
-(void)initiateAssetDownloadSessionsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)stop;
-(void)_requestSyncForLibrary:(id)arg1 onMessageLink:(id)arg2 ;
-(void)prioritizeAsset:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)keepATCAlive:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getSyncStateWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)cancelAssetTransferForFailedAsset:(id)arg1 ;
-(void)environmentMonitorDidChangePower:(id)arg1 ;
-(void)restoreFromDeviceWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(void)syncChangesForDataClass:(id)arg1 withPriority:(int)arg2 ;
-(void)idsServiceDevicesDidChange:(id)arg1 ;
-(void)requestSyncForPairedDeviceWithPriority:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(id)allMessageLinkProxyListeners;
-(void)addMessageLink:(id)arg1 ;
-(void)openDeviceMessageLinkWithPriority:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeMessageLink:(id)arg1 ;
-(void)_addObserversToMessageLink:(id)arg1 ;
-(void)getDataRestoreIsCompleteWithCompletion:(/*^block*/id)arg1 ;
-(void)lowBatteryNotificationWithCompletion:(/*^block*/id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(void)getAssetMetricswithCompletion:(/*^block*/id)arg1 ;
-(void)purgePartialAsset:(id)arg1 forDataclass:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 forDataclass:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)handleDataMigrationFinished;
-(void)syncClient:(id)arg1 hasChangesWithPriority:(int)arg2 ;
-(void)registerForStatusOfDataclasses:(id)arg1 enabled:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)requestSyncForLibrary:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

