/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)layoutSubviews;
-(id)_labelFont;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)_canDrawContent;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)_labelTextColor;
-(void)_passwordEntered:(id)arg1 ;
-(double)_labelHorizontalOffset;
-(double)_textFieldWidth;
-(id)initWithDocumentName:(id)arg1 ;
-(NSObject*<UIDocumentPasswordViewDelegate>)passwordDelegate;
-(void)setPasswordDelegate:(NSObject*<UIDocumentPasswordViewDelegate>)arg1 ;
-(UITextField *)passwordField;
@end

