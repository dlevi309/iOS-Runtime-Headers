/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)disconnect;
-(id)serialNumber;
-(id)manufacturer;
-(id)specifiers;
-(id)init;
-(void)connect;
-(id)hardwareRevision;
-(id)firmwareRevision;
-(id)modelNumber;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_accessoryDidUpdate:(id)arg1 ;
-(void)dealloc;
-(void)accessoryDidDisconnect:(id)arg1 ;
-(id)bonjourName;
-(void)findAppForAccessory;
@end

