/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol MTLDevice;
@class PKMetalBuffer, NSMutableArray;

@interface PKMetalResourceHandlerBuffer : NSObject {

	id<MTLDevice> _device;
	PKMetalBuffer* _buffer;
	unsigned long long _currentOffset;
	unsigned long long _bufferSize;
	unsigned long long _options;
	BOOL _purgeable;
	NSMutableArray* _reusableBuffers;

}
-(void)deallocateReusableBuffers;
-(id)newBufferWithLength:(unsigned long long)arg1 bytes:(const void*)arg2 outOffset:(unsigned long long*)arg3 ;
-(id)initWithSize:(unsigned long long)arg1 options:(unsigned long long)arg2 device:(id)arg3 purgeable:(BOOL)arg4 ;
-(id)newBufferWithLength:(unsigned long long)arg1 bytes:(const void*)arg2 outOffset:(unsigned long long*)arg3 outReusableMetalBuffer:(id*)arg4 ;
-(void)addReusableBuffer:(id)arg1 ;
@end

