/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(BOOL)_providesConcreteBacking;
-(void)setLength:(unsigned long long)arg1 ;
-(void*)mutableBytes;
-(id)init;
-(void)resetBytesInRange:(NSRange)arg1 ;
-(const void*)bytes;
-(void)increaseLengthBy:(unsigned long long)arg1 ;
-(BOOL)_canUseRealloc;
-(unsigned long long)length;
-(id)initWithLength:(unsigned long long)arg1 ;
-(void)appendData:(id)arg1 ;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)_freeBytes;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
@end

