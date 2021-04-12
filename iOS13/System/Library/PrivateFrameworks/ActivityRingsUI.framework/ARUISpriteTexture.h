/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@protocol MTLTexture;
@interface ARUISpriteTexture : NSObject {

	float _height;
	float _width;
	id<MTLTexture> _texture;

}

@property (nonatomic,readonly) float height;                        //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) float width;                         //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> texture;              //@synthesize texture=_texture - In the implementation block
-(float)width;
-(float)height;
-(id)initWithImage:(id)arg1 ;
-(id<MTLTexture>)texture;
@end

