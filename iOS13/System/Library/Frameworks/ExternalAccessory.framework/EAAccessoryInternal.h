/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
*/


@protocol EAAccessoryDelegate;
@class NSString, NSData, NSDictionary, NSLock, NSMutableArray, NSArray;

@interface EAAccessoryInternal : NSObject {

	BOOL _connected;
	unsigned _connectionID;
	NSString* _name;
	NSString* _manufacturer;
	NSString* _modelNumber;
	NSString* _serialNumber;
	NSString* _firmwareRevisionActive;
	NSString* _firmwareRevisionPending;
	NSString* _hardwareRevision;
	NSString* _dockType;
	NSString* _macAddress;
	NSString* _preferredApp;
	NSData* _certSerial;
	NSData* _certData;
	NSString* _ppid;
	int _classType;
	NSDictionary* _audioPorts;
	unsigned _capabilities;
	BOOL _notPresentInIAPAccessoriesArray;
	NSLock* _locationLock;
	NSMutableArray* _sessionsList;
	NSArray* _eqNames;
	int _locationSentenceTypesMask;
	NSDictionary* _vehicleInfoSupportedTypes;
	NSDictionary* _vehicleInfoInitialData;
	NSArray* _cameraComponents;
	NSDictionary* _protocols;
	id<EAAccessoryDelegate> _delegate;
	BOOL _pointOfInterestHandoffEnabled;
	BOOL _hasIPConnection;
	BOOL _isAvailableOverBonjour;
	BOOL _createdByCoreAccessories;
	unsigned _eqIndex;
	NSMutableArray* _enqueuedNMEASentences;
	unsigned long long _destinationSharingOptions;
	NSDictionary* _protocolDetails;
	NSString* _coreAccessoryPrimaryUUID;
	NSString* _bonjourName;
	/*^block*/id _pairingCompletionBlock;
	/*^block*/id _WiFiCredentialsCompletionBlock;

}

@property (assign,nonatomic) BOOL connected;                                        //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) unsigned connectionID;                                 //@synthesize connectionID=_connectionID - In the implementation block
@property (nonatomic,copy) NSString * manufacturer;                                 //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * modelNumber;                                  //@synthesize modelNumber=_modelNumber - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                                 //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * firmwareRevisionActive;                       //@synthesize firmwareRevisionActive=_firmwareRevisionActive - In the implementation block
@property (nonatomic,copy) NSString * firmwareRevisionPending;                      //@synthesize firmwareRevisionPending=_firmwareRevisionPending - In the implementation block
@property (nonatomic,copy) NSString * hardwareRevision;                             //@synthesize hardwareRevision=_hardwareRevision - In the implementation block
@property (nonatomic,copy) NSString * dockType;                                     //@synthesize dockType=_dockType - In the implementation block
@property (nonatomic,copy) NSString * macAddress;                                   //@synthesize macAddress=_macAddress - In the implementation block
@property (nonatomic,copy) NSString * preferredApp;                                 //@synthesize preferredApp=_preferredApp - In the implementation block
@property (nonatomic,copy) NSData * certSerial;                                     //@synthesize certSerial=_certSerial - In the implementation block
@property (nonatomic,copy) NSData * certData;                                       //@synthesize certData=_certData - In the implementation block
@property (nonatomic,copy) NSString * ppid;                                         //@synthesize ppid=_ppid - In the implementation block
@property (nonatomic,copy) NSDictionary * protocolDetails;                          //@synthesize protocolDetails=_protocolDetails - In the implementation block
@property (nonatomic,copy) NSString * coreAccessoryPrimaryUUID;                     //@synthesize coreAccessoryPrimaryUUID=_coreAccessoryPrimaryUUID - In the implementation block
@property (assign,nonatomic) int classType;                                         //@synthesize classType=_classType - In the implementation block
@property (nonatomic,retain) NSDictionary * audioPorts;                             //@synthesize audioPorts=_audioPorts - In the implementation block
@property (assign,nonatomic) unsigned capabilities;                                 //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) BOOL notPresentInIAPAccessoriesArray;                  //@synthesize notPresentInIAPAccessoriesArray=_notPresentInIAPAccessoriesArray - In the implementation block
@property (nonatomic,readonly) NSArray * sessionsList; 
@property (nonatomic,retain) NSArray * eqNames;                                     //@synthesize eqNames=_eqNames - In the implementation block
@property (assign,nonatomic) unsigned eqIndex;                                      //@synthesize eqIndex=_eqIndex - In the implementation block
@property (assign,nonatomic) int locationSentenceTypesMask;                         //@synthesize locationSentenceTypesMask=_locationSentenceTypesMask - In the implementation block
@property (nonatomic,retain) NSDictionary * vehicleInfoSupportedTypes;              //@synthesize vehicleInfoSupportedTypes=_vehicleInfoSupportedTypes - In the implementation block
@property (nonatomic,retain) NSDictionary * vehicleInfoInitialData;                 //@synthesize vehicleInfoInitialData=_vehicleInfoInitialData - In the implementation block
@property (nonatomic,retain) NSArray * cameraComponents;                            //@synthesize cameraComponents=_cameraComponents - In the implementation block
@property (nonatomic,retain) NSMutableArray * enqueuedNMEASentences;                //@synthesize enqueuedNMEASentences=_enqueuedNMEASentences - In the implementation block
@property (nonatomic,retain) NSDictionary * protocols;                              //@synthesize protocols=_protocols - In the implementation block
@property (assign,nonatomic) id<EAAccessoryDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * bonjourName;                                  //@synthesize bonjourName=_bonjourName - In the implementation block
@property (assign,nonatomic) BOOL hasIPConnection;                                  //@synthesize hasIPConnection=_hasIPConnection - In the implementation block
@property (assign,nonatomic) BOOL isAvailableOverBonjour;                           //@synthesize isAvailableOverBonjour=_isAvailableOverBonjour - In the implementation block
@property (assign) BOOL pointOfInterestHandoffEnabled;                              //@synthesize pointOfInterestHandoffEnabled=_pointOfInterestHandoffEnabled - In the implementation block
@property (assign) BOOL createdByCoreAccessories;                                   //@synthesize createdByCoreAccessories=_createdByCoreAccessories - In the implementation block
@property (copy) id pairingCompletionBlock;                                         //@synthesize pairingCompletionBlock=_pairingCompletionBlock - In the implementation block
@property (copy) id WiFiCredentialsCompletionBlock;                                 //@synthesize WiFiCredentialsCompletionBlock=_WiFiCredentialsCompletionBlock - In the implementation block
@property (assign) unsigned long long destinationSharingOptions;                    //@synthesize destinationSharingOptions=_destinationSharingOptions - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(id<EAAccessoryDelegate>)delegate;
-(void)setDelegate:(id<EAAccessoryDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)serialNumber;
-(int)classType;
-(NSDictionary *)protocols;
-(void)setClassType:(int)arg1 ;
-(NSString *)macAddress;
-(unsigned)capabilities;
-(void)setCapabilities:(unsigned)arg1 ;
-(NSData *)certData;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)connected;
-(void)addSession:(id)arg1 ;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setModelNumber:(NSString *)arg1 ;
-(NSString *)modelNumber;
-(void)removeSession:(id)arg1 ;
-(unsigned)connectionID;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setConnectionID:(unsigned)arg1 ;
-(void)setMacAddress:(NSString *)arg1 ;
-(NSString *)hardwareRevision;
-(NSDictionary *)vehicleInfoInitialData;
-(NSString *)ppid;
-(unsigned long long)destinationSharingOptions;
-(NSString *)firmwareRevisionActive;
-(void)setFirmwareRevisionActive:(NSString *)arg1 ;
-(NSString *)firmwareRevisionPending;
-(void)setFirmwareRevisionPending:(NSString *)arg1 ;
-(void)setHardwareRevision:(NSString *)arg1 ;
-(void)setPpid:(NSString *)arg1 ;
-(void)setDestinationSharingOptions:(unsigned long long)arg1 ;
-(void)setPointOfInterestHandoffEnabled:(BOOL)arg1 ;
-(BOOL)createdByCoreAccessories;
-(NSData *)certSerial;
-(void)setDockType:(NSString *)arg1 ;
-(void)setProtocolDetails:(NSDictionary *)arg1 ;
-(void)setProtocols:(NSDictionary *)arg1 ;
-(void)setPreferredApp:(NSString *)arg1 ;
-(void)setCertSerial:(NSData *)arg1 ;
-(void)setCertData:(NSData *)arg1 ;
-(void)setEqNames:(NSArray *)arg1 ;
-(void)setEqIndex:(unsigned)arg1 ;
-(void)setLocationSentenceTypesMask:(int)arg1 ;
-(void)setVehicleInfoSupportedTypes:(NSDictionary *)arg1 ;
-(void)setVehicleInfoInitialData:(NSDictionary *)arg1 ;
-(void)setCameraComponents:(NSArray *)arg1 ;
-(void)setAudioPorts:(NSDictionary *)arg1 ;
-(void)setCoreAccessoryPrimaryUUID:(NSString *)arg1 ;
-(NSString *)coreAccessoryPrimaryUUID;
-(void)setCreatedByCoreAccessories:(BOOL)arg1 ;
-(NSString *)dockType;
-(void)setNotPresentInIAPAccessoriesArray:(BOOL)arg1 ;
-(NSArray *)sessionsList;
-(BOOL)notPresentInIAPAccessoriesArray;
-(NSDictionary *)protocolDetails;
-(NSString *)preferredApp;
-(NSDictionary *)audioPorts;
-(NSArray *)eqNames;
-(unsigned)eqIndex;
-(BOOL)pointOfInterestHandoffEnabled;
-(int)locationSentenceTypesMask;
-(NSMutableArray *)enqueuedNMEASentences;
-(void)setPairingCompletionBlock:(id)arg1 ;
-(id)pairingCompletionBlock;
-(NSDictionary *)vehicleInfoSupportedTypes;
-(NSArray *)cameraComponents;
-(NSString *)bonjourName;
-(BOOL)hasIPConnection;
-(BOOL)isAvailableOverBonjour;
-(void)setEnqueuedNMEASentences:(NSMutableArray *)arg1 ;
-(void)setBonjourName:(NSString *)arg1 ;
-(void)setHasIPConnection:(BOOL)arg1 ;
-(void)setIsAvailableOverBonjour:(BOOL)arg1 ;
-(id)WiFiCredentialsCompletionBlock;
-(void)setWiFiCredentialsCompletionBlock:(id)arg1 ;
@end

