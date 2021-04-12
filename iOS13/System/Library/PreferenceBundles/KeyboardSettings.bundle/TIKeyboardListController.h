/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <Preferences/PSListController.h>

@class NSMutableArray, PSSpecifier, TIAboutKeyboardPrivacyController;

@interface TIKeyboardListController : PSListController {

	NSMutableArray* _keyboardsArray;
	BOOL _emojiEnabled;
	PSSpecifier* _groupSeparator;
	PSSpecifier* _addNewInputModeSpecifier;
	BOOL _newKeyboardsAdded;
	unsigned long long _totalKeyboardsCount;
	unsigned long long _numberOfEnabledKeyboards;
	BOOL deletingRow;
	TIAboutKeyboardPrivacyController* _aboutPrivacyController;

}

@property (nonatomic,retain) TIAboutKeyboardPrivacyController * aboutPrivacyController;              //@synthesize aboutPrivacyController=_aboutPrivacyController - In the implementation block
@property (nonatomic,readonly) NSMutableArray * keyboardsArray;                                      //@synthesize keyboardsArray=_keyboardsArray - In the implementation block
@property (assign,nonatomic) BOOL newKeyboardsAdded;                                                 //@synthesize newKeyboardsAdded=_newKeyboardsAdded - In the implementation block
+(unsigned long long)count;
+(id)inputModes;
+(void)setInputModes:(id)arg1 ;
+(id)keyboardDisplayNameForIdentifier:(id)arg1 ;
+(id)softwareLayoutsForBaseInputMode:(id)arg1 ;
+(id)displayNameForHardwareLayout:(id)arg1 ;
+(id)supportedBaseInputModesForLanguage:(id)arg1 ;
+(id)availableSoftwareLayoutsForBaseInputMode:(id)arg1 ;
+(id)supportedInputModesForLanguage:(id)arg1 ;
+(id)availableInputModesForLanguage:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)reloadSpecifiers;
-(Class)tableViewClass;
-(void)addNewKeyboards:(id)arg1 ;
-(BOOL)allKeyboardsEnabled;
-(void)_writeKeyboards;
-(void)updateEditButtonState;
-(id)specifierForInputMode:(id)arg1 ;
-(id)specifierForExtensionInputMode:(id)arg1 ;
-(TIAboutKeyboardPrivacyController *)aboutPrivacyController;
-(void)setAboutPrivacyController:(TIAboutKeyboardPrivacyController *)arg1 ;
-(void)removeInputModeWithIdentifier:(id)arg1 ;
-(NSMutableArray *)keyboardsArray;
-(BOOL)newKeyboardsAdded;
-(void)setNewKeyboardsAdded:(BOOL)arg1 ;
@end

