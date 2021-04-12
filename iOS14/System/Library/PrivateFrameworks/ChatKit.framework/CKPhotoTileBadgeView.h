/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, UIView, UIImageView, UILabel;

@interface CKPhotoTileBadgeView : UIView {

	BOOL _enabled;
	BOOL _selected;
	UIButton* _actionButton;
	UIView* __backgroundView;
	UIImageView* __badgeImageView;
	UILabel* __textLabel;

}

@property (nonatomic,readonly) UIView * _backgroundView;                   //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) UIImageView * _badgeImageView;              //@synthesize _badgeImageView=__badgeImageView - In the implementation block
@property (nonatomic,readonly) UILabel * _textLabel;                       //@synthesize _textLabel=__textLabel - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                      //@synthesize actionButton=_actionButton - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
+(double)horizontalBadgeInset;
+(double)verticalBadgeInset;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)maximumSize;
-(UIView *)_backgroundView;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isSelected;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UILabel *)_textLabel;
-(UIButton *)actionButton;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setActionButton:(UIButton *)arg1 ;
-(UIImageView *)_badgeImageView;
-(BOOL)isEnabled;
-(void)_updateBadgeText;
-(void)_updateBadgeImage;
@end

