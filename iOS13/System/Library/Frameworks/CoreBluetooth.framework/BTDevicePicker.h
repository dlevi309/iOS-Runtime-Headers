/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol BTDevicePickerDelegate;
@class UIAlertController, UIWindow, UITableView, NSMutableArray, NSString, NSPredicate, PSSpecifierStub, BluetoothManager;

@interface BTDevicePicker : NSObject <UITableViewDelegate, UITableViewDataSource> {

	UIAlertController* _alertView;
	UIWindow* _alertWindow;
	UIWindow* _btAlertWindow;
	UITableView* _tableView;
	NSMutableArray* _deviceList;
	NSString* _title;
	unsigned _service;
	NSPredicate* _predicate;
	BOOL _showingAlert;
	BOOL _checkingPaired;
	PSSpecifierStub* _connectingSpec;
	BluetoothManager* _btManager;
	Class _btSSPRequestClass;
	Class _btAlertClass;
	id _btSSPAlert;
	id _btAlert;
	id<BTDevicePickerDelegate> _delegate;

}

@property (assign,nonatomic) id<BTDevicePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<BTDevicePickerDelegate>)delegate;
-(void)setDelegate:(id<BTDevicePickerDelegate>)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)show;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)showAlert:(id)arg1 ;
-(void)startScanning;
-(void)powerChanged:(id)arg1 ;
-(void)deviceDiscoveryStoppedHandler:(id)arg1 ;
-(void)deviceFoundHandler:(id)arg1 ;
-(void)deviceLostHandler:(id)arg1 ;
-(void)deviceNameChangedHandler:(id)arg1 ;
-(void)authenticationRequestHandler:(id)arg1 ;
-(void)devicePairedHandler:(id)arg1 ;
-(void)deviceConnectionCompleteHandler:(id)arg1 ;
-(void)checkAttachTimeout;
-(void)showInternal;
-(void)cancelDevicePicker;
-(void)createAlertWindow;
-(void)cleanupPairing;
-(void)_btSSPConfirmationHandler:(id)arg1 ;
-(void)_btSSPNumericComparisonHandler:(id)arg1 ;
-(void)_btSSPPasskeyDisplayHandler:(id)arg1 ;
-(void)createBTAlertWindow;
-(id)initWithTitle:(id)arg1 service:(unsigned)arg2 discoveryNameFilter:(id)arg3 ;
-(void)alertSheetDismissed:(id)arg1 ;
-(void)showPairingAlert:(id)arg1 ;
-(void)dismissPairingAlert:(id)arg1 ;
@end

