/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, ARUISpriteTexture;

@interface ARUISpriteSheet : NSObject <NSCopying> {

	NSArray* _sprites;
	ARUISpriteTexture* _texture;

}

@property (nonatomic,readonly) ARUISpriteTexture * texture;              //@synthesize texture=_texture - In the implementation block
@property (nonatomic,readonly) NSArray * sprites;                        //@synthesize sprites=_sprites - In the implementation block
-(ARUISpriteTexture *)texture;
-(id)description;
-(NSArray *)sprites;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSpriteSheet:(id)arg1 ;
-(id)initWithTexture:(id)arg1 sprites:(id)arg2 ;
@end

