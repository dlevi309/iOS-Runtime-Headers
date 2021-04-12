/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/

#import <BluetoothSettings/BluetoothSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UITextFieldDelegate.h>

@class BluetoothDevice, NSString;

@interface BTSPairController : PSListController <UITextFieldDelegate> {

	BluetoothDevice* _device;
	NSString* _promptFormat;
	BOOL _dismissed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)specifiers;
-(void)keyboardWillShow:(id)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)deviceUpdated:(id)arg1 ;
-(void)doneButtonClicked:(id)arg1 ;
-(void)updatePrompt:(id)arg1 ;
-(void)emptySetter:(id)arg1 specifier:(id)arg2 ;
@end

