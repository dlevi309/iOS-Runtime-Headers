/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UIScrollView.h>

@class UIView;

@interface GKCenteringScrollView : UIScrollView {

	UIView* _contentView;
	UIView* _footerView;

}

@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * footerView;               //@synthesize footerView=_footerView - In the implementation block
-(UIView *)footerView;
-(void)layoutSubviews;
-(void)setContentView:(UIView *)arg1 ;
-(void)setFooterView:(UIView *)arg1 ;
-(void)centerContentViewIfDesirable;
-(UIView *)contentView;
-(void)dealloc;
@end

