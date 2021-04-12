/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AXUISettingsSetupCapableListController.h>

@protocol VOSBluetoothConnectableDevice;
@class NSArray, SCROBrailleClient;

@interface AXUIVoiceOverBluetoothDeviceConfigController : AXUISettingsSetupCapableListController {

	NSArray* _forgetGroupSpecifiers;
	NSArray* _additionalConfigGroupSpecifiers;
	BOOL _dismissed;
	SCROBrailleClient* _brailleClient;
	id<VOSBluetoothConnectableDevice> _device;

}

@property (nonatomic,retain) id<VOSBluetoothConnectableDevice> device;              //@synthesize device=_device - In the implementation block
-(id)specifiers;
-(id)init;
-(void)_allowUSBRM;
-(void)deviceRemoved:(id)arg1 ;
-(id<VOSBluetoothConnectableDevice>)device;
-(void)deviceConnectedHandler:(id)arg1 ;
-(void)_clearVOUSBRMDisabler;
-(void)_doReallyForgetDevice;
-(void)forgetDevice:(id)arg1 ;
-(void)deviceUpdated:(id)arg1 ;
-(void)setDevice:(id<VOSBluetoothConnectableDevice>)arg1 ;
-(void)dealloc;
@end

