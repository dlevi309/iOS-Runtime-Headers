/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol MTLTexture;
#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class CARenderer;

@interface NTKUpNextRenderer : NSObject {

	CARenderer* _renderer;
	IOSurfaceRef _ioSurface;
	id<MTLTexture> _texture;

}
-(void)dealloc;
-(IOSurfaceRef)newSurfaceWithWidth:(double)arg1 height:(double)arg2 ;
-(id)renderView:(id)arg1 ;
@end

