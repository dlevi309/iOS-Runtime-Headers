/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, UILabel, NSString, UIFont;

@interface RUILinkLabel : UIView {

	UIButton* _linkButton;
	long long _textAlignment;
	BOOL _enabled;
	/*^block*/id _action;
	UILabel* _textLabel;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) UIFont * font; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (nonatomic,copy) id action;                              //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL enabled;                         //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UIButton * linkButton; 
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)action;
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(long long)numberOfLines;
-(void)setAction:(id)arg1 ;
-(UILabel *)textLabel;
-(long long)textAlignment;
-(void)_resize;
-(UIButton *)linkButton;
-(void)_linkPressed;
@end

