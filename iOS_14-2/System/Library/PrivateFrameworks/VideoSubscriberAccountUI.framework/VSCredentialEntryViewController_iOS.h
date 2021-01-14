/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <AccountsUI/ACUIViewController.h>
#import <libobjc.A.dylib/VSCredentialEntryViewController.h>
#import <libobjc.A.dylib/VSPSPickerTableViewCellDelegate.h>

@protocol VSAuthenticationViewControllerDelegate;
@class VSCredentialEntryViewModel, VSIdentityProviderLogoView, UIButton, NSArray, UIView, PSSpecifier, VSCredentialEntryPicker, NSString;

@interface VSCredentialEntryViewController_iOS : ACUIViewController <VSCredentialEntryViewController, VSPSPickerTableViewCellDelegate> {

	BOOL _cancellationAllowed;
	VSCredentialEntryViewModel* _viewModel;
	id<VSAuthenticationViewControllerDelegate> _delegate;
	VSIdentityProviderLogoView* _logoView;
	UIButton* _linkButton;
	NSArray* _buttons;
	UIView* _buttonView;
	NSArray* _fieldSpecifiers;
	double _keyboardHeight;
	id _textFieldTextDidChangeObserver;
	id _keyboardWillShowObserver;
	id _keyboardWillHideObserver;
	id _weakTarget;
	PSSpecifier* _pickerButtonSpecifier;
	PSSpecifier* _pickerSpecifier;
	VSCredentialEntryPicker* _picker;

}

@property (nonatomic,retain) VSIdentityProviderLogoView * logoView;                                   //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,retain) UIButton * linkButton;                                                   //@synthesize linkButton=_linkButton - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                                                       //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIView * buttonView;                                                     //@synthesize buttonView=_buttonView - In the implementation block
@property (nonatomic,retain) NSArray * fieldSpecifiers;                                               //@synthesize fieldSpecifiers=_fieldSpecifiers - In the implementation block
@property (assign,nonatomic) double keyboardHeight;                                                   //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (assign,nonatomic,__weak) id textFieldTextDidChangeObserver;                                //@synthesize textFieldTextDidChangeObserver=_textFieldTextDidChangeObserver - In the implementation block
@property (assign,nonatomic,__weak) id keyboardWillShowObserver;                                      //@synthesize keyboardWillShowObserver=_keyboardWillShowObserver - In the implementation block
@property (assign,nonatomic,__weak) id keyboardWillHideObserver;                                      //@synthesize keyboardWillHideObserver=_keyboardWillHideObserver - In the implementation block
@property (nonatomic,retain) id weakTarget;                                                           //@synthesize weakTarget=_weakTarget - In the implementation block
@property (nonatomic,retain) PSSpecifier * pickerButtonSpecifier;                                     //@synthesize pickerButtonSpecifier=_pickerButtonSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * pickerSpecifier;                                           //@synthesize pickerSpecifier=_pickerSpecifier - In the implementation block
@property (nonatomic,retain) VSCredentialEntryPicker * picker;                                        //@synthesize picker=_picker - In the implementation block
@property (nonatomic,retain) VSCredentialEntryViewModel * viewModel;                                  //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<VSAuthenticationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed;                   //@synthesize cancellationAllowed=_cancellationAllowed - In the implementation block
@property (nonatomic,readonly) CGSize preferredLogoSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(VSCredentialEntryPicker *)picker;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setWeakTarget:(id)arg1 ;
-(id<VSAuthenticationViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSArray *)buttons;
-(void)doneButtonPressed:(id)arg1 ;
-(VSCredentialEntryViewModel *)viewModel;
-(id)_linkURL;
-(void)setDelegate:(id<VSAuthenticationViewControllerDelegate>)arg1 ;
-(void)setViewModel:(VSCredentialEntryViewModel *)arg1 ;
-(void)setPicker:(VSCredentialEntryPicker *)arg1 ;
-(void)_presentError:(id)arg1 ;
-(void)viewDidLoad;
-(double)keyboardHeight;
-(void)setKeyboardHeight:(double)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setButtonView:(UIView *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)pickerTitle;
-(id)weakTarget;
-(VSIdentityProviderLogoView *)logoView;
-(UIButton *)linkButton;
-(UIView *)buttonView;
-(void)setButtons:(NSArray *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setLinkButton:(UIButton *)arg1 ;
-(void)_linkButtonTapped:(id)arg1 ;
-(void)setLogoView:(VSIdentityProviderLogoView *)arg1 ;
-(void)_stopObservingViewModel:(id)arg1 ;
-(void)_startObservingViewModel:(id)arg1 ;
-(BOOL)isCancellationAllowed;
-(CGSize)preferredLogoSize;
-(void)setCancellationAllowed:(BOOL)arg1 ;
-(void)_startValidation;
-(long long)pickerViewCellInitialSelectedRow:(id)arg1 ;
-(id)pickerViewCell:(id)arg1 titleForRow:(long long)arg2 ;
-(long long)pickerViewCellNumberOfRows:(id)arg1 ;
-(void)pickerViewCell:(id)arg1 didSelectRow:(long long)arg2 ;
-(id)_specifierForTextField:(id)arg1 ;
-(void)_setText:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_updateLinkButtonLayout;
-(id)_textFieldForSpecifier:(id)arg1 ;
-(id)_credentialEntryFieldForSpecifier:(id)arg1 ;
-(id)_textForSpecifier:(id)arg1 ;
-(id)_createSpecifierForField:(id)arg1 ;
-(void)pickerButtonSelected;
-(void)setPickerButtonSpecifier:(PSSpecifier *)arg1 ;
-(void)_jsButtonTapped:(id)arg1 ;
-(PSSpecifier *)pickerSpecifier;
-(void)setPickerSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)pickerButtonSpecifier;
-(void)buildButtonsIfNeeded;
-(NSArray *)fieldSpecifiers;
-(void)setFieldSpecifiers:(NSArray *)arg1 ;
-(id)textFieldTextDidChangeObserver;
-(void)setTextFieldTextDidChangeObserver:(id)arg1 ;
-(id)keyboardWillShowObserver;
-(void)setKeyboardWillShowObserver:(id)arg1 ;
-(id)keyboardWillHideObserver;
-(void)setKeyboardWillHideObserver:(id)arg1 ;
@end

