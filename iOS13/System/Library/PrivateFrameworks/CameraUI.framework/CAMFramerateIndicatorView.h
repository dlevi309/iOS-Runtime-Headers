/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface CAMFramerateIndicatorView : UIView {

	long long _layoutStyle;
	long long _style;
	UIImageView* __borderImageView;
	UILabel* __label;

}

@property (nonatomic,readonly) UIImageView * _borderImageView;              //@synthesize _borderImageView=__borderImageView - In the implementation block
@property (nonatomic,readonly) UILabel * _label;                            //@synthesize _label=__label - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                         //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) long long style;                               //@synthesize style=_style - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(UILabel *)_label;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(void)_updateAppearance;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(UIImageView *)_borderImageView;
-(void)_commonCAMFramerateIndicatorViewInitializationWithLayoutStyle:(long long)arg1 ;
-(void)_updateForAppearanceChange;
-(long long)_framesPerSecond;
@end

