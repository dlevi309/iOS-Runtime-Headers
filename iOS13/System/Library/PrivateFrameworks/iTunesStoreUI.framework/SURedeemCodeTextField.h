/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UITextField, NSString;

@interface SURedeemCodeTextField : UIView {

	double _height;
	UIVisualEffectView* _visualEffectView;
	UITextField* _textField;

}

@property (nonatomic,retain) UIVisualEffectView * visualEffectView;                //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) UITextField * textField;                              //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic,__weak) id<UITextFieldDelegate> delegate; 
@property (nonatomic,readonly) double height;                                      //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) NSString * placeholder; 
@property (nonatomic,retain) NSString * text; 
-(id<UITextFieldDelegate>)delegate;
-(void)setDelegate:(id<UITextFieldDelegate>)arg1 ;
-(double)height;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(UITextField *)textField;
-(NSString *)placeholder;
-(UIVisualEffectView *)visualEffectView;
-(void)setTextField:(UITextField *)arg1 ;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)_setupSubviews;
-(id)initWithHeight:(double)arg1 ;
-(void)_setupVisualEffectView;
-(void)_setupTextField;
@end

