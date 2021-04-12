/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIImage;

@interface _UILegibilityImageSet : NSObject {

	UIImage* _image;
	UIImage* _shadowImage;

}

@property (nonatomic,retain) UIImage * image;                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;              //@synthesize shadowImage=_shadowImage - In the implementation block
+(id)imageFromImage:(id)arg1 withShadowImage:(id)arg2 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 shadowImage:(id)arg2 ;
-(id)imageSetFlippedForRightToLeft;
-(id)imageSetWithOrientation:(long long)arg1 ;
-(UIImage *)image;
-(void)dealloc;
@end

