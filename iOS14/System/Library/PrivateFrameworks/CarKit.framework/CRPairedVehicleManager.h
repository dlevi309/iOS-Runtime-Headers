/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@class CRCarKitServiceClient;

@interface CRPairedVehicleManager : NSObject {

	CRCarKitServiceClient* _serviceClient;

}

@property (nonatomic,retain) CRCarKitServiceClient * serviceClient;              //@synthesize serviceClient=_serviceClient - In the implementation block
-(id)init;
-(id)allVehicles;
-(CRCarKitServiceClient *)serviceClient;
-(id)saveVehicle:(id)arg1 ;
-(void)setServiceClient:(CRCarKitServiceClient *)arg1 ;
-(void)fetchAllVehiclesWithCompletion:(/*^block*/id)arg1 ;
-(void)syncFetchAllVehiclesWithCompletion:(/*^block*/id)arg1 ;
-(id)_firstVehicleMatchingTest:(/*^block*/id)arg1 ;
-(void)saveVehicle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)vehicleNameForWiFiUUID:(id)arg1 ;
-(void)removeVehicle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchPairedVehiclesWithCompletion:(/*^block*/id)arg1 ;
-(id)vehicleForBluetoothAddress:(id)arg1 ;
-(id)vehicleForCertificateSerial:(id)arg1 ;
-(BOOL)removeVehicle:(id)arg1 ;
-(id)pairedVehicles;
@end

