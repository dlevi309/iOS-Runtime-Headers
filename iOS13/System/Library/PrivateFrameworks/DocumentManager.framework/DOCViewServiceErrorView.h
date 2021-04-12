/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/

#import <UIKitCore/UIView.h>

@protocol DOCViewServiceErrorViewDelegate;
@class UILabel, UIButton;

@interface DOCViewServiceErrorView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _tryAgainButton;
	id<DOCViewServiceErrorViewDelegate> _delegate;

}

@property (nonatomic,retain) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIButton * tryAgainButton;                       //@synthesize tryAgainButton=_tryAgainButton - In the implementation block
@property (__weak) id<DOCViewServiceErrorViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<DOCViewServiceErrorViewDelegate>)delegate;
-(void)setDelegate:(id<DOCViewServiceErrorViewDelegate>)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)didTapTryAgain;
-(UIButton *)tryAgainButton;
-(void)setTryAgainButton:(UIButton *)arg1 ;
@end

