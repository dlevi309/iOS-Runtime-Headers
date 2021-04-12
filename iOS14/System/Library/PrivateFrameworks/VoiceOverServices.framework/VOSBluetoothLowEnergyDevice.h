/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
*/

#import <libobjc.A.dylib/VOSBluetoothConnectableDevice.h>

@class CBPeripheral, CBCentralManager, NSString;

@interface VOSBluetoothLowEnergyDevice : NSObject <VOSBluetoothConnectableDevice> {

	CBPeripheral* _peripheral;
	CBCentralManager* _centralManager;

}

@property (nonatomic,readonly) CBPeripheral * peripheral;                      //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,readonly) CBCentralManager * centralManager;              //@synthesize centralManager=_centralManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)connected;
-(void)disconnect;
-(long long)compare:(id)arg1 ;
-(BOOL)paired;
-(void)unpair;
-(void)connect;
-(CBCentralManager *)centralManager;
-(id)name;
-(NSString *)description;
-(CBPeripheral *)peripheral;
-(id)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPeripheral:(id)arg1 manager:(id)arg2 ;
-(BOOL)connecting;
@end

