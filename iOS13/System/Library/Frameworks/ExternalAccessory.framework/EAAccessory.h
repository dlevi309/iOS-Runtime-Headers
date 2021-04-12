/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
*/


@class EAAccessoryInternal, NSString, NSArray;

@interface EAAccessory : NSObject {

	EAAccessoryInternal* _internal;

}

@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (nonatomic,readonly) unsigned long long connectionID; 
@property (nonatomic,readonly) NSString * manufacturer; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * modelNumber; 
@property (nonatomic,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) NSString * firmwareRevision; 
@property (nonatomic,readonly) NSString * hardwareRevision; 
@property (nonatomic,readonly) NSString * dockType; 
@property (nonatomic,readonly) NSArray * protocolStrings; 
@property (assign,nonatomic) id<EAAccessoryDelegate> delegate; 
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id<EAAccessoryDelegate>)delegate;
-(void)setDelegate:(id<EAAccessoryDelegate>)arg1 ;
-(NSString *)serialNumber;
-(int)classType;
-(id)_shortDescription;
-(id)macAddress;
-(id)certData;
-(BOOL)isConnected;
-(NSString *)manufacturer;
-(NSString *)modelNumber;
-(unsigned long long)connectionID;
-(BOOL)supportsLocation;
-(NSString *)firmwareRevision;
-(NSString *)hardwareRevision;
-(BOOL)supportsWirelessCarPlay;
-(unsigned)accessoryCapabilities;
-(id)vehicleInfoInitialData;
-(id)ppid;
-(unsigned long long)destinationSharingOptions;
-(void)beginOOBBTPairingWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)requestIAPAccessoryWiFiCredentials;
-(void)sendDeviceIdentifierNotification:(id)arg1 usbIdentifier:(id)arg2 ;
-(BOOL)supportsUSBCarPlay;
-(BOOL)supportsCarPlay;
-(NSArray *)protocolStrings;
-(BOOL)supportsOOBBTPairing;
-(BOOL)supportsOOBBTPairing2;
-(BOOL)supportsCarPlayAppLinks;
-(id)getVehicleInfoData;
-(id)firmwareRevisionActive;
-(id)firmwareRevisionPending;
-(void)setDestinationSharingOptions:(unsigned long long)arg1 ;
-(id)_initWithAccessory:(id)arg1 ;
-(void)setPointOfInterestHandoffEnabled:(BOOL)arg1 ;
-(void)addNMEASentence:(id)arg1 ;
-(BOOL)containsSameProtocolsAsiAPAccessoryProtocols:(id)arg1 ;
-(BOOL)createdByCoreAccessories;
-(unsigned)_internalConnectionID;
-(void)_setConnected:(BOOL)arg1 ;
-(void)_setNotPresentInIAPAccessoriesArray:(BOOL)arg1 ;
-(BOOL)_internalNotPresentInIAPAccessoriesArray;
-(id)coreAccessoriesPrimaryUUID;
-(void)_updateAccessoryInfo:(id)arg1 ;
-(void)_OOBBTPairingCompletedWithStatus:(unsigned char)arg1 forAccessoryWithMACAddress:(id)arg2 ;
-(void)_openCompleteForSession:(unsigned)arg1 ;
-(void)_endSession:(unsigned)arg1 ;
-(id)certSerial;
-(void)setEqNames:(id)arg1 ;
-(void)setEqIndex:(unsigned)arg1 ;
-(void)setLocationSentenceTypesMask:(int)arg1 ;
-(void)setVehicleInfoSupportedTypes:(id)arg1 ;
-(void)setCameraComponents:(id)arg1 ;
-(id)_protocolIDForProtocolString:(id)arg1 ;
-(void)_addSession:(id)arg1 ;
-(void)_removeSession:(id)arg1 ;
-(NSString *)dockType;
-(id)_createWakeToken;
-(id)protocolDetails;
-(id)allPublicProtocolStrings;
-(id)preferredApp;
-(id)audioPorts;
-(id)dictionaryWithLowercaseKeys:(id)arg1 ;
-(id)eqNames;
-(unsigned)eqIndex;
-(BOOL)pointOfInterestHandoffEnabled;
-(int)locationSentenceTypesMask;
-(id)vehicleInfoSupportedTypes;
-(id)cameraComponents;
-(int)startCameraUpdates:(unsigned)arg1 forCameraIds:(id)arg2 withProperties:(id)arg3 withCapabilities:(id)arg4 ;
-(int)stopCameraUpdates:(unsigned)arg1 forCameraIds:(id)arg2 ;
-(id)wakeToken;
-(id)bonjourName;
-(BOOL)hasIPConnection;
-(BOOL)isAvailableOverBonjour;
-(BOOL)supportsPublicIap;
-(BOOL)shouldBeHiddenFromUI;
-(BOOL)supportsCamera;
-(BOOL)accessoryHasNMEASentencesAvailable;
-(BOOL)getNMEASentence:(id*)arg1 ;
-(BOOL)setNMEASentencesToFilter:(id)arg1 ;
-(void)setIAPTimeSyncParams:(id)arg1 ;
-(void)getIAPTimeSyncInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetIAPTimeSyncKalmanFilter;
-(BOOL)getEphemerisURL:(id*)arg1 ;
-(BOOL)getEphemerisRecommendRefreshInterval:(double*)arg1 ;
-(BOOL)getEphemerisExpirationInterval:(double*)arg1 ;
-(BOOL)sendGpsWeek:(unsigned long long)arg1 gpsTOW:(double)arg2 ;
-(BOOL)sendEphemerisPointDataGpsWeek:(unsigned long long)arg1 gpsTOW:(double)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(unsigned short)arg5 ;
-(BOOL)sendEphemeris:(id)arg1 ;
-(BOOL)sendGPRMCDataStatusValueA:(BOOL)arg1 ValueV:(BOOL)arg2 ValueX:(BOOL)arg3 ;
-(BOOL)sendPointOfInterestInformation:(id)arg1 identifier:(unsigned short)arg2 ;
-(BOOL)sendDestinationInformation:(id)arg1 identifier:(id)arg2 ;
-(void)setVehicleInfovehicleInfoInitialData:(id)arg1 ;
-(int)startCameraInfo:(unsigned)arg1 forCameraIds:(id)arg2 ;
-(int)stopCameraInfo:(unsigned)arg1 forCameraIds:(id)arg2 ;
-(int)setCameraProperties:(unsigned)arg1 forCameraId:(unsigned short)arg2 withProperties:(id)arg3 ;
-(int)startLivePreview:(unsigned)arg1 forCameraIds:(id)arg2 ;
-(int)stopLivePreview:(unsigned)arg1 forCameraIds:(id)arg2 ;
-(int)captureStillImage:(unsigned)arg1 forCameraIds:(id)arg2 ;
-(BOOL)supportsAccessibility;
-(void)updateSystemProperty:(int)arg1 withValue:(id)arg2 ;
-(void)updateItemProperty:(int)arg1 withValue:(id)arg2 ;
-(BOOL)supportsPointOfInterest;
-(BOOL)supportsDestinationSharing;
@end

