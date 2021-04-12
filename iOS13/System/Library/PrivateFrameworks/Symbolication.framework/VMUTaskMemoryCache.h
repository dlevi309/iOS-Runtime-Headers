/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


#import <Symbolication/Symbolication-Structs.h>
@interface VMUTaskMemoryCache : NSObject {

	mapped_memory_tRef _memoryRegions;
	unsigned _task;
	BOOL _taskIs64Bit;
	BOOL _stopped;

}
+(id)taskMemoryCacheForTask:(unsigned)arg1 ;
+(BOOL)taskIs64Bit:(unsigned)arg1 ;
-(void)dealloc;
-(id)initWithTask:(unsigned)arg1 ;
-(void)flushMemoryCache;
-(int)mapAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 ;
-(int)mapAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnedAddress:(unsigned long long*)arg3 returnedSize:(unsigned long long*)arg4 ;
-(int)stopPeeking;
-(int)peekAtAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnsBuf:(void*)arg3 ;
-(void)enumerateMemoryCache:(/*^block*/id)arg1 ;
-(int)startPeeking;
-(int)readPointerAt:(unsigned long long)arg1 value:(unsigned long long*)arg2 ;
-(BOOL)copyRange:(VMURange)arg1 to:(void*)arg2 ;
@end

