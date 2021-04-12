/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
*/

#import <MobilePhoneSettings/MobilePhoneSettings-Structs.h>
#import <Preferences/PSListController.h>

@interface PhoneSettingsListController : PSListController {

	CTServerConnectionRef _telephonyServerConnection;

}

@property (nonatomic,readonly) CTServerConnectionRef telephonyServerConnection;              //@synthesize telephonyServerConnection=_telephonyServerConnection - In the implementation block
-(id)init;
-(void)dealloc;
-(id)bundle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)destroyTelephonyServerConnection;
-(void)updateCellStates;
-(void)pushController:(Class)arg1 specifier:(id)arg2 ;
-(id)sheetSpecifierWithTitle:(id)arg1 controller:(Class)arg2 detail:(Class)arg3 ;
-(id)setControlEnabled:(BOOL)arg1 atIndex:(long long)arg2 ;
-(id)setCellEnabled:(BOOL)arg1 atIndex:(unsigned)arg2 ;
-(id)setCellLoading:(BOOL)arg1 atIndex:(unsigned)arg2 ;
-(CTServerConnectionRef)telephonyServerConnection;
@end

