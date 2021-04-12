/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setupConstraints;
-(void)setupSubviews;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
@end

