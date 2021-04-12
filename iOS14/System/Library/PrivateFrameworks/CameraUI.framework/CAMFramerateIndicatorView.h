/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)_label;
-(void)setLayoutStyle:(long long)arg1 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)_borderImageView;
-(UIEdgeInsets)alignmentRectInsets;
-(long long)layoutStyle;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateAppearance;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(long long)_framesPerSecond;
-(void)_commonCAMFramerateIndicatorViewInitializationWithLayoutStyle:(long long)arg1 ;
-(void)_updateForAppearanceChange;
@end

