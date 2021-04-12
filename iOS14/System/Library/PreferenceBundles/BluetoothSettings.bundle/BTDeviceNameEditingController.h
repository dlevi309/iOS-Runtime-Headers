/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/

#import <Preferences/PSListController.h>
#import <UIKit/UITextFieldDelegate.h>

@class BTSDevice, NSString;

@interface BTDeviceNameEditingController : PSListController <UITextFieldDelegate> {

	BTSDevice* _currentDevice;
	NSString* _deviceName;
	NSString* _productName;
	BOOL _keyboardShownOnce;

}

@property (assign,nonatomic) BOOL keyboardShownOnce;                //@synthesize keyboardShownOnce=_keyboardShownOnce - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)suspend;
-(id)specifiers;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)shouldSelectResponderOnAppearance;
-(void)dealloc;
-(void)saveEditedName:(id)arg1 specifier:(id)arg2 ;
-(id)getDeviceName:(id)arg1 ;
-(BOOL)keyboardShownOnce;
-(void)setKeyboardShownOnce:(BOOL)arg1 ;
@end

