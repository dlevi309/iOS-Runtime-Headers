/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/


#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
@interface CVAPhotoMTLRingBuffer : NSObject {

	array<id<MTLBuffer>, 3> _buffers;
	unsigned long long _index;

}
-(id)getBufferAt:(unsigned long long)arg1 ;
-(id)initWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 device:(id)arg3 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 device:(id)arg4 ;
-(id)currentBuffer;
-(id)advancedBuffer;
@end

