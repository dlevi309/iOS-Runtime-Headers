/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
*/

#import <ConnectivityModule/CCUIAlwaysExpandedMenuModuleViewController.h>
#import <libobjc.A.dylib/CBCentralManagerPrivateDelegate.h>

@class NSMutableSet, CBCentralManager, NSString;

@interface CCUIBluetoothMenuModuleViewController : CCUIAlwaysExpandedMenuModuleViewController <CBCentralManagerPrivateDelegate> {

	NSMutableSet* _busyIdentifiers;
	CBCentralManager* _centralManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didUpdatePeripheralConnectionState:(id)arg2 ;
-(void)_bluetoothDeviceConnectionStatusDidChange:(id)arg1 ;
-(void)_bluetoothAvailabilityChanged:(id)arg1 ;
-(void)_bluetoothDeviceRemoved:(id)arg1 ;
-(void)_updateBluetoothMenuItems;
-(id)_menuItemForBluetoothDevice:(id)arg1 ;
-(BOOL)_shouldHideBluetoothPeripheral:(id)arg1 ;
-(id)_menuItemForBluetoothPeripheral:(id)arg1 ;
-(id)_subtitleForConnected:(BOOL)arg1 ;
@end

