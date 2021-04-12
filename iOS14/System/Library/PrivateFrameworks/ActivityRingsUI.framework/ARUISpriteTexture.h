/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MTLTexture;
@interface ARUISpriteTexture : NSObject <NSCopying> {

	float _height;
	float _width;
	id<MTLTexture> _texture;

}

@property (nonatomic,readonly) float height;                        //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) float width;                         //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> texture;              //@synthesize texture=_texture - In the implementation block
-(id<MTLTexture>)texture;
-(float)width;
-(id)initWithImage:(id)arg1 ;
-(float)height;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

