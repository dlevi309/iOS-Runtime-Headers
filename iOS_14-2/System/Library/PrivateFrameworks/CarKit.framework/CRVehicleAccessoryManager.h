/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@protocol CRVehicleAccessoryManagerDelegate;
@class EAAccessoryManager, NSMutableDictionary, CARObserverHashTable;

@interface CRVehicleAccessoryManager : NSObject {

	id<CRVehicleAccessoryManagerDelegate> _vehicleAccessoryDelegate;
	EAAccessoryManager* _accessoryManager;
	NSMutableDictionary* _vehiclesBySerialNumber;
	CARObserverHashTable* _observers;

}

@property (nonatomic,retain) EAAccessoryManager * accessoryManager;                                              //@synthesize accessoryManager=_accessoryManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * vehiclesBySerialNumber;                                       //@synthesize vehiclesBySerialNumber=_vehiclesBySerialNumber - In the implementation block
@property (nonatomic,retain) CARObserverHashTable * observers;                                                   //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic,__weak) id<CRVehicleAccessoryManagerDelegate> vehicleAccessoryDelegate;              //@synthesize vehicleAccessoryDelegate=_vehicleAccessoryDelegate - In the implementation block
+(id)sharedInstance;
+(id)_certificateSerialNumberForAccessory:(id)arg1 ;
+(BOOL)_isValidAccessoryMacAddress:(id)arg1 ;
+(BOOL)_isVehicleAccessory:(id)arg1 ;
+(id)managerInfoDataCache;
+(id)vehicleAccessQueue;
-(void)addObserver:(id)arg1 ;
-(CARObserverHashTable *)observers;
-(id)init;
-(void)handleAccessoryDisconnect:(id)arg1 ;
-(void)_primeConnectedVehicleAccessories;
-(id)vehicleAccessoryForCertificateSerial:(id)arg1 ;
-(EAAccessoryManager *)accessoryManager;
-(void)setObservers:(CARObserverHashTable *)arg1 ;
-(id<CRVehicleAccessoryManagerDelegate>)vehicleAccessoryDelegate;
-(void)removeObserver:(id)arg1 ;
-(void)setVehicleAccessoryDelegate:(id<CRVehicleAccessoryManagerDelegate>)arg1 ;
-(NSMutableDictionary *)vehiclesBySerialNumber;
-(void)handleAccessoryConnect:(id)arg1 ;
-(void)handleAccessoryInformationUpdate:(id)arg1 ;
-(id)connectedVehicleAccessories;
-(id)_vehicleInfoDataForAccessory:(id)arg1 ;
-(void)_updateVehicle:(id)arg1 usingAccessory:(id)arg2 ;
-(id)vehicleAccessoryForiAPConnectionIdentifier:(unsigned long long)arg1 ;
-(void)setVehiclesBySerialNumber:(NSMutableDictionary *)arg1 ;
-(id)_vehicleForAccessory:(id)arg1 ;
-(void)dealloc;
-(void)setAccessoryManager:(EAAccessoryManager *)arg1 ;
-(id)connectedAccessories;
@end

