/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKInlineNotificationView.h>

@class UIView, UIButton, NSString;

@interface CKTextInlineNotificationView : CKInlineNotificationView {

	UIView* _contentView;
	UIButton* _textButton;
	UIView* _greyOutView;

}

@property (nonatomic,retain) UIButton * textButton;              //@synthesize textButton=_textButton - In the implementation block
@property (nonatomic,retain) UIView * greyOutView;               //@synthesize greyOutView=_greyOutView - In the implementation block
@property (assign,nonatomic) BOOL greyedOut; 
@property (nonatomic,retain) NSString * text; 
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)greyedOut;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(UIView *)greyOutView;
-(void)_handleTouchDown:(id)arg1 ;
-(void)_handleTouchUpInside:(id)arg1 ;
-(void)_handleTouchUpOutside:(id)arg1 ;
-(void)setGreyedOut:(BOOL)arg1 ;
-(void)setTextButton:(UIButton *)arg1 ;
-(void)setGreyOutView:(UIView *)arg1 ;
-(NSString *)text;
-(CGSize)contentViewSizeThatFits:(CGSize)arg1 ;
-(UIButton *)textButton;
-(id)contentView;
-(void)_handleContentSizeCategoryDidChange:(id)arg1 ;
-(void)dealloc;
@end

