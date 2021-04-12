/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SKUIRedeemCameraViewDelegate;
@class SKUIRedeemTextField, SKUIRedeemCameraLandingView, UIView, UIScrollView, UIButton, UIImage, NSString;

@interface SKUIIPadRedeemCameraView : UIView <UITextFieldDelegate> {

	id<SKUIRedeemCameraViewDelegate> _delegate;
	SKUIRedeemTextField* _inputAccessoryTextField;
	SKUIRedeemCameraLandingView* _landingView;
	UIView* _redeemerView;
	UIScrollView* _scrollView;
	UIButton* _termsButton;
	SKUIRedeemTextField* _textField;

}

@property (assign,nonatomic,__weak) id<SKUIRedeemCameraViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)enabled;
-(void)setImage:(UIImage *)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id<SKUIRedeemCameraViewDelegate>)delegate;
-(void)start;
-(void)_hideKeyboard;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setDelegate:(id<SKUIRedeemCameraViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(void)showKeyboard;
-(void)dealloc;
-(void)_termsButtonAction:(id)arg1 ;
-(void)_landingButtonAction:(id)arg1 ;
-(id)_newTextFieldWithClientContext:(id)arg1 placeholderColor:(id)arg2 ;
-(void)textFieldTextDidChange:(id)arg1 ;
-(void)keyboardDidChange:(id)arg1 ;
-(double)_adjustVerticalSpacingForHeight:(double)arg1 ;
@end

