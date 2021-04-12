/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
*/

#import <libobjc.A.dylib/TXRBufferAllocator.h>

@protocol MTLDevice;
@class NSString;

@interface MTKTextureIOBufferAllocator : NSObject <TXRBufferAllocator> {

	id<MTLDevice> _device;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 ;
-(id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocNotification:(/*^block*/id)arg3 error:(id*)arg4 ;
@end

