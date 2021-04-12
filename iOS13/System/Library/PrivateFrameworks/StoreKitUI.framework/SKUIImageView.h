/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UITapGestureRecognizer, SKUIImagePlaceholder, CAShapeLayer, UIImage;

@interface SKUIImageView : UIImageView {

	UITapGestureRecognizer* _tapRecognizer;
	CGSize _lastLayoutSize;
	SKUIImagePlaceholder* _placeholder;
	/*^block*/id _cornerPathBlock;
	CGSize _imageSize;

}

@property (nonatomic,readonly) CAShapeLayer * layer; 
@property (nonatomic,copy) id cornerPathBlock;                                      //@synthesize cornerPathBlock=_cornerPathBlock - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                      //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapRecognizer; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) SKUIImagePlaceholder * placeholder;                    //@synthesize placeholder=_placeholder - In the implementation block
+(Class)layerClass;
-(void)setImage:(UIImage *)arg1 ;
-(void)setContents:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(SKUIImagePlaceholder *)arg1 ;
-(CGSize)imageSize;
-(SKUIImagePlaceholder *)placeholder;
-(void)setImageSize:(CGSize)arg1 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(id)cornerPathBlock;
-(void)setCornerPathBlock:(id)arg1 ;
@end

