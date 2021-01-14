/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIDropInteractionDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CNPhotoPickerHeaderViewDelegate;
@class CNPhotoPickerProviderItem, CNVisualIdentity, NSArray, CNVisualIdentityAvatarViewController, UIButton, UIView, CAShapeLayer, CNPhotoPickerHeaderViewTextField, UIGestureRecognizer, NSString;

@interface CNPhotoPickerHeaderView : UIView <UITextFieldDelegate, UIDropInteractionDelegate, UIGestureRecognizerDelegate> {

	id<CNPhotoPickerHeaderViewDelegate> _delegate;
	CNPhotoPickerProviderItem* _placeholderProviderItem;
	CNVisualIdentity* _visualIdentity;
	NSArray* _subviewsConstraints;
	CNVisualIdentityAvatarViewController* _avatarViewController;
	UIButton* _clearAvatarImageButton;
	UIView* _clearAvatarImageButtonBackground;
	CAShapeLayer* _clearAvatarImageButtonClippingLayer;
	CNPhotoPickerHeaderViewTextField* _identityNameTextField;
	UIButton* _clearIdentityNameButton;
	UIGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) CNVisualIdentity * visualIdentity;                                        //@synthesize visualIdentity=_visualIdentity - In the implementation block
@property (nonatomic,retain) NSArray * subviewsConstraints;                                            //@synthesize subviewsConstraints=_subviewsConstraints - In the implementation block
@property (nonatomic,retain) CNVisualIdentityAvatarViewController * avatarViewController;              //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,retain) UIButton * clearAvatarImageButton;                                        //@synthesize clearAvatarImageButton=_clearAvatarImageButton - In the implementation block
@property (nonatomic,retain) UIView * clearAvatarImageButtonBackground;                                //@synthesize clearAvatarImageButtonBackground=_clearAvatarImageButtonBackground - In the implementation block
@property (nonatomic,retain) CAShapeLayer * clearAvatarImageButtonClippingLayer;                       //@synthesize clearAvatarImageButtonClippingLayer=_clearAvatarImageButtonClippingLayer - In the implementation block
@property (nonatomic,retain) CNPhotoPickerHeaderViewTextField * identityNameTextField;                 //@synthesize identityNameTextField=_identityNameTextField - In the implementation block
@property (nonatomic,retain) UIButton * clearIdentityNameButton;                                       //@synthesize clearIdentityNameButton=_clearIdentityNameButton - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * tapGestureRecognizer;                               //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<CNPhotoPickerHeaderViewDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CNPhotoPickerProviderItem * placeholderProviderItem;                      //@synthesize placeholderProviderItem=_placeholderProviderItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)resignFirstResponder;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id<CNPhotoPickerHeaderViewDelegate>)delegate;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(CNVisualIdentityAvatarViewController *)avatarViewController;
-(void)setAvatarViewController:(CNVisualIdentityAvatarViewController *)arg1 ;
-(void)setTapGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(id)initWithVisualIdentity:(id)arg1 ;
-(void)setDelegate:(id<CNPhotoPickerHeaderViewDelegate>)arg1 ;
-(NSArray *)subviewsConstraints;
-(void)setSubviewsConstraints:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)didMoveToWindow;
-(id)initWithContact:(id)arg1 ;
-(UIGestureRecognizer *)tapGestureRecognizer;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setupDragAndDrop;
-(id)initWithVisualIdentity:(id)arg1 avatarViewController:(id)arg2 ;
-(void)setupHeaderViewWithPhotoView:(id)arg1 ;
-(void)setupIdentityNameTextFieldAndClearButton;
-(void)updateIdentityNameTextFieldMaxWidth;
-(void)setupIdentityNameClearButtonIfNecessary;
-(void)updatePhotoViewWithUpdatedIdentity:(id)arg1 ;
-(CGSize)sizeOfPrimaryAvatar;
-(void)setupClearAvatarImageButton;
-(void)updateImageViewWithIdentity:(id)arg1 ;
-(void)updateIdentityNameTextFieldWithIdentity:(id)arg1 ;
-(void)setClearAvatarImageButtonHidden:(BOOL)arg1 ;
-(void)updateClearAvatarImageButtonFrame;
-(void)didTapHeaderView;
-(void)didTapClearAvatarImageButton;
-(void)didTapClearIdentityNameButton;
-(CNPhotoPickerProviderItem *)placeholderProviderItem;
-(void)updateIdentityNameTextFieldPlaceholderWithText:(id)arg1 ;
-(void)setPlaceholderProviderItem:(CNPhotoPickerProviderItem *)arg1 ;
-(UIButton *)clearAvatarImageButton;
-(void)setClearAvatarImageButton:(UIButton *)arg1 ;
-(UIView *)clearAvatarImageButtonBackground;
-(void)setClearAvatarImageButtonBackground:(UIView *)arg1 ;
-(CAShapeLayer *)clearAvatarImageButtonClippingLayer;
-(void)setClearAvatarImageButtonClippingLayer:(CAShapeLayer *)arg1 ;
-(CNPhotoPickerHeaderViewTextField *)identityNameTextField;
-(void)setIdentityNameTextField:(CNPhotoPickerHeaderViewTextField *)arg1 ;
-(UIButton *)clearIdentityNameButton;
-(void)setClearIdentityNameButton:(UIButton *)arg1 ;
-(CNVisualIdentity *)visualIdentity;
-(void)setVisualIdentity:(CNVisualIdentity *)arg1 ;
@end

