/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)footerView;
-(void)layoutSubviews;
-(void)setContentView:(UIView *)arg1 ;
-(void)setFooterView:(UIView *)arg1 ;
-(BOOL)isFooterVisible;
-(UIView *)contentView;
-(void)setFooterVisible:(BOOL)arg1 ;
@end

