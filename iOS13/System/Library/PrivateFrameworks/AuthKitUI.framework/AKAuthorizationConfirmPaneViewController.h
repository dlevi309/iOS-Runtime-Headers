/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <AuthKitUI/AKAuthorizationPaneViewController.h>
#import <libobjc.A.dylib/AKAuthorizationSubPaneConfirmButtonDelegate.h>
#import <libobjc.A.dylib/AKAuthorizationPasswordAuthenticationDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/AKAuthorizationEditableDataSources.h>

@class AKAuthorizationScopeChoices, AKTiburonAuthorizationUIReport, AKAuthorizationPresentationContext, AKUserInformation, AKAuthorizationSubPaneImage, AKAuthorizationSubPaneConfirmButton, NSArray, UIBarButtonItem, AKAuthorizationNameFormatter, NSString;

@interface AKAuthorizationConfirmPaneViewController : AKAuthorizationPaneViewController <AKAuthorizationSubPaneConfirmButtonDelegate, AKAuthorizationPasswordAuthenticationDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AKAuthorizationEditableDataSources> {

	AKTiburonAuthorizationUIReport* _analyticsReport;
	BOOL _editableScopeChoicesChanged;
	BOOL _internalIsEditingName;
	BOOL _internalIsEmailExpanded;
	AKAuthorizationScopeChoices* _editableScopeChoices;
	AKAuthorizationPresentationContext* _presentationContext;
	AKUserInformation* _editingUserInformation;
	unsigned long long _editingGivenNameIndex;
	unsigned long long _editingFamilyNameIndex;
	AKAuthorizationSubPaneImage* _imageSubPane;
	AKAuthorizationSubPaneConfirmButton* _confirmButton;
	NSArray* _validatedScopes;
	double _nameEditHeightChange;
	UIBarButtonItem* _savedRightBarButtonItem;
	UIBarButtonItem* _savedLeftBarButtonItem;
	AKAuthorizationNameFormatter* _nameFormatter;

}

@property (assign,nonatomic) BOOL internalIsEditingName;                                              //@synthesize internalIsEditingName=_internalIsEditingName - In the implementation block
@property (nonatomic,copy) AKUserInformation * editingUserInformation;                                //@synthesize editingUserInformation=_editingUserInformation - In the implementation block
@property (assign,nonatomic) unsigned long long editingGivenNameIndex;                                //@synthesize editingGivenNameIndex=_editingGivenNameIndex - In the implementation block
@property (assign,nonatomic) unsigned long long editingFamilyNameIndex;                               //@synthesize editingFamilyNameIndex=_editingFamilyNameIndex - In the implementation block
@property (nonatomic,retain) AKAuthorizationSubPaneImage * imageSubPane;                              //@synthesize imageSubPane=_imageSubPane - In the implementation block
@property (nonatomic,retain) AKAuthorizationSubPaneConfirmButton * confirmButton;                     //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,readonly) BOOL _shouldAllowAuthorization; 
@property (nonatomic,readonly) NSArray * validatedScopes;                                             //@synthesize validatedScopes=_validatedScopes - In the implementation block
@property (assign,nonatomic) BOOL internalIsEmailExpanded;                                            //@synthesize internalIsEmailExpanded=_internalIsEmailExpanded - In the implementation block
@property (assign,nonatomic) double nameEditHeightChange;                                             //@synthesize nameEditHeightChange=_nameEditHeightChange - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * savedRightBarButtonItem;                               //@synthesize savedRightBarButtonItem=_savedRightBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * savedLeftBarButtonItem;                                //@synthesize savedLeftBarButtonItem=_savedLeftBarButtonItem - In the implementation block
@property (nonatomic,retain) AKAuthorizationNameFormatter * nameFormatter;                            //@synthesize nameFormatter=_nameFormatter - In the implementation block
@property (nonatomic,readonly) AKAuthorizationPresentationContext * presentationContext;              //@synthesize presentationContext=_presentationContext - In the implementation block
@property (assign,getter=isEditingName,nonatomic) BOOL editingName; 
@property (assign,getter=isEmailExpanded,nonatomic) BOOL emailExpanded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AKAuthorizationScopeChoices * editableScopeChoices;                    //@synthesize editableScopeChoices=_editableScopeChoices - In the implementation block
@property (assign,nonatomic) BOOL editableScopeChoicesChanged;                                        //@synthesize editableScopeChoicesChanged=_editableScopeChoicesChanged - In the implementation block
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_clearButton;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(AKAuthorizationPresentationContext *)presentationContext;
-(id)_doneBarButtonItem;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(AKAuthorizationNameFormatter *)nameFormatter;
-(void)_endEditing;
-(AKAuthorizationSubPaneConfirmButton *)confirmButton;
-(void)setConfirmButton:(AKAuthorizationSubPaneConfirmButton *)arg1 ;
-(id)_cellForRow:(long long)arg1 ;
-(void)_selectRow:(long long)arg1 ;
-(double)contentScrollOffset;
-(double)intrinsicContentHeight;
-(void)setPaneDelegate:(id)arg1 ;
-(void)_setupValidatedScopes;
-(AKAuthorizationScopeChoices *)editableScopeChoices;
-(BOOL)_hasNameScope;
-(BOOL)_hasEmailScope;
-(void)_setupIconView;
-(id)_infoLabelText;
-(void)_addAuthorizationButtonToPaneContext:(id)arg1 ;
-(void)_addUseOtherIDButtonToContext:(id)arg1 ;
-(BOOL)editableScopeChoicesChanged;
-(void)setEditableScopeChoicesChanged:(BOOL)arg1 ;
-(void)_enableOrDisableConfirmButton;
-(BOOL)isEditingName;
-(void)_beginEditing;
-(void)_updateDataSourceWithValidEditingName;
-(void)_fetchWebIconIfNeeded;
-(id)_editingNameCellForRow:(unsigned long long)arg1 ;
-(long long)_numberOfRowsInValidatedScopes;
-(NSArray *)validatedScopes;
-(long long)_numberOfRowsInScope:(id)arg1 ;
-(BOOL)isEmailExpanded;
-(unsigned long long)editingGivenNameIndex;
-(void)_setupGivenNameCell:(id)arg1 ;
-(unsigned long long)editingFamilyNameIndex;
-(void)_setupFamilyNameCell:(id)arg1 ;
-(AKUserInformation *)editingUserInformation;
-(void)_setGivenNameFromTextField:(id)arg1 ;
-(void)_setFamilyNameFromTextField:(id)arg1 ;
-(void)_beginEditingRow:(unsigned long long)arg1 ;
-(void)_nameEditDone;
-(BOOL)internalIsEmailExpanded;
-(void)setEmailExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setInternalIsEmailExpanded:(BOOL)arg1 ;
-(void)_reloadDataAnimated:(BOOL)arg1 heightChange:(/*^block*/id)arg2 ;
-(BOOL)internalIsEditingName;
-(void)_setEditingName:(BOOL)arg1 clearing:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setEditingUserInformation:(AKUserInformation *)arg1 ;
-(void)setEditingGivenNameIndex:(unsigned long long)arg1 ;
-(void)setEditingFamilyNameIndex:(unsigned long long)arg1 ;
-(void)setInternalIsEditingName:(BOOL)arg1 ;
-(void)_transitionToEditingNameAnimated:(BOOL)arg1 ;
-(void)_transitionFromEditingNameAnimated:(BOOL)arg1 ;
-(double)_nameEditHeightChange;
-(void)setNameEditHeightChange:(double)arg1 ;
-(double)nameEditHeightChange;
-(void)setSavedRightBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setSavedLeftBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)_reloadDataAnimated:(BOOL)arg1 heightChange:(/*^block*/id)arg2 animation:(/*^block*/id)arg3 ;
-(UIBarButtonItem *)savedRightBarButtonItem;
-(UIBarButtonItem *)savedLeftBarButtonItem;
-(double)_iPhoneNameEditHeightChange;
-(double)_iPadNameEditHeightChange;
-(double)_mainSectionScreenMaxY;
-(void)_reloadDataAnimated:(BOOL)arg1 heightChange:(/*^block*/id)arg2 animation:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateLayoutForHeightChange:(double)arg1 ;
-(BOOL)_shouldOverrideIntrinsicContentHeight;
-(id)_textFieldForRow:(unsigned long long)arg1 ;
-(void)setEditingName:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_textFromTextField:(id)arg1 ;
-(BOOL)_getValidEditingGivenName:(id*)arg1 familyName:(id*)arg2 ;
-(BOOL)_isValidEditingName;
-(BOOL)_nameScopeAllowsAuthorization;
-(BOOL)_emailScopeAllowsAuthorization;
-(BOOL)_shouldAllowAuthorization;
-(void)_useOtherIDButtonSelected:(id)arg1 ;
-(void)_createIconViewWithIcon:(id)arg1 ;
-(void)_updateIconViewWithIconContext:(id)arg1 ;
-(AKAuthorizationSubPaneImage *)imageSubPane;
-(void)setImageSubPane:(AKAuthorizationSubPaneImage *)arg1 ;
-(void)_paneDelegate_authorizationPaneViewControllerDismissWithAuthorization:(id)arg1 error:(id)arg2 ;
-(id)_cellForScope:(id)arg1 localRow:(long long)arg2 ;
-(id)_nameCell;
-(id)_emailCellForLocalRow:(long long)arg1 ;
-(id)_localizedNameKey;
-(id)_shareMyEmailCell;
-(id)_hideMyEmailCell;
-(id)_singleEmailCellForIndex:(long long)arg1 ;
-(id)_localizedEmailKey;
-(id)_defaultSharedEmail;
-(void)_selectScope:(id)arg1 localRow:(long long)arg2 ;
-(void)didSelectEditScope:(id)arg1 options:(id)arg2 ;
-(void)_selectEmailLocalRow:(long long)arg1 ;
-(void)_selectShareMyEmail;
-(void)_selectHideMyEmail;
-(void)_selectSingleEmailAtIndex:(long long)arg1 ;
-(id)_clearImage;
-(void)_clearAction:(id)arg1 event:(id)arg2 ;
-(void)_doneButtonSelected:(id)arg1 ;
-(void)_performAuthorizationWithRawPassword:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleAuthorizationError:(id)arg1 ;
-(void)_paneDelegate_authorizationPaneViewControllerDidRequestAuthorizationWithUserProvidedInformation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setCancelButtonEnabled:(BOOL)arg1 ;
-(void)_performPasswordAuthentication;
-(void)_performAuthorizationWithRawPassword:(id)arg1 ;
-(void)subPaneConfirmButtonDidEnterProcessingState:(id)arg1 ;
-(void)subpaneConfirmButtonDidFailBiometry:(id)arg1 ;
-(void)performPasswordAuthentication;
-(void)performAuthorization;
-(BOOL)validateReadyForAuthorization;
-(void)passwordAuthenticationCompletedWithResults:(id)arg1 error:(id)arg2 ;
-(id)initWithAuthorizationContext:(id)arg1 scopeChoices:(id)arg2 ;
-(void)setEmailExpanded:(BOOL)arg1 ;
-(void)setEditingName:(BOOL)arg1 ;
-(void)setEditingNameClearing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_hasAnyScope;
-(void)setNameFormatter:(AKAuthorizationNameFormatter *)arg1 ;
@end

