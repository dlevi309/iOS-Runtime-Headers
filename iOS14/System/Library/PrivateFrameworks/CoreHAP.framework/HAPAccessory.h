/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	int _consecutiveFailedPingCount;
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
	NSNumber* _sleepInterval;

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
@property (nonatomic,copy) NSNumber * sleepInterval;                                //@synthesize sleepInterval=_sleepInterval - In the implementation block
@property (assign,nonatomic,__weak) id<HAPAccessoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (nonatomic,copy,readonly) NSNumber * category; 
@property (nonatomic,readonly) long long linkType;                                  //@synthesize linkType=_linkType - In the implementation block
@property (copy) HMFMACAddress * bluetoothClassicMacAddress;                        //@synthesize bluetoothClassicMacAddress=_bluetoothClassicMacAddress - In the implementation block
@property (assign,nonatomic) int consecutiveFailedPingCount;                        //@synthesize consecutiveFailedPingCount=_consecutiveFailedPingCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceIDForUniqueIdentifier:(id)arg1 ;
+(id)serverIdentifierWithUniqueIdentifier:(id)arg1 ;
+(id)productDataStringFromData:(id)arg1 ;
+(BOOL)isAccessoryPairedWithIdentifier:(id)arg1 ;
+(BOOL)isAccessoryPrimaryWithUniqueIdentifier:(id)arg1 ;
-(BOOL)isPaired;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isPrimary;
-(BOOL)isReachable;
-(NSArray *)services;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSNumber *)instanceID;
-(void)setServerIdentifier:(NSString *)arg1 ;
-(NSString *)serialNumber;
-(NSString *)serverIdentifier;
-(NSString *)firmwareVersion;
-(NSString *)model;
-(NSString *)manufacturer;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)mergeObject:(id)arg1 ;
-(void)setSupportsRelay:(BOOL)arg1 ;
-(id)init;
-(void)setServices:(NSArray *)arg1 ;
-(void)setServer:(HAPAccessoryServer *)arg1 ;
-(id<HAPAccessoryDelegate>)delegate;
-(void)setManufacturer:(NSString *)arg1 ;
-(long long)linkType;
-(BOOL)supportsRelay;
-(NSString *)uniqueIdentifier;
-(NSNumber *)category;
-(void)setReachable:(BOOL)arg1 ;
-(NSString *)name;
-(void)setDelegate:(id<HAPAccessoryDelegate>)arg1 ;
-(NSString *)description;
-(void)setModel:(NSString *)arg1 ;
-(HAPAccessoryServer *)server;
-(BOOL)shouldMergeObject:(id)arg1 ;
-(void)setInstanceID:(NSNumber *)arg1 ;
-(unsigned long long)hash;
-(void)invalidate;
-(NSNumber *)sleepInterval;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setProductData:(NSString *)arg1 ;
-(NSString *)productData;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setPrimary:(BOOL)arg1 ;
-(void)setSleepInterval:(NSNumber *)arg1 ;
-(BOOL)_isReachable;
-(BOOL)isEqual:(id)arg1 ;
-(void)readValueForCharacteristic:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setBluetoothClassicMacAddress:(HMFMACAddress *)arg1 ;
-(HMFMACAddress *)bluetoothClassicMacAddress;
-(void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeCharacteristicValue:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)characteristicsOfType:(id)arg1 ;
-(id)initWithServer:(id)arg1 instanceID:(id)arg2 ;
-(id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3 ;
-(int)consecutiveFailedPingCount;
-(void)setConsecutiveFailedPingCount:(int)arg1 ;
-(id)characteristicOfType:(id)arg1 serviceType:(id)arg2 ;
-(id)servicesOfType:(id)arg1 ;
-(BOOL)_validateCharacteristicValues;
-(BOOL)_updateAndValidateServices;
-(void)_setReachable:(BOOL)arg1 ;
-(BOOL)_updateService:(id)arg1 ;
-(BOOL)_updateForAccessoryInformationService;
@end

