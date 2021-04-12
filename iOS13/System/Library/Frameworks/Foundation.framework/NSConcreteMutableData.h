/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableData.h>

@interface NSConcreteMutableData : NSMutableData {

	unsigned _reserved : 1;
	unsigned _needToZero : 1;
	unsigned _hasVM : 1;
	unsigned _retainCount : 29;
	unsigned long long _length;
	unsigned long long _capacity;
	void* _bytes;

}
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void*)mutableBytes;
-(void)setLength:(unsigned long long)arg1 ;
-(void)increaseLengthBy:(unsigned long long)arg1 ;
-(BOOL)_providesConcreteBacking;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)initWithLength:(unsigned long long)arg1 ;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 ;
-(void)appendData:(id)arg1 ;
-(void)resetBytesInRange:(NSRange)arg1 ;
-(void)_freeBytes;
-(BOOL)_canUseRealloc;
@end

