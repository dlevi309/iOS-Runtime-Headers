/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(UIButton *)button;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithClientContext:(id)arg1 ;
-(void)setSpacingStyle:(long long)arg1 ;
-(long long)spacingStyle;
@end

