/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

