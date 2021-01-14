/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(void)setLength:(unsigned long long)arg1 ;
-(void*)mutableBytes;
-(id)init;
-(BOOL)isContentDiscarded;
-(const void*)bytes;
-(unsigned long long)length;
-(id)description;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(void)_destroyMemory;
-(BOOL)beginContentAccess;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)dealloc;
@end

