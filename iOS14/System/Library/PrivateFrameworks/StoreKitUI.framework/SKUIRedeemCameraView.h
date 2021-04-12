/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SKUIRedeemCameraViewDelegate;
@class SKUIClientContext, SKUIRedeemTextField, SKUIITunesPassConfiguration, SKUIRedeemITunesPassLockup, SKUIRedeemCameraLandingView, UIView, UIButton, UIImage, NSString;

@interface SKUIRedeemCameraView : UIView <UITextFieldDelegate> {

	SKUIClientContext* _clientContext;
	id<SKUIRedeemCameraViewDelegate> _delegate;
	SKUIRedeemTextField* _inputAccessoryTextField;
	SKUIITunesPassConfiguration* _iTunesPassConfiguration;
	SKUIRedeemITunesPassLockup* _iTunesPassLockup;
	SKUIRedeemCameraLandingView* _landingView;
	UIView* _overlay;
	UIView* _redeemerView;
	UIButton* _termsButton;
	SKUIRedeemTextField* _textField;
	BOOL _displayRedeem;

}

@property (assign,nonatomic,__weak) id<SKUIRedeemCameraViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) SKUIITunesPassConfiguration * ITunesPassConfiguration;              //@synthesize iTunesPassConfiguration=_iTunesPassConfiguration - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImage:(UIImage *)arg1 ;
-(id<SKUIRedeemCameraViewDelegate>)delegate;
-(void)keyboardDidHide:(id)arg1 ;
-(void)start;
-(void)_hideKeyboard;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setDelegate:(id<SKUIRedeemCameraViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)keyboardDidShow:(id)arg1 ;
-(NSString *)text;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(BOOL)isEnabled;
-(void)showKeyboard;
-(void)dealloc;
-(void)_termsButtonAction:(id)arg1 ;
-(SKUIITunesPassConfiguration *)ITunesPassConfiguration;
-(void)setITunesPassConfiguration:(SKUIITunesPassConfiguration *)arg1 ;
-(void)_tapGestureAction:(id)arg1 ;
-(void)_landingButtonAction:(id)arg1 ;
-(id)_newTextFieldWithClientContext:(id)arg1 placeholderColor:(id)arg2 ;
-(void)textFieldTextDidChange:(id)arg1 ;
-(void)_iTunesPassLearnMoreAction:(id)arg1 ;
-(BOOL)_isShowingRedeemer;
-(void)_pauseRedeemer;
-(void)_showRedeemer:(BOOL)arg1 ;
-(void)_resumeRedeemer;
@end

