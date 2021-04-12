/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <AccessibilityUIUtilities/AXUISettingsSetupCapableListController.h>
#import <UIKit/UITextFieldDelegate.h>

@class VOSBluetoothDevice, NSString;

@interface AXUIVoiceOverBluetoothPairController : AXUISettingsSetupCapableListController <UITextFieldDelegate> {

	VOSBluetoothDevice* _device;
	NSString* _promptFormat;
	BOOL _dismissed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)deviceUpdated:(id)arg1 ;
-(void)doneButtonClicked:(id)arg1 ;
-(void)updatePrompt:(id)arg1 ;
-(id)internalTableView;
-(void)emptySetter:(id)arg1 specifier:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
@end

