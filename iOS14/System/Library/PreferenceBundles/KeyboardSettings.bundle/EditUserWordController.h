/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setTarget:(NSString *)arg1 ;
-(id)specifiers;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)init;
-(void)save;
-(PSSpecifier *)groupSpecifier;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(NSString *)shortcut;
-(void)_dismiss;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)viewDidLoad;
-(_KSTextReplacementEntry *)nextEntry;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)setShortcut:(NSString *)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(NSString *)target;
-(NSString *)footerTitle;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setFooterTitle:(NSString *)arg1 ;
-(void)dealloc;
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

