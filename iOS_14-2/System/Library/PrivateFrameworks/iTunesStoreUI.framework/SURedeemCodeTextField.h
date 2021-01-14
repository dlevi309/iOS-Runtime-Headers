/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTextField:(UITextField *)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(void)setText:(NSString *)arg1 ;
-(double)height;
-(void)_setupSubviews;
-(void)setDelegate:(id<UITextFieldDelegate>)arg1 ;
-(id)initWithHeight:(double)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)text;
-(NSString *)placeholder;
-(UITextField *)textField;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)_setupTextField;
-(void)_setupVisualEffectView;
@end

