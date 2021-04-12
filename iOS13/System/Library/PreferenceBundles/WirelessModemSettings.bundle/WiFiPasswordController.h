/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
*/

#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString;

@interface WiFiPasswordController : PSListController <UITextFieldDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generateDefaultPassword;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(id)specifiers;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)doneButtonClicked:(id)arg1 ;
-(void)emptySetter:(id)arg1 specifier:(id)arg2 ;
-(id)wifiPassword:(id)arg1 ;
@end

