/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
*/

#import <libobjc.A.dylib/MDLMeshBufferAllocator.h>

@protocol MTLDevice;
@class NSString;

@interface MTKMeshBufferAllocator : NSObject <MDLMeshBufferAllocator> {

	id<MTLDevice> _device;

}

@property (nonatomic,readonly) id<MTLDevice> device;                //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 ;
-(id<MTLDevice>)device;
-(BOOL)isEqual:(id)arg1 ;
-(id)newBufferWithData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)newBuffer:(unsigned long long)arg1 type:(unsigned long long)arg2 ;
-(id)newBufferFromZone:(id)arg1 length:(unsigned long long)arg2 type:(unsigned long long)arg3 ;
-(id)newZone:(unsigned long long)arg1 ;
-(id)newZoneForBuffersWithSize:(id)arg1 andType:(id)arg2 ;
-(id)newBufferFromZone:(id)arg1 data:(id)arg2 type:(unsigned long long)arg3 ;
@end

