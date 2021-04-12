/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>

@class UIButton, UILabel;

@interface CKStickerDetailNavigationBar : UIVisualEffectView {

	UIButton* _closeButton;
	UILabel* _titleLabel;
	UIEdgeInsets _parentLayoutMargins;

}

@property (nonatomic,retain) UILabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                        //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic) UIEdgeInsets parentLayoutMargins;              //@synthesize parentLayoutMargins=_parentLayoutMargins - In the implementation block
-(UILabel *)titleLabel;
-(id)initWithEffect:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIButton *)closeButton;
-(void)setCloseButton:(UIButton *)arg1 ;
-(UIEdgeInsets)parentLayoutMargins;
-(void)setParentLayoutMargins:(UIEdgeInsets)arg1 ;
@end

