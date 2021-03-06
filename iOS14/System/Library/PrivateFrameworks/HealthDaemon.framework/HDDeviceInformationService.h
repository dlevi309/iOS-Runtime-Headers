/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDHealthService.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSObject, NSMutableArray, NSString;

@interface HDDeviceInformationService : HDHealthService {

	BOOL _fetchLimitedCharacteristics;
	BOOL _deviceInformationHasBeenLoaded;
	NSMutableDictionary* _characteristics;
	NSMutableDictionary* _propertyValues;
	NSMutableSet* _propertiesLeftToFetch;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _pendingDeviceInformationLoadedBlocks;

}

@property (nonatomic,retain) NSMutableDictionary * characteristics;                              //@synthesize characteristics=_characteristics - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * propertyValues;                               //@synthesize propertyValues=_propertyValues - In the implementation block
@property (nonatomic,retain) NSMutableSet * propertiesLeftToFetch;                               //@synthesize propertiesLeftToFetch=_propertiesLeftToFetch - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL deviceInformationHasBeenLoaded;                                //@synthesize deviceInformationHasBeenLoaded=_deviceInformationHasBeenLoaded - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingDeviceInformationLoadedBlocks;              //@synthesize pendingDeviceInformationLoadedBlocks=_pendingDeviceInformationLoadedBlocks - In the implementation block
@property (readonly) NSString * manufacturerName; 
@property (readonly) NSString * modelNumber; 
@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * hardwareRevision; 
@property (readonly) NSString * firmwareRevision; 
@property (readonly) NSString * softwareRevision; 
@property (assign,nonatomic) BOOL fetchLimitedCharacteristics;                                   //@synthesize fetchLimitedCharacteristics=_fetchLimitedCharacteristics - In the implementation block
+(id)serviceUUID;
+(long long)serviceType;
+(id)implementedProperties;
-(NSString *)serialNumber;
-(NSString *)manufacturerName;
-(NSString *)hardwareRevision;
-(NSMutableDictionary *)propertyValues;
-(NSString *)firmwareRevision;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)modelNumber;
-(NSMutableDictionary *)characteristics;
-(void)setCharacteristics:(NSMutableDictionary *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithServiceManager:(id)arg1 peripheral:(id)arg2 advertisementData:(id)arg3 profile:(id)arg4 ;
-(void)_startDeviceInformationLoadingTimeoutTimer;
-(id)_propertyValueForPropertyName:(id)arg1 ;
-(void)_queue_setDeviceInformationHasBeenLoaded;
-(void)_queue_readProperty:(id)arg1 ;
-(void)_queue_peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2 ;
-(BOOL)fetchLimitedCharacteristics;
-(void)_queue_peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(id)_propertyValueForCharacteristic:(id)arg1 ;
-(NSString *)softwareRevision;
-(void)performWhenDeviceInformationHasBeenLoaded:(/*^block*/id)arg1 ;
-(void)readProperty:(id)arg1 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4 ;
-(void)setFetchLimitedCharacteristics:(BOOL)arg1 ;
-(void)setPropertyValues:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)propertiesLeftToFetch;
-(void)setPropertiesLeftToFetch:(NSMutableSet *)arg1 ;
-(BOOL)deviceInformationHasBeenLoaded;
-(void)setDeviceInformationHasBeenLoaded:(BOOL)arg1 ;
-(NSMutableArray *)pendingDeviceInformationLoadedBlocks;
-(void)setPendingDeviceInformationLoadedBlocks:(NSMutableArray *)arg1 ;
@end

