/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
*/

#import <CoreFoundation/NSMutableData.h>

@interface IOBufferMutableData : NSMutableData {

	void* _bytes;
	unsigned long long _length;
	/*^block*/id _deallocator;

}

@property (copy) id deallocator;              //@synthesize deallocator=_deallocator - In the implementation block
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(void*)mutableBytes;
-(void)setLength:(unsigned long long)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(void)setDeallocator:(id)arg1 ;
-(id)deallocator;
@end

