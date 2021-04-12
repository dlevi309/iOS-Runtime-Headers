/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIButton *)textButton;
-(CGSize)contentViewSizeThatFits:(CGSize)arg1 ;
-(void)_handleContentSizeCategoryDidChange:(id)arg1 ;
-(void)_handleTouchDown:(id)arg1 ;
-(void)_handleTouchUpInside:(id)arg1 ;
-(void)_handleTouchUpOutside:(id)arg1 ;
-(UIView *)greyOutView;
-(void)setGreyedOut:(BOOL)arg1 ;
-(BOOL)greyedOut;
-(void)setTextButton:(UIButton *)arg1 ;
-(void)setGreyOutView:(UIView *)arg1 ;
@end

