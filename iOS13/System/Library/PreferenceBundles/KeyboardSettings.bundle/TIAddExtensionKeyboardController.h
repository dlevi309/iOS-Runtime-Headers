/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <Preferences/PSAppListController.h>

@class PSSpecifier, NSArray, UIAlertController, UIAlertAction;

@interface TIAddExtensionKeyboardController : PSAppListController {

	BOOL _hasShownWarning;
	BOOL _didRequestOpenAccess;
	BOOL _didGrantOpenAccess;
	BOOL _behavesAsModalForAddSheet;
	PSSpecifier* _networkAccessSpecifier;
	NSArray* _moduleSpecifiers;
	PSSpecifier* _specifierForWarning;
	UIAlertController* _networkAccessAlertController;
	UIAlertAction* _networkAccessAlertActionDefault;
	UIAlertAction* _networkAccessAlertActionCancel;

}

@property (nonatomic,retain) NSArray * moduleSpecifiers;                                    //@synthesize moduleSpecifiers=_moduleSpecifiers - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifierForWarning;                             //@synthesize specifierForWarning=_specifierForWarning - In the implementation block
@property (nonatomic,retain) UIAlertController * networkAccessAlertController;              //@synthesize networkAccessAlertController=_networkAccessAlertController - In the implementation block
@property (nonatomic,retain) UIAlertAction * networkAccessAlertActionDefault;               //@synthesize networkAccessAlertActionDefault=_networkAccessAlertActionDefault - In the implementation block
@property (nonatomic,retain) UIAlertAction * networkAccessAlertActionCancel;                //@synthesize networkAccessAlertActionCancel=_networkAccessAlertActionCancel - In the implementation block
@property (assign,nonatomic) BOOL behavesAsModalForAddSheet;                                //@synthesize behavesAsModalForAddSheet=_behavesAsModalForAddSheet - In the implementation block
@property (nonatomic,retain) PSSpecifier * networkAccessSpecifier;                          //@synthesize networkAccessSpecifier=_networkAccessSpecifier - In the implementation block
+(id)specifiersForExtensionInputMode:(id)arg1 parentSpecifier:(id)arg2 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)didEnterBackground:(id)arg1 ;
-(id)specifiers;
-(void)cancelButtonTapped;
-(void)doneButtonTapped;
-(void)setPrivacyAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(void)updateDoneButton;
-(id)newSpecifiers;
-(void)addCheckedInputModes;
-(PSSpecifier *)networkAccessSpecifier;
-(void)updateNetworkPolicyState;
-(void)setNetworkAccessSpecifierForKeyboardInputMode:(id)arg1 ;
-(void)setNetworkAccessSpecifier:(PSSpecifier *)arg1 ;
-(void)toggleInputMode:(id)arg1 specifier:(id)arg2 ;
-(id)fetchInputModeEnabled:(id)arg1 ;
-(void)setModuleSpecifiers:(NSArray *)arg1 ;
-(NSArray *)moduleSpecifiers;
-(BOOL)behavesAsModalForAddSheet;
-(void)trackExtensionsContainedInApp;
-(PSSpecifier *)specifierForWarning;
-(UIAlertAction *)networkAccessAlertActionDefault;
-(UIAlertController *)networkAccessAlertController;
-(void)setSpecifierForWarning:(PSSpecifier *)arg1 ;
-(void)setNetworkAccessAlertController:(UIAlertController *)arg1 ;
-(void)setNetworkAccessAlertActionCancel:(UIAlertAction *)arg1 ;
-(void)setNetworkAccessAlertActionDefault:(UIAlertAction *)arg1 ;
-(UIAlertAction *)networkAccessAlertActionCancel;
-(void)setNetworkPolicyValue:(id)arg1 ;
-(void)updateNetworkPolicyStateIfNecessaryForCell:(id)arg1 ;
-(id)selectedInputModes;
-(void)setBehavesAsModalForAddSheet:(BOOL)arg1 ;
@end

