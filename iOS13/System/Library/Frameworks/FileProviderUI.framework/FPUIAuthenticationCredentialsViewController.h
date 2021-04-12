/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/

#import <FileProviderUI/FPUIAuthenticationTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSArray, FPUIAuthenticationSectionDescriptor, UITextField, UISwitch, NSLayoutConstraint, NSString;

@interface FPUIAuthenticationCredentialsViewController : FPUIAuthenticationTableViewController <UITextFieldDelegate> {

	NSArray* _credentialDescriptors;
	long long _selectedCredentialRow;
	FPUIAuthenticationSectionDescriptor* _credentialsInputSection;
	FPUIAuthenticationSectionDescriptor* _rememberPasswordSection;
	UITextField* _nameInputTextField;
	UITextField* _passwordInputTextField;
	UISwitch* _rememberPasswordSwitch;
	NSLayoutConstraint* _textFieldLeadingAnchorConstraint;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)_next:(id)arg1 ;
-(BOOL)_canMoveToNextStep;
-(id)defaultRightBarButtonItem;
-(void)setupTableViewSections;
-(void)_updateCurrentlyVisibleSections;
-(id)_rowDescriptorForCredentialDescriptor:(id)arg1 ;
-(void)_updateTextFieldConstraints;
-(void)_updateCanTransitionToNextStepState;
-(void)_updateCurrentlyVisibleSectionsNeedsReloadData:(BOOL)arg1 ;
-(id)initWithCredentialDescriptors:(id)arg1 ;
@end

