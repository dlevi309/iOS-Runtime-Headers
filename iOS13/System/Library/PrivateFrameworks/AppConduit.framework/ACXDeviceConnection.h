/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
*/

#import <libobjc.A.dylib/ACXDeviceConnectionDelegateProtocol.h>

@protocol ACXDeviceConnectionDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSXPCConnection, NSHashTable, NSObject, NSString;

@interface ACXDeviceConnection : NSObject <ACXDeviceConnectionDelegateProtocol> {

	id<ACXDeviceConnectionDelegate> _delegate;
	NSXPCConnection* _xpcConnection;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSObject*<OS_dispatch_source> _observerReEstablishTimer;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                     //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                           //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;                        //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> observerQueue;                        //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> observerReEstablishTimer;              //@synthesize observerReEstablishTimer=_observerReEstablishTimer - In the implementation block
@property (assign,nonatomic,__weak) id<ACXDeviceConnectionDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDeviceConnection;
+(void)_removeFilesAtURL:(id)arg1 ;
+(void)performUninstallationCleanup;
-(id)init;
-(id<ACXDeviceConnectionDelegate>)delegate;
-(void)setDelegate:(id<ACXDeviceConnectionDelegate>)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSHashTable *)observers;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)fetchInstalledApplicationsForPairedDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchInstalledApplicationsWithErrorCompletion:(/*^block*/id)arg1 ;
-(void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg1 withErrorCompletion:(/*^block*/id)arg2 ;
-(void)fetchInstalledComplicationsWithErrorCompletion:(/*^block*/id)arg1 ;
-(void)fetchInstalledComplicationsForPairedDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)activeComplicationsWithErrorCompletion:(/*^block*/id)arg1 ;
-(void)activeComplicationsForPairedDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)installAllApplications;
-(void)cancelPendingInstallations;
-(void)installApplication:(id)arg1 onPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeApplication:(id)arg1 fromPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchInfoForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAlwaysInstall:(id)arg1 ;
-(void)setAlwaysInstall:(id)arg1 forDevice:(id)arg2 ;
-(void)getAlwaysInstallForPairedDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 onPairedDevice:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)installProvisioningProfileWithURL:(id)arg1 onPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeProvisioningProfileWithID:(id)arg1 fromPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchProvisioningProfilesForPairedDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 forPairedDevice:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)installApplication:(id)arg1 completionWithError:(/*^block*/id)arg2 ;
-(void)removeApplication:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchInfoForApplicationWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getAlwaysInstallWithCompletion:(/*^block*/id)arg1 ;
-(void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 completionWithError:(/*^block*/id)arg3 ;
-(void)installProvisioningProfileWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeProvisioningProfileWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchProvisioningProfilesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_proxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_synchronousProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(id)copyLocalizedValuesFromAllDevicesForInfoPlistKeys:(id)arg1 forAppWithBundleID:(id)arg2 fetchingFirstMatchingLocalizationInList:(id)arg3 error:(id*)arg4 ;
-(BOOL)_onQueue_createXPCConnectionIfNecessary;
-(void)installApplicationAtURL:(id)arg1 onDeviceWithPairingID:(id)arg2 installOptions:(id)arg3 size:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)setUpdatePendingForCompanionApp:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelUpdatePendingForCompanionApp:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchLocallyAvailableApplicationWithContainingApplicationBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)applicationIsInstalledOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)applicationIsInstalledOnDeviceWithPairingID:(id)arg1 withCompanionBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)applicationIsInstalledOnAnyPairedDeviceWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)applicationIsInstalledOnAnyPairedDeviceWithCompanionBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)systemAppIsInstallableOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updatedInstallStateForApplicationsWithInfo:(id)arg1 ;
-(void)updateInstallProgressForApplication:(id)arg1 progress:(double)arg2 phase:(unsigned long long)arg3 ;
-(void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2 ;
-(void)applicationsUpdated:(id)arg1 onDeviceWithPairingID:(id)arg2 ;
-(void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2 ;
-(void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg1 ;
-(void)_onQueue_reEstablishObserverConnectionIfNeeded;
-(void)_invalidateXPCConnection;
-(NSObject*<OS_dispatch_source>)observerReEstablishTimer;
-(void)setObserverReEstablishTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 writingToPreferencesLocation:(unsigned long long)arg3 forPairedDevice:(id)arg4 options:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)enumerateInstalledApplicationsOnDeviceWithPairingID:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)fetchApplicationOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)enumerateLocallyAvailableApplicationsForDeviceWithPairingID:(id)arg1 options:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_fetchLocallyAvailableApplicationWithBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)fetchApplicationDatabaseSyncInformationForDeviceWithPairingID:(id)arg1 returningDatabaseUUID:(id*)arg2 lastSequenceNumber:(unsigned long long*)arg3 error:(id*)arg4 ;
-(void)enumerateInstallableSystemAppsOnDeviceWithPairingID:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)fetchInstallableSystemAppWithBundleID:(id)arg1 onDeviceWithPairingID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)retryPendingAppInstallationsForPairedDevice:(id)arg1 ;
-(void)installApplicationAtURL:(id)arg1 onPairedDevice:(id)arg2 installOptions:(id)arg3 size:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)setAllExistingAppsShouldBeInstalled:(BOOL)arg1 forNewDevice:(id)arg2 ;
-(void)enumerateInstalledApplicationsOnPairedDevice:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateLocallyAvailableApplicationsForPairedDevice:(id)arg1 options:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)fetchApplicationOnPairedDevice:(id)arg1 withBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchLocallyAvailableApplicationWithBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchLocallyAvailableApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchLocallyAvailableApplicationWithContainingApplicationBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)applicationIsInstalledOnPairedDevice:(id)arg1 withBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)applicationIsInstalledOnPairedDevice:(id)arg1 withCompanionBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)fetchApplicationDatabaseSyncInformationForPairedDevice:(id)arg1 returningDatabaseUUID:(id*)arg2 lastSequenceNumber:(unsigned long long*)arg3 error:(id*)arg4 ;
-(void)enumerateInstallableSystemAppsOnPairedDevice:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)fetchInstallableSystemAppWithBundleID:(id)arg1 onPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)systemAppIsInstallableOnPairedDevice:(id)arg1 withBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)installRequestFailedForApp:(id)arg1 onDeviceWithPairingID:(id)arg2 failureReason:(id)arg3 wasUserInitiated:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)acknowledgeTestFlightInstallBegunForApp:(id)arg1 onDeviceWithPairingID:(id)arg2 error:(id*)arg3 ;
@end

