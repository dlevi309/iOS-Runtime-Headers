/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
*/


@interface BMMemoryMapping : NSObject {

	int _protection;
	int _advice;
	void* _start;
	void* _end;
	unsigned long long _currentOffset;
	unsigned long long _size;
	long long _offset;
	void* _mappedAddress;
	unsigned long long _pageAlignedSize;
	unsigned long long _offsetSpace;

}
-(id)init;
-(BOOL)canAtomicallyAccessOffset:(unsigned long long)arg1 ;
-(void)dealloc;
@end

