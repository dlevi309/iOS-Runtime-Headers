/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/

#import <UIKitCore/UIView.h>

@class UIView, UILabel;

@interface BCServerErrorView : UIView {

	UIView* _contentView;
	UILabel* _messageLabel;

}

@property (nonatomic,retain) UIView * contentView;                //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;              //@synthesize messageLabel=_messageLabel - In the implementation block
-(id)init;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(UILabel *)messageLabel;
-(void)setupSubviews;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(void)setupConstraints;
@end

