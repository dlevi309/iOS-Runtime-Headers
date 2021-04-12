/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFMerging.h>

@protocol HAPAccessoryDelegate, OS_dispatch_queue;
@class HAPAccessoryServer, NSString, NSNumber, NSArray, HMFMACAddress, NSObject;

@interface HAPAccessory : HMFObject <HMFMerging> {

	BOOL _reachable;
	BOOL _primary;
	BOOL _supportsRelay;
	id<HAPAccessoryDelegate> _delegate;
	HAPAccessoryServer* _server;
	NSString* _identifier;
	NSNumber* _instanceID;
	NSArray* _services;
	NSString* _serverIdentifier;
	long long _linkType;
	HMFMACAddress* _bluetoothClassicMacAddress;
	NSString* _uniqueIdentifier;
	NSString* _name;
	NSString* _model;
	NSString* _manufacturer;
	NSString* _serialNumber;
	NSString* _firmwareVersion;
	NSString* _productData;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (assign,nonatomic,__weak) HAPAccessoryServer * server;                    //@synthesize server=_server - In the implementation block
@property (assign,getter=isPrimary,nonatomic) BOOL primary;                         //@synthesize primary=_primary - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                     //@synthesize reachable=_reachable - In the implementation block
@property (assign,nonatomic) BOOL supportsRelay;                                    //@synthesize supportsRelay=_supportsRelay - In the implementation block
@property (nonatomic,copy) NSNumber * instanceID;                                   //@synthesize instanceID=_instanceID - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * uniqueIdentifier;                             //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * services;                                    //@synthesize services=_services - In the implementation block
@property (nonatomic,copy) NSString * serverIdentifier;                             //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * model;                                        //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * manufacturer;                                 //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                                 //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * firmwareVersion;                              //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,copy) NSString * productData;                                  //@synthesize productData=_productData - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic,__weak) id<HAPAccessoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (nonatomic,copy,readonly) NSNumber * category; 
@property (nonatomic,readonly) long long linkType;                                  //@synthesize linkType=_linkType - In the implementation block
@property (copy) HMFMACAddress * bluetoothClassicMacAddress;                        //@synthesize bluetoothClassicMacAddress=_bluetoothClassicMacAddress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)productDataStringFromData:(id)arg1 ;
+(BOOL)isAccessoryPairedWithIdentifier:(id)arg1 ;
+(id)serverIdentifierWithUniqueIdentifier:(id)arg1 ;
+(id)instanceIDForUniqueIdentifier:(id)arg1 ;
+(BOOL)isAccessoryPrimaryWithUniqueIdentifier:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(void)invalidate;
-(id<HAPAccessoryDelegate>)delegate;
-(void)setDelegate:(id<HAPAccessoryDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSNumber *)category;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)setServer:(HAPAccessoryServer *)arg1 ;
-(NSString *)model;
-(HAPAccessoryServer *)server;
-(void)setModel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(BOOL)_isReachable;
-(NSString *)serialNumber;
-(NSString *)firmwareVersion;
-(NSArray *)services;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(long long)linkType;
-(BOOL)isReachable;
-(void)setReachable:(BOOL)arg1 ;
-(BOOL)mergeObject:(id)arg1 ;
-(BOOL)shouldMergeObject:(id)arg1 ;
-(void)setServices:(NSArray *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(BOOL)isPaired;
-(NSString *)serverIdentifier;
-(void)setServerIdentifier:(NSString *)arg1 ;
-(BOOL)isPrimary;
-(void)setPrimary:(BOOL)arg1 ;
-(BOOL)supportsRelay;
-(void)setSupportsRelay:(BOOL)arg1 ;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(NSNumber *)instanceID;
-(id)initWithServer:(id)arg1 instanceID:(id)arg2 ;
-(id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3 ;
-(void)setProductData:(NSString *)arg1 ;
-(void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 logEventSession:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 logEventSession:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSString *)productData;
-(void)writeCharacteristicValue:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 logEventSession:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)readValueForCharacteristic:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 logEventSession:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)characteristicsOfType:(id)arg1 ;
-(void)setInstanceID:(NSNumber *)arg1 ;
-(id)servicesOfType:(id)arg1 ;
-(BOOL)_validateCharacteristicValues;
-(BOOL)_updateAndValidateServices;
-(void)_setReachable:(BOOL)arg1 ;
-(BOOL)_updateService:(id)arg1 ;
-(BOOL)_updateForAccessoryInformationService;
-(id)characteristicOfType:(id)arg1 serviceType:(id)arg2 ;
-(HMFMACAddress *)bluetoothClassicMacAddress;
-(void)setBluetoothClassicMacAddress:(HMFMACAddress *)arg1 ;
@end

