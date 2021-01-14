/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKTexture.h>

@interface SKMutableTexture : SKTexture {

	IOSurfaceRef _ioSurface;
	BOOL _ioSurfaceBacked;
	CGSize _textureSize;
	void* _pixelData;
	unsigned long long _pixelDataLength;
	int _pixelFormat;

}
+(id)mutableTextureWithSize:(CGSize)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(id)description;
-(void)dealloc;
-(shared_ptr<jet_texture>*)_backingTexture;
-(void)modifyPixelDataWithBlock:(/*^block*/id)arg1 ;
-(id)initWithSize:(CGSize)arg1 ioSurfaceBacked:(BOOL)arg2 pixelFormat:(int)arg3 ;
-(id)initWithSize:(CGSize)arg1 pixelFormat:(int)arg2 ;
@end

