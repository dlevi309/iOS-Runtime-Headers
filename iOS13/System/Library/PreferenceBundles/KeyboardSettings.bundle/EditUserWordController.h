/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <KeyboardSettings/KeyboardSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UITextFieldDelegate.h>

@class TIUserWordsManager, PSSpecifier, NSString, UIAlertController, _KSTextReplacementEntry, UITextField;

@interface EditUserWordController : PSListController <UITextFieldDelegate> {

	TIUserWordsManager* _dictionaryController;
	PSSpecifier* _groupSpecifier;
	NSString* _footerTitle;
	UIAlertController* _keyboardAlertController;
	_KSTextReplacementEntry* _oldEntry;
	_KSTextReplacementEntry* _nextEntry;

}

@property (nonatomic,copy) _KSTextReplacementEntry * oldEntry;                         //@synthesize oldEntry=_oldEntry - In the implementation block
@property (nonatomic,copy) _KSTextReplacementEntry * nextEntry;                        //@synthesize nextEntry=_nextEntry - In the implementation block
@property (nonatomic,copy) NSString * target; 
@property (nonatomic,copy) NSString * shortcut; 
@property (nonatomic,retain) PSSpecifier * groupSpecifier;                             //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (nonatomic,copy) NSString * footerTitle;                                     //@synthesize footerTitle=_footerTitle - In the implementation block
@property (nonatomic,readonly) UITextField * targetTextField; 
@property (nonatomic,readonly) UITextField * shortcutTextField; 
@property (nonatomic,retain) UIAlertController * keyboardAlertController;              //@synthesize keyboardAlertController=_keyboardAlertController - In the implementation block
@property (nonatomic,retain) TIUserWordsManager * dictionaryController;                //@synthesize dictionaryController=_dictionaryController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)wantsToDelegate:(id)arg1 ;
+(id)propertyTitles;
-(id)init;
-(void)dealloc;
-(void)setTarget:(NSString *)arg1 ;
-(NSString *)target;
-(void)save;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_dismiss;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(_KSTextReplacementEntry *)nextEntry;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(NSString *)footerTitle;
-(void)setFooterTitle:(NSString *)arg1 ;
-(NSString *)shortcut;
-(void)setShortcut:(NSString *)arg1 ;
-(id)specifiers;
-(PSSpecifier *)groupSpecifier;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(TIUserWordsManager *)dictionaryController;
-(void)setDictionaryController:(TIUserWordsManager *)arg1 ;
-(id)initWithUserWord:(id)arg1 ;
-(void)setOldEntry:(_KSTextReplacementEntry *)arg1 ;
-(void)setNextEntry:(_KSTextReplacementEntry *)arg1 ;
-(UITextField *)targetTextField;
-(BOOL)_shouldSetDefaultFirstResponder;
-(UITextField *)shortcutTextField;
-(UIAlertController *)keyboardAlertController;
-(void)setKeyboardAlertController:(UIAlertController *)arg1 ;
-(void)_handleValidationWithError:(long long)arg1 ;
-(id)validationErrorStringFromError:(long long)arg1 ;
-(_KSTextReplacementEntry *)oldEntry;
-(void)_unpackTextReplacementError:(id)arg1 ;
-(id)originalDelegateForTextField:(id)arg1 ;
@end

