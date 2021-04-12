/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<FAConfirmIdentityViewControllerDelegate>)delegate;
-(void)setDelegate:(id<FAConfirmIdentityViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)instructions;
-(void)_updateFonts;
-(id)pageTitle;
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

