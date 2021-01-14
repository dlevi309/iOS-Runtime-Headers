/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIImage;

@interface SKUIStackViewItemView : UIView {

	UIColor* _borderColor;
	UIImage* _image;
	BOOL _shouldFlipImageHorizontal;
	BOOL _shouldFlipImageVertical;

}

@property (nonatomic,copy) UIColor * borderColor;                         //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,retain) UIImage * image;                             //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL shouldFlipImageHorizontal;              //@synthesize shouldFlipImageHorizontal=_shouldFlipImageHorizontal - In the implementation block
@property (assign,nonatomic) BOOL shouldFlipImageVertical;                //@synthesize shouldFlipImageVertical=_shouldFlipImageVertical - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(UIColor *)borderColor;
-(UIImage *)image;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setShouldFlipImageHorizontal:(BOOL)arg1 ;
-(void)setShouldFlipImageVertical:(BOOL)arg1 ;
-(BOOL)shouldFlipImageHorizontal;
-(BOOL)shouldFlipImageVertical;
@end

