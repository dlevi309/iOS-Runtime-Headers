/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
*/

#import <CoreFoundation/NSMutableData.h>

@interface IOBufferMutableData : NSMutableData {

	void* _bytes;
	unsigned long long _length;
	/*^block*/id _deallocator;

}

@property (copy) id deallocator;              //@synthesize deallocator=_deallocator - In the implementation block
-(void)setLength:(unsigned long long)arg1 ;
-(void*)mutableBytes;
-(const void*)bytes;
-(unsigned long long)length;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)setDeallocator:(id)arg1 ;
-(id)deallocator;
@end

