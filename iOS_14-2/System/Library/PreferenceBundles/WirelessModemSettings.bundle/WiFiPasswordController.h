/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)specifiers;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)doneButtonClicked:(id)arg1 ;
-(void)emptySetter:(id)arg1 specifier:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)wifiPassword:(id)arg1 ;
@end

