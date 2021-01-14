/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SKUIRedeemCameraViewDelegate;
@class UIView, SKUIRedeemTextField, _UIBackdropView, UIImage, NSString;

@interface SKUIFullscreenRedeemCameraView : UIView <UITextFieldDelegate> {

	id<SKUIRedeemCameraViewDelegate> _delegate;
	UIView* _overlay;
	UIView* _redeemerView;
	SKUIRedeemTextField* _textField;
	_UIBackdropView* _textFieldSafeAreaBackdrop;
	CGRect _keyboardRect;
	BOOL _enabled;

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
-(void)keyboardDidHide:(id)arg1 ;
-(void)start;
-(void)_hideKeyboard;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setDelegate:(id<SKUIRedeemCameraViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)keyboardDidShow:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(NSString *)text;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(void)showKeyboard;
-(void)dealloc;
-(id)_newTextFieldWithClientContext:(id)arg1 ;
-(void)_tapGestureAction:(id)arg1 ;
-(void)textFieldTextDidChange:(id)arg1 ;
-(void)_pauseRedeemer;
-(void)_resumeRedeemer;
@end

