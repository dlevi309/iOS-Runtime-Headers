/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, UIColor, UIImage;

@interface PKBillPaymentCircularView : UIView {

	UIView* _primaryView;
	UIView* _secondaryView;
	UIImageView* _imageView;
	UIColor* _primaryColor;
	CGRect _shadowFrame;
	UIColor* _secondaryColor;
	UIImage* _image;

}

@property (nonatomic,copy) UIColor * primaryColor; 
@property (nonatomic,copy) UIColor * secondaryColor;              //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (nonatomic,retain) UIImage * image;                     //@synthesize image=_image - In the implementation block
-(void)_updateColors;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(UIColor *)secondaryColor;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_defaultSecondaryColor;
-(UIColor *)primaryColor;
-(void)setSecondaryColor:(UIColor *)arg1 ;
@end

