/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <OnBoardingKit/OBWelcomeFullCenterContentController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/CNSharingProfileOnboardingAudienceController.h>

@protocol CNSharingProfileOnboardingAudienceControllerDelegate;
@class UIView, OBLinkTrayButton, OBBoldTrayButton, UIImageView, UILabel, UITextField, UIButton, CNMutableContact, CNSharingProfileAudienceDataSource, NSString;

@interface CNSharingProfileOnboardingAudienceCatalystViewController : OBWelcomeFullCenterContentController <UITextFieldDelegate, CNSharingProfileOnboardingAudienceController> {

	id<CNSharingProfileOnboardingAudienceControllerDelegate> _delegate;
	UIView* _customContentView;
	OBLinkTrayButton* _setupLaterButton;
	OBBoldTrayButton* _backButton;
	OBBoldTrayButton* _confirmButton;
	UIImageView* _avatarImageView;
	UILabel* _nameLabel;
	UITextField* _givenNameField;
	UITextField* _familyNameField;
	UILabel* _audienceLabel;
	UIButton* _audiencePickerButton;
	UILabel* _audienceDescriptionLabel;
	CNMutableContact* _contact;
	CNSharingProfileAudienceDataSource* _sharingAudienceDataSource;
	long long _nameOrder;

}

@property (nonatomic,retain) UIView * customContentView;                                                            //@synthesize customContentView=_customContentView - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * setupLaterButton;                                                   //@synthesize setupLaterButton=_setupLaterButton - In the implementation block
@property (nonatomic,retain) OBBoldTrayButton * backButton;                                                         //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) OBBoldTrayButton * confirmButton;                                                      //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,retain) UIImageView * avatarImageView;                                                         //@synthesize avatarImageView=_avatarImageView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                                                   //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UITextField * givenNameField;                                                          //@synthesize givenNameField=_givenNameField - In the implementation block
@property (nonatomic,retain) UITextField * familyNameField;                                                         //@synthesize familyNameField=_familyNameField - In the implementation block
@property (nonatomic,retain) UILabel * audienceLabel;                                                               //@synthesize audienceLabel=_audienceLabel - In the implementation block
@property (nonatomic,retain) UIButton * audiencePickerButton;                                                       //@synthesize audiencePickerButton=_audiencePickerButton - In the implementation block
@property (nonatomic,retain) UILabel * audienceDescriptionLabel;                                                    //@synthesize audienceDescriptionLabel=_audienceDescriptionLabel - In the implementation block
@property (nonatomic,retain) CNMutableContact * contact;                                                            //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNSharingProfileAudienceDataSource * sharingAudienceDataSource;                        //@synthesize sharingAudienceDataSource=_sharingAudienceDataSource - In the implementation block
@property (assign,nonatomic) long long nameOrder;                                                                   //@synthesize nameOrder=_nameOrder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CNSharingProfileOnboardingAudienceControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)descriptorForRequiredKeys;
+(id)headerText;
-(CNMutableContact *)contact;
-(void)setContact:(CNMutableContact *)arg1 ;
-(void)setBackButton:(OBBoldTrayButton *)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id<CNSharingProfileOnboardingAudienceControllerDelegate>)delegate;
-(void)setCustomContentView:(UIView *)arg1 ;
-(id)initWithContact:(id)arg1 selectedSharingAudience:(unsigned long long)arg2 ;
-(void)updateConfirmButtonEnabledState;
-(id)confirmButtonTitle;
-(void)handleConfirmButtonTapped:(id)arg1 ;
-(OBBoldTrayButton *)confirmButton;
-(void)setConfirmButton:(OBBoldTrayButton *)arg1 ;
-(UILabel *)audienceLabel;
-(void)createAvatarView;
-(void)createNameLabel;
-(void)createNameTextFields;
-(void)createAudienceLabel;
-(void)createAudiencePickerButton;
-(void)updateMenuForAudiencePicker;
-(void)createAudienceDescriptionLabel;
-(void)layoutContentView;
-(void)didSelectSharingAudience:(unsigned long long)arg1 ;
-(void)handleSetupLaterTapped:(id)arg1 ;
-(void)handleBackTapped:(id)arg1 ;
-(void)setAudienceLabel:(UILabel *)arg1 ;
-(UIButton *)audiencePickerButton;
-(void)setAudiencePickerButton:(UIButton *)arg1 ;
-(UILabel *)audienceDescriptionLabel;
-(void)setAudienceDescriptionLabel:(UILabel *)arg1 ;
-(void)setDelegate:(id<CNSharingProfileOnboardingAudienceControllerDelegate>)arg1 ;
-(void)setSharingAudienceDataSource:(CNSharingProfileAudienceDataSource *)arg1 ;
-(long long)nameOrder;
-(void)viewDidLoad;
-(void)givenNameDidChange:(id)arg1 ;
-(UIView *)customContentView;
-(void)familyNameDidChange:(id)arg1 ;
-(CNSharingProfileAudienceDataSource *)sharingAudienceDataSource;
-(void)setNameOrder:(long long)arg1 ;
-(UITextField *)givenNameField;
-(void)setGivenNameField:(UITextField *)arg1 ;
-(UITextField *)familyNameField;
-(void)setFamilyNameField:(UITextField *)arg1 ;
-(UIImageView *)avatarImageView;
-(void)setAvatarImageView:(UIImageView *)arg1 ;
-(OBLinkTrayButton *)setupLaterButton;
-(void)setSetupLaterButton:(OBLinkTrayButton *)arg1 ;
-(OBBoldTrayButton *)backButton;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)createContentView;
-(void)dealloc;
@end

