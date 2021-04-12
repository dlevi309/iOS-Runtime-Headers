/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


#import <AppSupport/AppSupport-Structs.h>
@interface CPMemoryPoolFile : NSObject {

	opaque_pthread_mutex_t _mutex;
	int _fd;
	char* _slots;
	unsigned long long _slotCount;
	unsigned long long _slotLength;
	CFBitVectorRef _usedSlots;
	CFAllocatorRef _deallocator;

}
-(void)returnSlot:(void*)arg1 ;
-(id)initWithLabel:(const char*)arg1 slotCount:(unsigned long long)arg2 slotLength:(unsigned long long)arg3 ;
-(id)nextSlotWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
@end

