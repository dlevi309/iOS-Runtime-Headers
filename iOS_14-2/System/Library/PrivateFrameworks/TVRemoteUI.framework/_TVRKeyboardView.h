/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/RTIInputSystemPayloadDelegate.h>

@protocol _TVRKeyboardViewDelegate;
@class TVRCKeyboardAttributes, UINavigationBar, UIView, _TVRTextField, UIButton, UIVisualEffectView, RTIInputSystemSourceSession, NSString;

@interface _TVRKeyboardView : UIView <UITextFieldDelegate, RTIInputSystemPayloadDelegate> {

	TVRCKeyboardAttributes* _attributes;
	id<_TVRKeyboardViewDelegate> _delegate;
	UINavigationBar* _navigationBar;
	UIView* _textFieldWrapper;
	_TVRTextField* _textField;
	UIView* _separator;
	UIButton* _dictationButton;
	UIVisualEffectView* _effectView;
	RTIInputSystemSourceSession* _currentSourceSession;

}

@property (nonatomic,retain) UINavigationBar * navigationBar;                                 //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) UIView * textFieldWrapper;                                       //@synthesize textFieldWrapper=_textFieldWrapper - In the implementation block
@property (nonatomic,retain) _TVRTextField * textField;                                       //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIView * separator;                                              //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UIButton * dictationButton;                                      //@synthesize dictationButton=_dictationButton - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * effectView;                                 //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) RTIInputSystemSourceSession * currentSourceSession;              //@synthesize currentSourceSession=_currentSourceSession - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) TVRCKeyboardAttributes * attributes;                             //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRKeyboardViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(UIVisualEffectView *)effectView;
-(double)_separatorHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)handleTextActionPayload:(id)arg1 ;
-(id<_TVRKeyboardViewDelegate>)delegate;
-(void)setAttributes:(TVRCKeyboardAttributes *)arg1 ;
-(void)setTextField:(_TVRTextField *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(UINavigationBar *)navigationBar;
-(UIView *)separator;
-(TVRCKeyboardAttributes *)attributes;
-(void)setDelegate:(id<_TVRKeyboardViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)setSeparator:(UIView *)arg1 ;
-(_TVRTextField *)textField;
-(void)setNavigationBar:(UINavigationBar *)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_textDidChange:(id)arg1 ;
-(NSString *)title;
-(void)_cancelButton:(id)arg1 ;
-(void)_dictationButtonTapped:(id)arg1 ;
-(void)_dictationButtonReleased:(id)arg1 ;
-(void)enableDictationButton:(BOOL)arg1 ;
-(UIView *)textFieldWrapper;
-(void)setTextFieldWrapper:(UIView *)arg1 ;
-(UIButton *)dictationButton;
-(void)setDictationButton:(UIButton *)arg1 ;
-(RTIInputSystemSourceSession *)currentSourceSession;
-(void)setCurrentSourceSession:(RTIInputSystemSourceSession *)arg1 ;
@end

