/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/


@interface SRMemoryMapping : NSObject {

	int _protection;
	int _advice;
	void* _start;
	void* _currentPosition;
	long long _offset;
	void* _mappedAddress;
	unsigned long long _size;
	unsigned long long _pageAlignedSize;

}

@property (assign) void* mappedAddress;                             //@synthesize mappedAddress=_mappedAddress - In the implementation block
@property (assign) void* start;                                     //@synthesize start=_start - In the implementation block
@property (assign) void* currentPosition;                           //@synthesize currentPosition=_currentPosition - In the implementation block
@property (assign) unsigned long long size;                         //@synthesize size=_size - In the implementation block
@property (assign) unsigned long long pageAlignedSize;              //@synthesize pageAlignedSize=_pageAlignedSize - In the implementation block
@property (assign) long long offset;                                //@synthesize offset=_offset - In the implementation block
@property (readonly) unsigned long long used; 
@property (readonly) unsigned long long freeSpace; 
@property (getter=isWritable,readonly) BOOL writable; 
+(void)initialize;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
-(unsigned long long)size;
-(void*)start;
-(void)sync;
-(void)setOffset:(long long)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(long long)offset;
-(void)setStart:(void*)arg1 ;
-(unsigned long long)used;
-(BOOL)isWritable;
-(void*)currentPosition;
-(void)setCurrentPosition:(void*)arg1 ;
-(unsigned long long)freeSpace;
-(BOOL)containsAddress:(const void*)arg1 ;
-(BOOL)mapWithFileHandle:(id)arg1 ;
-(void)writeBytes:(const void*)arg1 toOffset:(unsigned long long)arg2 length:(unsigned long long)arg3 ;
-(id)initWithSize:(unsigned long long)arg1 protection:(int)arg2 advice:(int)arg3 offset:(long long)arg4 ;
-(void)unmap;
-(void)setPageAlignedSize:(unsigned long long)arg1 ;
-(void)setMappedAddress:(void*)arg1 ;
-(unsigned long long)pageAlignedSize;
-(void*)mappedAddress;
-(BOOL)isValidWriteToDestinationAddress:(void*)arg1 withLength:(unsigned long long)arg2 bytes:(const void*)arg3 ;
@end

