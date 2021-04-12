/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol FAConfirmIdentityViewControllerDelegate;
@class ACAccount, UIScrollView, UIView, UILabel, UIButton, AAUIProfilePictureStore, UIImage, NSValue, UIImagePickerController, NSString;

@interface FAConfirmIdentityViewController : UIViewController <UIImagePickerControllerDelegate, UIActionSheetDelegate, UINavigationControllerDelegate> {

	ACAccount* _appleAccount;
	UIScrollView* _scrollView;
	UIView* _contentView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIView* _profilePhotoView;
	UILabel* _nameLabel;
	UILabel* _emailLabel;
	UIButton* _continueButton;
	UIButton* _useDifferentIDButton;
	AAUIProfilePictureStore* _profilePictureStore;
	UIImage* _newProfilePicture;
	NSValue* _newProfilePictureCropRect;
	UIImagePickerController* _imagePicker;
	id<FAConfirmIdentityViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FAConfirmIdentityViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(id)instructions;
-(id<FAConfirmIdentityViewControllerDelegate>)delegate;
-(id)pageTitle;
-(void)setDelegate:(id<FAConfirmIdentityViewControllerDelegate>)arg1 ;
-(void)_updateFonts;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2 ;
-(BOOL)shouldShowInviteeInstructions;
-(void)_photoWasTapped:(id)arg1 ;
-(void)_addPhotoButtonWasTapped:(id)arg1 ;
-(id)titleForContinuebutton;
-(void)continueButtonWasTapped:(id)arg1 ;
-(void)_useDifferentIDButtonWasTapped:(id)arg1 ;
-(double)_heightForText:(id)arg1 width:(double)arg2 ;
-(void)_showImagePickerForAvailableSources;
-(void)_updateViewsInPhotoArea:(id)arg1 ;
@end

