/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <CoreFoundation/NSMutableData.h>
#import <libobjc.A.dylib/NSDiscardableContent.h>

@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {

	unsigned long long _length;
	int _accessCount;
	unsigned char _private[32];
	void* _reserved;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(id)description;
-(const void*)bytes;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void*)mutableBytes;
-(void)setLength:(unsigned long long)arg1 ;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(BOOL)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(BOOL)isContentDiscarded;
-(void)_destroyMemory;
@end

