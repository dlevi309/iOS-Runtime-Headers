/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BCBatteryDeviceObserving.h>

@class NSMutableSet, BCBatteryDeviceController, NSString;

@interface SBBluetoothAccessoryBatteryMonitor : NSObject <BCBatteryDeviceObserving> {

	NSMutableSet* _accessoryNamesInLowPower;
	BCBatteryDeviceController* _batteryDeviceController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)descriptionBuilder;
-(void)connectedDevicesDidChange:(id)arg1 ;
-(NSString *)description;
-(void)_popLowPowerAlertForAccessoryIfNecessary:(id)arg1 ;
@end

