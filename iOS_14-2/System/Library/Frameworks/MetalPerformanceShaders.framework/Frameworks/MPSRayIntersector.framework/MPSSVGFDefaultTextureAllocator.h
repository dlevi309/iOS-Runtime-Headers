/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSRayIntersector.framework/MPSRayIntersector
*/

#import <MPSRayIntersector/MPSSVGFTextureAllocator.h>

@protocol MTLDevice;
@class NSMutableArray, NSString;

@interface MPSSVGFDefaultTextureAllocator : NSObject <MPSSVGFTextureAllocator> {

	NSMutableArray* _textures;
	id<MTLDevice> _device;
	unsigned long long _allocatedTextureCount;

}

@property (nonatomic,readonly) id<MTLDevice> device;                                  //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) unsigned long long allocatedTextureCount;              //@synthesize allocatedTextureCount=_allocatedTextureCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 ;
-(id<MTLDevice>)device;
-(void)reset;
-(void)dealloc;
-(id)textureWithPixelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 ;
-(void)returnTexture:(id)arg1 ;
-(unsigned long long)allocatedTextureCount;
@end

