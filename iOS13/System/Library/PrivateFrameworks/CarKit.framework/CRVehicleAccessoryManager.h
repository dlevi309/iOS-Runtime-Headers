/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)_isValidAccessoryMacAddress:(id)arg1 ;
+(BOOL)_isVehicleAccessory:(id)arg1 ;
+(id)_certificateSerialNumberForAccessory:(id)arg1 ;
+(id)vehicleAccessQueue;
+(id)managerInfoDataCache;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(CARObserverHashTable *)arg1 ;
-(CARObserverHashTable *)observers;
-(EAAccessoryManager *)accessoryManager;
-(void)setAccessoryManager:(EAAccessoryManager *)arg1 ;
-(id)connectedAccessories;
-(id)connectedVehicleAccessories;
-(id)vehicleAccessoryForCertificateSerial:(id)arg1 ;
-(void)setVehiclesBySerialNumber:(NSMutableDictionary *)arg1 ;
-(void)handleAccessoryConnect:(id)arg1 ;
-(void)handleAccessoryDisconnect:(id)arg1 ;
-(void)handleAccessoryInformationUpdate:(id)arg1 ;
-(void)_primeConnectedVehicleAccessories;
-(id)_vehicleForAccessory:(id)arg1 ;
-(NSMutableDictionary *)vehiclesBySerialNumber;
-(void)_updateVehicle:(id)arg1 usingAccessory:(id)arg2 ;
-(id)_vehicleInfoDataForAccessory:(id)arg1 ;
-(void)setVehicleAccessoryDelegate:(id<CRVehicleAccessoryManagerDelegate>)arg1 ;
-(id)vehicleAccessoryForiAPConnectionIdentifier:(unsigned long long)arg1 ;
-(id<CRVehicleAccessoryManagerDelegate>)vehicleAccessoryDelegate;
@end

