/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 ;
-(IOSurfaceRef)ioSurface;
-(void)dealloc;
@end

