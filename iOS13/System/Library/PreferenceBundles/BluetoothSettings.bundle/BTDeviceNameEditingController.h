/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/

#import <Preferences/PSListController.h>
#import <UIKit/UITextFieldDelegate.h>

@class BTSDevice, NSString;

@interface BTDeviceNameEditingController : PSListController <UITextFieldDelegate> {

	BTSDevice* _currentDevice;
	NSString* _deviceName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)suspend;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)specifiers;
-(BOOL)shouldSelectResponderOnAppearance;
-(void)keyboardWillShow:(id)arg1 ;
-(void)saveEditedName:(id)arg1 specifier:(id)arg2 ;
-(id)getDeviceName:(id)arg1 ;
@end

