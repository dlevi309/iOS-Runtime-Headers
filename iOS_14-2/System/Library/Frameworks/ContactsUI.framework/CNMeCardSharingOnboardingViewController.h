/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <OnBoardingKit/OBTableWelcomeController.h>

@class OBBoldTrayButton, CNContactStore, CNContact, NSLayoutConstraint;

@interface CNMeCardSharingOnboardingViewController : OBTableWelcomeController {

	OBBoldTrayButton* _confirmButton;
	CNContactStore* _contactStore;
	CNContact* _contact;
	NSLayoutConstraint* _tableViewHeightConstraint;

}

@property (nonatomic,retain) CNContactStore * contactStore;                               //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                         //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tableViewHeightConstraint;              //@synthesize tableViewHeightConstraint=_tableViewHeightConstraint - In the implementation block
@property (nonatomic,retain) OBBoldTrayButton * confirmButton;                            //@synthesize confirmButton=_confirmButton - In the implementation block
+(id)headerText;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNContactStore *)contactStore;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)confirmButtonTitle;
-(OBBoldTrayButton *)confirmButton;
-(NSLayoutConstraint *)tableViewHeightConstraint;
-(void)setTableViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setConfirmButton:(OBBoldTrayButton *)arg1 ;
-(void)didTapDoneButton:(id)arg1 ;
-(void)updateForContentSizeCategoryChange;
-(void)handleConfirmButtonTapped;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
@end

