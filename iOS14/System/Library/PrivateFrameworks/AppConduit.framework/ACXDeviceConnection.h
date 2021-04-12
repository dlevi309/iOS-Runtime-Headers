/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
*/

#import <libobjc.A.dylib/ACXDeviceConnectionDelegateProtocol.h>

@protocol ACXDeviceConnectionDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSXPCConnection, NSHashTable, NSObject, NSString;

@interface ACXDeviceConnection : NSObject <ACXDeviceConnectionDelegateProtocol> {

	BOOL _observersEnabled;
	BOOL _monitoringForDeviceChanges;
	id<ACXDeviceConnectionDelegate> _delegate;
	NSXPCConnection* _xpcConnection;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSObject*<OS_dispatch_source> _observerReEstablishTimer;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                     //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) BOOL observersEnabled;                                               //@synthesize observersEnabled=_observersEnabled - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                           //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;                        //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> observerQueue;                        //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> observerReEstablishTimer;              //@synthesize observerReEstablishTimer=_observerReEstablishTimer - In the implementation block
@property (assign,nonatomic) BOOL monitoringForDeviceChanges;                                     //@synthesize monitoringForDeviceChanges=_monitoringForDeviceChanges - In the implementation block
@property (assign,nonatomic,__weak) id<ACXDeviceConnectionDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDeviceConnection;
+(void)_removeFilesAtURL:(id)arg1 ;
+(void)performUninstallationCleanup;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)cancelUpdatePendingForCompanionApp:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)enumerateInstallableSystemAppsOnDeviceWithPairingID:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)fetchInstalledApplicationsWithErrorCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(void)setAlwaysInstall:(id)arg1 ;
-(void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAlwaysInstall:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)fetchApplicationDatabaseSyncInformationForPairedDevice:(id)arg1 returningDatabaseUUID:(id*)arg2 lastSequenceNumber:(unsigned long long*)arg3 error:(id*)arg4 ;
-(void)applicationsUpdated:(id)arg1 onDeviceWithPairingID:(id)arg2 ;
-(NSHashTable *)observers;
-(void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2 ;
-(void)fetchInstalledComplicationsWithErrorCompletion:(/*^block*/id)arg1 ;
-(void)applicationIsInstalledOnDeviceWithPairingID:(id)arg1 withCompanionBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 onPairedDevice:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setObserversEnabled:(BOOL)arg1 ;
-(void)removeProvisioningProfileWithID:(id)arg1 fromPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<ACXDeviceConnectionDelegate>)delegate;
-(void)_onQueue_endMonitoringNanoRegistryDeviceState;
-(void)enumerateInstalledApplicationsOnDeviceWithPairingID:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg1 ;
-(void)removeApplication:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)acknowledgeTestFlightInstallBegunForApp:(id)arg1 onDeviceWithPairingID:(id)arg2 error:(id*)arg3 ;
-(NSObject*<OS_dispatch_source>)observerReEstablishTimer;
-(void)installApplicationAtURL:(id)arg1 onDeviceWithPairingID:(id)arg2 installOptions:(id)arg3 size:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)setObserverReEstablishTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)fetchLocallyAvailableApplicationWithBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2 ;
-(BOOL)monitoringForDeviceChanges;
-(void)systemAppIsInstallableOnPairedDevice:(id)arg1 withBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchInfoForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchInstalledComplicationsForPairedDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)installProvisioningProfileWithURL:(id)arg1 onPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)activeComplicationsWithErrorCompletion:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<ACXDeviceConnectionDelegate>)arg1 ;
-(void)fetchLocallyAvailableApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)activeComplicationsForPairedDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchApplicationOnPairedDevice:(id)arg1 withBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchInstallableSystemAppWithBundleID:(id)arg1 onPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)killDaemonForTestingWithError:(id*)arg1 ;
-(void)installApplication:(id)arg1 completionWithError:(/*^block*/id)arg2 ;
-(void)enumerateLocallyAvailableApplicationsForDeviceWithPairingID:(id)arg1 options:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)fetchProvisioningProfilesWithCompletion:(/*^block*/id)arg1 ;
-(void)updatedInstallStateForApplicationsWithInfo:(id)arg1 ;
-(void)_onQueue_reEstablishObserverConnectionIfNeeded;
-(void)installApplication:(id)arg1 onPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAllExistingAppsShouldBeInstalled:(BOOL)arg1 forNewDevice:(id)arg2 ;
-(void)observerRegistrationSuccessful;
-(BOOL)fetchApplicationDatabaseSyncInformationForDeviceWithPairingID:(id)arg1 returningDatabaseUUID:(id*)arg2 lastSequenceNumber:(unsigned long long*)arg3 error:(id*)arg4 ;
-(void)systemAppIsInstallableOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 writingToPreferencesLocation:(unsigned long long)arg3 forPairedDevice:(id)arg4 options:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)installAllApplications;
-(void)applicationIsInstalledOnAnyPairedDeviceWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchApplicationOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)installProvisioningProfileWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)applicationIsInstalledOnPairedDevice:(id)arg1 withBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeProvisioningProfileWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchProvisioningProfilesForPairedDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg1 withErrorCompletion:(/*^block*/id)arg2 ;
-(void)updateInstallProgressForApplication:(id)arg1 progress:(double)arg2 phase:(unsigned long long)arg3 ;
-(void)_fetchLocallyAvailableApplicationWithBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 forPairedDevice:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)installApplicationAtURL:(id)arg1 onPairedDevice:(id)arg2 installOptions:(id)arg3 size:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)fetchInstalledApplicationsForPairedDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_deviceDidBecomeActiveNotification:(id)arg1 ;
-(void)enumerateInstalledApplicationsOnPairedDevice:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_deviceDidPairNotification:(id)arg1 ;
-(id)_proxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setUpdatePendingForCompanionApp:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enumerateInstallableSystemAppsOnPairedDevice:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_invalidateXPCConnection;
-(BOOL)installRequestFailedForApp:(id)arg1 onDeviceWithPairingID:(id)arg2 failureReason:(id)arg3 wasUserInitiated:(BOOL)arg4 error:(id*)arg5 ;
-(void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)applicationIsInstalledOnPairedDevice:(id)arg1 withCompanionBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchInstallableSystemAppWithBundleID:(id)arg1 onDeviceWithPairingID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAlwaysInstallWithCompletion:(/*^block*/id)arg1 ;
-(void)retryPendingAppInstallationsForPairedDevice:(id)arg1 ;
-(void)fetchLocallyAvailableApplicationWithContainingApplicationBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelPendingInstallations;
-(void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setMonitoringForDeviceChanges:(BOOL)arg1 ;
-(id)copyLocalizedValuesFromAllDevicesForInfoPlistKeys:(id)arg1 forAppWithBundleID:(id)arg2 fetchingFirstMatchingLocalizationInList:(id)arg3 error:(id*)arg4 ;
-(BOOL)observersEnabled;
-(void)applicationIsInstalledOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAlwaysInstallForPairedDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_synchronousProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)_onQueue_createXPCConnectionIfNecessary:(id*)arg1 ;
-(BOOL)_onQueue_enableObserversIfNeededForAValidXPCConnection;
-(void)removeApplication:(id)arg1 fromPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchLocallyAvailableApplicationWithContainingApplicationBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_onQueue_beginMonitoringNanoRegistryDeviceState;
-(void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 completionWithError:(/*^block*/id)arg3 ;
-(void)enumerateLocallyAvailableApplicationsForPairedDevice:(id)arg1 options:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)fetchInfoForApplicationWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)applicationIsInstalledOnAnyPairedDeviceWithCompanionBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

