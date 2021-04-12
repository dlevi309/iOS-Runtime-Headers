/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <Preferences/PSListItemsController.h>

@interface MCCertificatePickerController : PSListItemsController
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)setRowToSelect;
-(id)navigationTitle;
-(void)_setCellPropertiesOnSpecifier:(id)arg1 forCertificate:(SecCertificateRef)arg2 ;
@end

