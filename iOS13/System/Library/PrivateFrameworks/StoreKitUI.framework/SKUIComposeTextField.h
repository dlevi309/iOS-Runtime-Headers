/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@class SKUIComposeTextFieldConfiguration, UILabel, UITextField, NSString;

@interface SKUIComposeTextField : UIView <UITextFieldDelegate> {

	SKUIComposeTextFieldConfiguration* _configuration;
	long long _currentTextLength;
	id _delegate;
	UILabel* _label;
	long long _style;
	UITextField* _textField;

}

@property (nonatomic,readonly) long long composeReviewStyle;                                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SKUIComposeTextFieldConfiguration * configuration; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,readonly) UITextField * textField;                                        //@synthesize textField=_textField - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)labelFontForStyle:(long long)arg1 ;
+(id)labelColorForStyle:(long long)arg1 ;
-(void)dealloc;
-(BOOL)isValid;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(SKUIComposeTextFieldConfiguration *)configuration;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UITextField *)textField;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(NSRange)arg3 ;
-(void)_textChanged:(id)arg1 ;
-(long long)composeReviewStyle;
-(id)initWithConfiguration:(id)arg1 style:(long long)arg2 ;
@end

