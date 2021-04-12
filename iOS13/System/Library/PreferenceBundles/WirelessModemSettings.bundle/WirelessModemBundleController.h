/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
*/

#import <Preferences/PSBundleController.h>

@class UIAlertController, NSString, NSMutableArray;

@interface WirelessModemBundleController : PSBundleController {

	UIAlertController* _tetheringAlert;
	NSString* _tetheringPhoneNumber;
	NSString* _tetheringURL;
	NSMutableArray* _specifiers;
	BOOL _wifiTetheringSupported;

}
-(void)dealloc;
-(id)initWithParentListController:(id)arg1 ;
-(id)specifiersWithSpecifier:(id)arg1 ;
-(id)getTetheringStatus:(id)arg1 ;
-(void)MISStateChangedNotification:(id)arg1 ;
-(void)updateSpecifiersForState:(int)arg1 andReason:(int)arg2 andButton:(id)arg3 ;
-(void)showSetupAlert:(id)arg1 ;
-(id)_specifiersWithSpecifierMain:(id)arg1 ;
@end

