/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <UIKitCore/UIView.h>

@class UIView;

@interface SUFooterContainerView : UIView {

	UIView* _contentView;
	UIView* _footerView;
	BOOL _footerVisible;

}

@property (nonatomic,retain) UIView * contentView;                                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                    //@synthesize footerView=_footerView - In the implementation block
@property (assign,getter=isFooterVisible,nonatomic) BOOL footerVisible;              //@synthesize footerVisible=_footerVisible - In the implementation block
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setFooterVisible:(BOOL)arg1 ;
-(BOOL)isFooterVisible;
@end

