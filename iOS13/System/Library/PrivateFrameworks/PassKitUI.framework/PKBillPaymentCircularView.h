/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_updateColors;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(UIColor *)primaryColor;
-(UIColor *)secondaryColor;
-(id)_defaultSecondaryColor;
@end

