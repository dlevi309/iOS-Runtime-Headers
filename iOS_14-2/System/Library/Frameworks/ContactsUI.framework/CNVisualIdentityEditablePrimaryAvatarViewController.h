/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/CNVisualIdentityPrimaryAvatarProvider.h>

@protocol CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate;
@class CNPhotoPickerProviderItem, UIImageView, CNVisualIdentityEditablePrimaryAvatarTextField, UIFont, CAShapeLayer, UIView, CNPhotoPickerVariantsManager, NSString;

@interface CNVisualIdentityEditablePrimaryAvatarViewController : UIViewController <UITextViewDelegate, CNVisualIdentityPrimaryAvatarProvider> {

	id<CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate> _delegate;
	double _desiredFontSize;
	CNPhotoPickerProviderItem* _providerItem;
	UIImageView* _imageContainerView;
	CNVisualIdentityEditablePrimaryAvatarTextField* _textField;
	UIFont* _originalFont;
	CAShapeLayer* _clippingLayer;
	UIView* _imageContentView;
	CNPhotoPickerVariantsManager* _variantsManager;

}

@property (nonatomic,retain) UIImageView * imageContainerView;                                                             //@synthesize imageContainerView=_imageContainerView - In the implementation block
@property (nonatomic,retain) CNVisualIdentityEditablePrimaryAvatarTextField * textField;                                   //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIFont * originalFont;                                                                        //@synthesize originalFont=_originalFont - In the implementation block
@property (nonatomic,retain) CAShapeLayer * clippingLayer;                                                                 //@synthesize clippingLayer=_clippingLayer - In the implementation block
@property (nonatomic,retain) UIView * imageContentView;                                                                    //@synthesize imageContentView=_imageContentView - In the implementation block
@property (nonatomic,retain) CNPhotoPickerVariantsManager * variantsManager;                                               //@synthesize variantsManager=_variantsManager - In the implementation block
@property (nonatomic,retain) CNPhotoPickerProviderItem * providerItem;                                                     //@synthesize providerItem=_providerItem - In the implementation block
@property (assign,nonatomic,__weak) id<CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double desiredFontSize;                                                                       //@synthesize desiredFontSize=_desiredFontSize - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate>)delegate;
-(void)setTextField:(CNVisualIdentityEditablePrimaryAvatarTextField *)arg1 ;
-(void)layoutPrimaryAvatar;
-(UIImageView *)imageContainerView;
-(void)setImageContainerView:(UIImageView *)arg1 ;
-(void)setDelegate:(id<CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate>)arg1 ;
-(CNPhotoPickerProviderItem *)providerItem;
-(id)initWithProviderItem:(id)arg1 variantsManager:(id)arg2 ;
-(void)setupViewWithProviderItem:(id)arg1 ;
-(id)updatedProviderItem;
-(BOOL)isEmojiProviderItemType;
-(void)setProviderItem:(CNPhotoPickerProviderItem *)arg1 ;
-(id)updatedProviderItemWithText:(id)arg1 ;
-(void)setOriginalFont:(UIFont *)arg1 ;
-(id)viewForPrimaryAvatar;
-(void)updatePrimaryAvatarForVisualIdentity:(id)arg1 ;
-(BOOL)primaryAvatarShouldDisplay;
-(id)initWithVariantsManager:(id)arg1 ;
-(void)updateWithProviderItem:(id)arg1 ;
-(void)updateViewWithProviderItem:(id)arg1 ;
-(void)populateViewWithTextEditableProviderItem:(id)arg1 imageType:(unsigned long long)arg2 ;
-(void)setupImageContainerView;
-(void)setupTextField;
-(void)updateTextFieldFontSize:(double)arg1 ;
-(void)setDesiredFontSize:(double)arg1 ;
-(BOOL)isMonogramProviderItemType;
-(void)updateContainerViewMask;
-(void)adjustFontSizeToFitWidthForText:(id)arg1 ;
-(void)trimTextFieldTextIfNeeded:(id)arg1 ;
-(void)trimTextFieldTextIfNeeded:(id)arg1 containsEmoji:(BOOL)arg2 ;
-(double)desiredFontSize;
-(void)endEditing;
-(BOOL)hasValidInputTypeForText:(id)arg1 ;
-(BOOL)exceedsMaxCharacterCount:(long long)arg1 containsEmoji:(BOOL)arg2 ;
-(double)maxTextFieldSize;
-(void)centerTextFieldInContainerView;
-(UIView *)imageContentView;
-(void)setImageContentView:(UIView *)arg1 ;
-(void)viewDidLoad;
-(NSString *)text;
-(UIFont *)originalFont;
-(void)textViewDidEndEditing:(id)arg1 ;
-(CNPhotoPickerVariantsManager *)variantsManager;
-(void)setVariantsManager:(CNPhotoPickerVariantsManager *)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(CNVisualIdentityEditablePrimaryAvatarTextField *)textField;
-(CAShapeLayer *)clippingLayer;
-(void)setClippingLayer:(CAShapeLayer *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)beginEditing;
@end

