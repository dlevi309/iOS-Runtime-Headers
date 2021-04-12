/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class NSArray, HAPAccessoryServerBrowserRelay, HMDMediaBrowser;


@protocol HMDAccessoryBrowserProtocol
@property (copy,readonly) NSArray * unassociatedAccessories; 
@property (nonatomic,readonly) HAPAccessoryServerBrowserRelay * relayAccessoryServerBrowser; 
@property (nonatomic,readonly) HMDMediaBrowser * mediaBrowser; 
@required
-(void)activate:(BOOL)arg1;
-(id)discoveredAccessoryServers;
-(void)stopTrackingBTLEAccessoriesWithIdentifiers:(id)arg1;
-(void)setQOS:(long long)arg1;
-(void)endActiveAssertion:(id)arg1;
-(NSArray *)unassociatedAccessories;
-(void)registerProgressHandler:(/*^block*/id)arg1 unpairedAccessoryUUID:(id)arg2;
-(void)pairAccessory:(id)arg1 configuration:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)unpairedHAPAccessoryWithAccessoryDescription:(id)arg1;
-(void)pairAccessoryWithDescription:(id)arg1 configuration:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)didReceiveUserConsentResponseForSetupAccessoryDetail:(id)arg1 consent:(BOOL)arg2;
-(void)handleNewlyPairedAccessory:(id)arg1 linkType:(long long)arg2;
-(void)startDiscoveringPairedAccessories;
-(void)removeUnassociatedAccessoryWithIdentifier:(id)arg1;
-(void)registerPairedAccessory:(id)arg1 transports:(unsigned long long)arg2 setupHash:(id)arg3 delegate:(id)arg4;
-(HMDMediaBrowser *)mediaBrowser;
-(void)deregisterPairedAccessory:(id)arg1;
-(void)addUnpairedAccessoryServer:(id)arg1 identifier:(id)arg2;
-(void)btleAccessoryReachabilityProbeTimer:(BOOL)arg1;
-(id)acessoryBrowserHapProtocol;
-(void)cancelPairingWithAccessoryDescription:(id)arg1 error:(id)arg2;
-(id)unpairedAccessoryWithUUID:(id)arg1;
-(void)cancelPairingWithAccessory:(id)arg1 error:(id)arg2;
-(void)handleSetupCodeAvailable:(id)arg1;
-(BOOL)isBrowsingAllowed;
-(void)discoverAccessoryServer:(id)arg1 linkType:(long long)arg2 errorHandler:(/*^block*/id)arg3;
-(void)discoverAccessories:(id)arg1;
-(void)probeReachabilityForBTLEAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)tombstoneAccessoryServer:(id)arg1;
-(void)resurrectAccessoryServer:(id)arg1;
-(void)resetConfiguration;
-(void)removePairingInformationForAccessoryServer:(id)arg1;
-(void)addUnassociatedAccessory:(id)arg1 forDeviceSetup:(BOOL)arg2;
-(void)startDiscoveringAccessoriesNeedingReprovisioning;
-(void)stopDiscoveringAccessories;
-(void)reprovisionAccessoryWithIdentifier:(id)arg1 wiFiPSK:(id)arg2 countryCode:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(HAPAccessoryServerBrowserRelay *)relayAccessoryServerBrowser;
-(id)beginActiveAssertionWithReason:(id)arg1;
-(void)removeUnassociatedAccessory:(id)arg1;
-(void)startDiscoveringAccessories;
-(id)dumpUnassociatedAccessories;
-(id)dumpRegisteredPairedAccessories;
-(id)dumpBrowsingConnections;
-(BOOL)hasClientRequestedMediaAccessoryControl:(id)arg1;
-(void)handleStartDiscoveringAssociatedMediaAccessories:(BOOL)arg1 forTransport:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

