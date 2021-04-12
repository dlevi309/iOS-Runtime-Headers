/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
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
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)name;
-(long long)compare:(id)arg1 ;
-(id)identifier;
-(void)disconnect;
-(void)connect;
-(BOOL)connected;
-(BOOL)paired;
-(void)unpair;
-(CBPeripheral *)peripheral;
-(CBCentralManager *)centralManager;
-(id)initWithPeripheral:(id)arg1 manager:(id)arg2 ;
@end

