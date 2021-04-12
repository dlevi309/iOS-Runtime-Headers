/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


#import <Symbolication/Symbolication-Structs.h>
@interface VMUTaskMemoryCache : NSObject {

	mapped_memory_tRef _memoryRegions;
	unsigned _task;
	BOOL _taskIs64Bit;
	BOOL _taskIsTranslated;
	BOOL _stopped;

}
+(BOOL)taskIs64Bit:(unsigned)arg1 ;
+(id)taskMemoryCacheForTask:(unsigned)arg1 ;
-(id)initWithTask:(unsigned)arg1 ;
-(int)stopPeeking;
-(int)peekAtAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnsBuf:(void*)arg3 ;
-(void)enumerateMemoryCache:(/*^block*/id)arg1 ;
-(int)startPeeking;
-(int)readPointerAt:(unsigned long long)arg1 value:(unsigned long long*)arg2 ;
-(BOOL)copyRange:(VMURange)arg1 to:(void*)arg2 ;
-(void)flushMemoryCache;
-(int)mapAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 ;
-(BOOL)taskIsTranslated;
-(int)mapAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnedAddress:(unsigned long long*)arg3 returnedSize:(unsigned long long*)arg4 ;
-(void)dealloc;
@end

