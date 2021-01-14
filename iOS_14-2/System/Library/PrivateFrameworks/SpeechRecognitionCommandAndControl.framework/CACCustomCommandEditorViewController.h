/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/CACCustomCommandActionViewControllerDelegate.h>
#import <libobjc.A.dylib/CACCustomCommandApplicationViewControllerDelegate.h>

@protocol CACCustomCommandEditorViewControllerDelegate;
@class NSDictionary, CACSpokenCommandItem, UIBarButtonItem, AXSiriShortcutsManager, NSString;

@interface CACCustomCommandEditorViewController : UITableViewController <UITextFieldDelegate, CACCustomCommandActionViewControllerDelegate, CACCustomCommandApplicationViewControllerDelegate> {

	NSDictionary* _applicationIdentifiersToNames;
	BOOL _isInEditingMode;
	BOOL _isValidCommandItem;
	BOOL _isEmptyCommandItem;
	BOOL _hasEmptySpokenString;
	BOOL _showsDeleteButton;
	id<CACCustomCommandEditorViewControllerDelegate> _delegate;
	CACSpokenCommandItem* _commandItem;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _saveButton;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _editButton;
	CACSpokenCommandItem* _mutableCommandItem;
	AXSiriShortcutsManager* _shortcutsManager;

}

@property (nonatomic,retain) UIBarButtonItem * doneButton;                                                  //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * saveButton;                                                  //@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButton;                                                //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * editButton;                                                  //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,retain) CACSpokenCommandItem * mutableCommandItem;                                     //@synthesize mutableCommandItem=_mutableCommandItem - In the implementation block
@property (nonatomic,retain) AXSiriShortcutsManager * shortcutsManager;                                     //@synthesize shortcutsManager=_shortcutsManager - In the implementation block
@property (assign,nonatomic) BOOL isInEditingMode;                                                          //@synthesize isInEditingMode=_isInEditingMode - In the implementation block
@property (assign,nonatomic,__weak) id<CACCustomCommandEditorViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CACSpokenCommandItem * commandItem;                                            //@synthesize commandItem=_commandItem - In the implementation block
@property (assign,nonatomic) BOOL isValidCommandItem;                                                       //@synthesize isValidCommandItem=_isValidCommandItem - In the implementation block
@property (assign,nonatomic) BOOL isEmptyCommandItem;                                                       //@synthesize isEmptyCommandItem=_isEmptyCommandItem - In the implementation block
@property (assign,nonatomic) BOOL hasEmptySpokenString;                                                     //@synthesize hasEmptySpokenString=_hasEmptySpokenString - In the implementation block
@property (assign,nonatomic) BOOL showsDeleteButton;                                                        //@synthesize showsDeleteButton=_showsDeleteButton - In the implementation block
@property (nonatomic,retain) NSDictionary * applicationIdentifiersToNames;                                  //@synthesize applicationIdentifiersToNames=_applicationIdentifiersToNames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIBarButtonItem *)doneButton;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)cancelButton;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setShowsDeleteButton:(BOOL)arg1 ;
-(void)editButtonTapped:(id)arg1 ;
-(UIBarButtonItem *)editButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)init;
-(id<CACCustomCommandEditorViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setIsInEditingMode:(BOOL)arg1 ;
-(void)setEditButton:(UIBarButtonItem *)arg1 ;
-(void)setDelegate:(id<CACCustomCommandEditorViewControllerDelegate>)arg1 ;
-(UIBarButtonItem *)saveButton;
-(void)cancelAction;
-(BOOL)_canShowWhileLocked;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)isModalInPresentation;
-(void)setSaveButton:(UIBarButtonItem *)arg1 ;
-(BOOL)isInEditingMode;
-(BOOL)_shouldShowDeleteButton;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)showsDeleteButton;
-(void)saveButtonTapped;
-(BOOL)isNewCommand;
-(CACSpokenCommandItem *)commandItem;
-(void)setMutableCommandItem:(CACSpokenCommandItem *)arg1 ;
-(void)configureNavItems;
-(void)setShortcutsManager:(AXSiriShortcutsManager *)arg1 ;
-(CACSpokenCommandItem *)mutableCommandItem;
-(BOOL)hasEmptySpokenString;
-(BOOL)isValidCommandItem;
-(void)setCommandItem:(CACSpokenCommandItem *)arg1 ;
-(BOOL)showAlertIfNeededForAnyError;
-(BOOL)_hasValidSpokenStringWithErrorText:(inout id*)arg1 ;
-(BOOL)_hasValidActionWithErrorText:(inout id*)arg1 ;
-(void)_showErrorAlertWithText:(id)arg1 ;
-(BOOL)showAlertIfNeededForErrorInSpokenString;
-(BOOL)_showAlertIfNeededForAction;
-(BOOL)_commandStringIsValid:(id)arg1 checkForLength:(BOOL)arg2 ;
-(NSDictionary *)applicationIdentifiersToNames;
-(void)setApplicationIdentifiersToNames:(NSDictionary *)arg1 ;
-(void)_updateCommandItemWithText:(id)arg1 ;
-(void)didUpdateCommandItemForActionViewController:(id)arg1 ;
-(void)didDismissActionViewController:(id)arg1 ;
-(void)didUpdateCommandItemForApplicationViewController:(id)arg1 ;
-(BOOL)isEmptyCommandItem;
-(void)setIsValidCommandItem:(BOOL)arg1 ;
-(void)setIsEmptyCommandItem:(BOOL)arg1 ;
-(void)setHasEmptySpokenString:(BOOL)arg1 ;
-(AXSiriShortcutsManager *)shortcutsManager;
@end

