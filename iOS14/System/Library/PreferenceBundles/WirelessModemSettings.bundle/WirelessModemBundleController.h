/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)getTetheringStatus:(id)arg1 ;
-(id)initWithParentListController:(id)arg1 ;
-(id)specifiersWithSpecifier:(id)arg1 ;
-(void)updateSpecifiersForState:(int)arg1 andReason:(int)arg2 andButton:(id)arg3 ;
-(void)MISStateChangedNotification:(id)arg1 ;
-(id)_specifiersWithSpecifierMain:(id)arg1 ;
-(void)showSetupAlert:(id)arg1 ;
-(void)dealloc;
@end

