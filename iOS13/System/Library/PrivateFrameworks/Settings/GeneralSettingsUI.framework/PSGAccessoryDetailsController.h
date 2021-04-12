/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/EAAccessoryDelegate.h>

@class EAAccessory, NSString;

@interface PSGAccessoryDetailsController : PSListController <EAAccessoryDelegate> {

	EAAccessory* _accessory;
	BOOL _shouldEscape;
	BOOL _finishedAppearing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)disconnect;
-(id)serialNumber;
-(void)connect;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)manufacturer;
-(id)modelNumber;
-(id)specifiers;
-(id)firmwareRevision;
-(id)hardwareRevision;
-(void)accessoryDidDisconnect:(id)arg1 ;
-(id)bonjourName;
-(void)_accessoryDidUpdate:(id)arg1 ;
-(void)findAppForAccessory;
@end

