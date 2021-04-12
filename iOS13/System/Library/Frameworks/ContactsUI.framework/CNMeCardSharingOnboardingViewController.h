/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)setTableViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)tableViewHeightConstraint;
-(void)handleConfirmButtonTapped;
-(id)confirmButtonTitle;
-(OBBoldTrayButton *)confirmButton;
-(void)setConfirmButton:(OBBoldTrayButton *)arg1 ;
-(void)updateForContentSizeCategoryChange;
-(void)didTapDoneButton:(id)arg1 ;
@end

