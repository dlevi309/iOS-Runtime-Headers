/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol UIDocumentPasswordViewDelegate;
@class UIDocumentPasswordField, UILabel, NSObject, UITextField, NSString;

@interface UIDocumentPasswordView : UIView <UITextFieldDelegate> {

	UIDocumentPasswordField* _passwordTextField;
	UILabel* _label;
	NSObject*<UIDocumentPasswordViewDelegate> passwordDelegate;

}

@property (assign,nonatomic) NSObject*<UIDocumentPasswordViewDelegate> passwordDelegate; 
@property (nonatomic,readonly) UITextField * passwordField;                                           //@synthesize passwordTextField=_passwordTextField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)_canDrawContent;
-(id)_labelTextColor;
-(void)_passwordEntered:(id)arg1 ;
-(double)_labelHorizontalOffset;
-(double)_textFieldWidth;
-(UITextField *)passwordField;
-(id)initWithDocumentName:(id)arg1 ;
-(NSObject*<UIDocumentPasswordViewDelegate>)passwordDelegate;
-(void)setPasswordDelegate:(NSObject*<UIDocumentPasswordViewDelegate>)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(id)_labelFont;
-(void)dealloc;
@end

