/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TPSCloudCallingListController.h>
#import <libobjc.A.dylib/TPSCloudCallingDeviceControllerDelegate.h>

@class PSSpecifier, TPSCloudCallingDeviceController, NSArray, NSString;

@interface TPSCloudCallingDeviceListController : TPSCloudCallingListController <TPSCloudCallingDeviceControllerDelegate> {

	PSSpecifier* _devicesGroupSpecifier;
	PSSpecifier* _mainGroupSpecifier;
	PSSpecifier* _mainSwitchSpecifier;
	TPSCloudCallingDeviceController* _deviceController;
	NSArray* _deviceSwitchSpecifiers;

}

@property (nonatomic,copy) NSArray * deviceSwitchSpecifiers;                                    //@synthesize deviceSwitchSpecifiers=_deviceSwitchSpecifiers - In the implementation block
@property (nonatomic,readonly) TPSCloudCallingDeviceController * deviceController;              //@synthesize deviceController=_deviceController - In the implementation block
@property (nonatomic,readonly) PSSpecifier * devicesGroupSpecifier;                             //@synthesize devicesGroupSpecifier=_devicesGroupSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * mainGroupSpecifier;                                //@synthesize mainGroupSpecifier=_mainGroupSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * mainSwitchSpecifier;                               //@synthesize mainSwitchSpecifier=_mainSwitchSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(id)init;
-(TPSCloudCallingDeviceController *)deviceController;
-(PSSpecifier *)mainGroupSpecifier;
-(PSSpecifier *)mainSwitchSpecifier;
-(NSArray *)deviceSwitchSpecifiers;
-(PSSpecifier *)devicesGroupSpecifier;
-(void)setDeviceSwitchOn:(id)arg1 specifier:(id)arg2 ;
-(id)isDeviceSwitchOn:(id)arg1 ;
-(void)setMainSwitchOn:(id)arg1 specifier:(id)arg2 ;
-(id)isMainSwitchOn:(id)arg1 ;
-(void)setDeviceSwitchSpecifiers:(NSArray *)arg1 ;
-(void)cloudCallingDeviceController:(id)arg1 didChangeDevices:(id)arg2 ;
@end

