/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol MTLDevice;
@class PKMetalBuffer;

@interface PKMetalResourceHandlerBuffer : NSObject {

	id<MTLDevice> _device;
	PKMetalBuffer* _buffer;
	unsigned long long _currentOffset;
	unsigned long long _bufferSize;
	unsigned long long _options;
	BOOL _purgeable;

}
-(id)newBufferWithLength:(unsigned long long)arg1 bytes:(const void*)arg2 outOffset:(unsigned long long*)arg3 ;
-(id)initWithSize:(unsigned long long)arg1 options:(unsigned long long)arg2 device:(id)arg3 purgeable:(BOOL)arg4 ;
@end

