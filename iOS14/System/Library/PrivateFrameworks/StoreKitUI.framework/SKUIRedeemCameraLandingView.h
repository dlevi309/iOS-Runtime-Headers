/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIButton, UIImageView, UIImage;

@interface SKUIRedeemCameraLandingView : UIView {

	UILabel* _bodyLabel;
	UIButton* _button;
	UILabel* _headerLabel;
	UIImageView* _imageView;
	long long _spacingStyle;

}

@property (nonatomic,readonly) UIButton * button;                 //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) long long spacingStyle;              //@synthesize spacingStyle=_spacingStyle - In the implementation block
-(UIButton *)button;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(void)setSpacingStyle:(long long)arg1 ;
-(long long)spacingStyle;
@end

