/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)lineBreakMode;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(long long)textAlignment;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)_resize;
-(void)setTextAlignment:(long long)arg1 ;
-(UILabel *)textLabel;
-(UIButton *)linkButton;
-(long long)numberOfLines;
-(UIFont *)font;
-(void)_linkPressed;
@end

