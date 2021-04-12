/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

