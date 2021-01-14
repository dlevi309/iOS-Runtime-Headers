/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

#import <UIKitCore/UIControl.h>

@class UILabel, UIImageView;

@interface AERoundedCornerButton : UIControl {

	long long __layoutStyle;
	long long __buttonType;
	UILabel* __label;
	UIImageView* __imageView;

}

@property (assign,setter=_setLayoutStyle:,nonatomic) long long _layoutStyle;              //@synthesize _layoutStyle=__layoutStyle - In the implementation block
@property (nonatomic,readonly) long long _buttonType;                                     //@synthesize _buttonType=__buttonType - In the implementation block
@property (setter=_setLabel:,nonatomic,retain) UILabel * _label;                          //@synthesize _label=__label - In the implementation block
@property (setter=_setImageView:,nonatomic,retain) UIImageView * _imageView;              //@synthesize _imageView=__imageView - In the implementation block
+(id)roundedCornerButtonWithStyle:(long long)arg1 buttonType:(long long)arg2 ;
-(UILabel *)_label;
-(UIImageView *)_imageView;
-(long long)_layoutStyle;
-(long long)_buttonType;
-(void)layoutSubviews;
-(void)_setLayoutStyle:(long long)arg1 ;
-(void)_setImageView:(id)arg1 ;
-(void)_setLabel:(id)arg1 ;
-(void)_commonAERoundedCornerButtonInitializationWithStyle:(long long)arg1 buttonType:(long long)arg2 ;
-(double)_interpolatedGlyphHorizontalInset;
-(double)_interpolatedGlyphTopInset;
@end

