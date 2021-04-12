/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@class ARUISpriteTexture, NSArray;

@interface ARUISpriteSheet : NSObject {

	float _size;
	ARUISpriteTexture* _texture;
	NSArray* _icons;

}

@property (nonatomic,readonly) ARUISpriteTexture * texture;              //@synthesize texture=_texture - In the implementation block
@property (nonatomic,readonly) NSArray * icons;                          //@synthesize icons=_icons - In the implementation block
@property (nonatomic,readonly) float size;                               //@synthesize size=_size - In the implementation block
-(float)size;
-(NSArray *)icons;
-(ARUISpriteTexture *)texture;
-(id)initWithTexture:(id)arg1 icons:(id)arg2 size:(float)arg3 ;
@end

