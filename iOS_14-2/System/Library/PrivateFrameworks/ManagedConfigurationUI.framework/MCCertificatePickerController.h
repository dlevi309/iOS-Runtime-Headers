/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <Preferences/PSListItemsController.h>

@interface MCCertificatePickerController : PSListItemsController
-(id)specifiers;
-(void)setRowToSelect;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)navigationTitle;
-(void)_setCellPropertiesOnSpecifier:(id)arg1 forCertificate:(SecCertificateRef)arg2 ;
@end

