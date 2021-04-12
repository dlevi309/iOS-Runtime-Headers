/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 shadowImage:(id)arg2 ;
-(id)imageSetFlippedForRightToLeft;
-(id)imageSetWithOrientation:(long long)arg1 ;
@end

