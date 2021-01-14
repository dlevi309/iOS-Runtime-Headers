/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/FAFamilySetupPage.h>

@protocol FAFamilySetupPageDelegate;
@class ACAccount, ACAccountStore, AAFamilyEligibilityResponse, UIScrollView, UIView, UILabel, UIImageView, UIButton, FAFamilySharingFeaturesView, NSString;

@interface FAFamilySetupGetStartedViewController : UIViewController <FAFamilySetupPage> {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	AAFamilyEligibilityResponse* _familyEligibilityResponse;
	UIScrollView* _scrollView;
	UIView* _contentView;
	UILabel* _titleLabel;
	UIImageView* _familySharingLogo;
	UILabel* _descriptionLabel;
	UIButton* _getStartedButton;
	FAFamilySharingFeaturesView* _familyFeaturesView;
	id<FAFamilySetupPageDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FAFamilySetupPageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(id<FAFamilySetupPageDelegate>)delegate;
-(void)setDelegate:(id<FAFamilySetupPageDelegate>)arg1 ;
-(void)_updateFonts;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
-(id)initWithAccount:(id)arg1 store:(id)arg2 familyEligibilityResponse:(id)arg3 ;
-(double)_heightForText:(id)arg1 constrainedToWidth:(double)arg2 ;
-(id)_createDescriptionLabelForText:(id)arg1 ;
-(void)_getStartedButtonWasTapped:(id)arg1 ;
@end

