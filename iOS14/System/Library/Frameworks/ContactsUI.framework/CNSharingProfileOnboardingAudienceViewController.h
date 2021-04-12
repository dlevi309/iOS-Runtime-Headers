/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <OnBoardingKit/OBTableWelcomeController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/CNSharingProfileOnboardingAudienceController.h>

@protocol CNSharingProfileOnboardingAudienceControllerDelegate;
@class NSLayoutConstraint, OBBoldTrayButton, UITextField, CNMutableContact, CNSharingProfileAudienceDataSource, NSString;

@interface CNSharingProfileOnboardingAudienceViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, CNSharingProfileOnboardingAudienceController> {

	id<CNSharingProfileOnboardingAudienceControllerDelegate> _delegate;
	NSLayoutConstraint* _tableViewHeightConstraint;
	OBBoldTrayButton* _confirmButton;
	UITextField* _givenNameField;
	UITextField* _familyNameField;
	CNMutableContact* _contact;
	CNSharingProfileAudienceDataSource* _sharingAudienceDataSource;
	double _keyboardHeight;
	long long _nameOrder;

}

@property (nonatomic,retain) NSLayoutConstraint * tableViewHeightConstraint;                                        //@synthesize tableViewHeightConstraint=_tableViewHeightConstraint - In the implementation block
@property (nonatomic,retain) OBBoldTrayButton * confirmButton;                                                      //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,retain) UITextField * givenNameField;                                                          //@synthesize givenNameField=_givenNameField - In the implementation block
@property (nonatomic,retain) UITextField * familyNameField;                                                         //@synthesize familyNameField=_familyNameField - In the implementation block
@property (nonatomic,retain) CNMutableContact * contact;                                                            //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNSharingProfileAudienceDataSource * sharingAudienceDataSource;                        //@synthesize sharingAudienceDataSource=_sharingAudienceDataSource - In the implementation block
@property (assign,nonatomic) double keyboardHeight;                                                                 //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (assign,nonatomic) long long nameOrder;                                                                   //@synthesize nameOrder=_nameOrder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CNSharingProfileOnboardingAudienceControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)descriptorForRequiredKeys;
+(id)headerText;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(CNMutableContact *)contact;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)setContact:(CNMutableContact *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id<CNSharingProfileOnboardingAudienceControllerDelegate>)delegate;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithContact:(id)arg1 selectedSharingAudience:(unsigned long long)arg2 ;
-(void)updateConfirmButtonEnabledState;
-(id)confirmButtonTitle;
-(void)handleConfirmButtonTapped:(id)arg1 ;
-(id)cellForNameInTableView:(id)arg1 ;
-(OBBoldTrayButton *)confirmButton;
-(NSLayoutConstraint *)tableViewHeightConstraint;
-(void)setTableViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setConfirmButton:(OBBoldTrayButton *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<CNSharingProfileOnboardingAudienceControllerDelegate>)arg1 ;
-(void)setSharingAudienceDataSource:(CNSharingProfileAudienceDataSource *)arg1 ;
-(long long)nameOrder;
-(void)viewDidLoad;
-(void)givenNameDidChange:(id)arg1 ;
-(void)familyNameDidChange:(id)arg1 ;
-(void)adjustInsetsForKeyboardOverlap:(double)arg1 ;
-(CNSharingProfileAudienceDataSource *)sharingAudienceDataSource;
-(void)setNameOrder:(long long)arg1 ;
-(UITextField *)givenNameField;
-(void)setGivenNameField:(UITextField *)arg1 ;
-(UITextField *)familyNameField;
-(void)setFamilyNameField:(UITextField *)arg1 ;
-(double)keyboardHeight;
-(void)setKeyboardHeight:(double)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
@end

