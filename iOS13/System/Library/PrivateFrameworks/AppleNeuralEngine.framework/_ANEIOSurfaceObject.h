/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
*/


#import <AppleNeuralEngine/AppleNeuralEngine-Structs.h>
@interface _ANEIOSurfaceObject : NSObject {

	IOSurfaceRef _ioSurface;

}

@property (nonatomic,readonly) IOSurfaceRef ioSurface;              //@synthesize ioSurface=_ioSurface - In the implementation block
+(id)new;
+(id)objectWithIOSurface:(IOSurfaceRef)arg1 ;
+(IOSurfaceRef)createIOSurfaceWithWidth:(int)arg1 pixel_size:(int)arg2 height:(int)arg3 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 ;
-(IOSurfaceRef)ioSurface;
@end

