/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDHSCharacteristicsDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, HDDeviceEntity, HDProfile, HDHealthPeripheral, NSUUID, NSString, HDHealthServiceManager, NSMutableDictionary;

@interface HDHealthService : NSObject <HDHSCharacteristicsDelegate> {

	NSObject*<OS_dispatch_queue> _dataQueue;
	NSMutableArray* _pendingCharacteristicBuffer;
	HDDeviceEntity* _deviceEntity;
	AB _deviceInformationLoaded;
	BOOL _deliverData;
	BOOL _characteristicsDiscovered;
	HDProfile* _profile;
	HDHealthPeripheral* _healthPeripheral;
	NSUUID* _peripheralUUID;
	NSString* _serviceId;
	HDHealthServiceManager* _serviceManager;
	NSMutableDictionary* _writableCharacteristics;
	NSObject*<OS_dispatch_queue> _writeQueue;
	NSMutableArray* _pendingWrites;

}

@property (nonatomic,retain) HDHealthServiceManager * serviceManager;                     //@synthesize serviceManager=_serviceManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * writableCharacteristics;               //@synthesize writableCharacteristics=_writableCharacteristics - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> writeQueue;                     //@synthesize writeQueue=_writeQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingWrites;                              //@synthesize pendingWrites=_pendingWrites - In the implementation block
@property (assign,nonatomic,__weak) HDProfile * profile;                                  //@synthesize profile=_profile - In the implementation block
@property (nonatomic,__weak,readonly) HDHealthPeripheral * healthPeripheral;              //@synthesize healthPeripheral=_healthPeripheral - In the implementation block
@property (nonatomic,readonly) NSUUID * peripheralUUID;                                   //@synthesize peripheralUUID=_peripheralUUID - In the implementation block
@property (assign) BOOL deliverData;                                                      //@synthesize deliverData=_deliverData - In the implementation block
@property (nonatomic,retain) NSString * serviceId;                                        //@synthesize serviceId=_serviceId - In the implementation block
@property (nonatomic,readonly) BOOL characteristicsDiscovered;                            //@synthesize characteristicsDiscovered=_characteristicsDiscovered - In the implementation block
+(id)serviceUUID;
+(long long)serviceType;
+(id)implementedProperties;
-(HDHealthServiceManager *)serviceManager;
-(void)setProfile:(HDProfile *)arg1 ;
-(void)setWriteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)serviceId;
-(id)description;
-(NSObject*<OS_dispatch_queue>)writeQueue;
-(HDProfile *)profile;
-(void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(NSMutableArray *)pendingWrites;
-(void)setServiceManager:(HDHealthServiceManager *)arg1 ;
-(void)setServiceId:(NSString *)arg1 ;
-(id)initWithServiceManager:(id)arg1 peripheral:(id)arg2 advertisementData:(id)arg3 profile:(id)arg4 ;
-(BOOL)characteristicsDiscovered;
-(HDHealthPeripheral *)healthPeripheral;
-(void)readProperty:(id)arg1 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4 ;
-(void)characteristicDataReceived:(id)arg1 ;
-(id)servicesInProfile;
-(BOOL)processAdvertisementData:(id)arg1 ;
-(void)deviceDisconnecting;
-(BOOL)supportsOperation:(id)arg1 ;
-(void)performOperation:(id)arg1 onPeripheral:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)supportsWritingCharacteristic:(id)arg1 ;
-(void)writeCharacteristic:(id)arg1 expectResponse:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)deviceInformationSetOnPeripheral;
-(void)peripheral:(id)arg1 didDiscoverCharacteristics:(id)arg2 ;
-(void)setWritableCharacteristic:(id)arg1 ;
-(BOOL)deliverData;
-(void)setDeliverData:(BOOL)arg1 ;
-(BOOL)_shouldNotifyReceivedData;
-(void)_dataQueue_notifyCharacteristic:(id)arg1 ;
-(void)_bufferCharacteristicToBeNotified:(id)arg1 ;
-(void)executeFirstWrite;
-(void)respondFirstWriteWithData:(id)arg1 error:(id)arg2 ;
-(void)markCharacteristicsDiscovered;
-(void)_dataQueue_deliverDataIfPossible;
-(id)_dataQueue_deviceEntity;
-(void)mfaSucceededOnPeripheral;
-(NSUUID *)peripheralUUID;
-(NSMutableDictionary *)writableCharacteristics;
-(void)setWritableCharacteristics:(NSMutableDictionary *)arg1 ;
-(void)setPendingWrites:(NSMutableArray *)arg1 ;
@end

