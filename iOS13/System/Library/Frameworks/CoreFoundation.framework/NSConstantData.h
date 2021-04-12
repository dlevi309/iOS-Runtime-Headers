/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface NSConstantData : NSData {

	unsigned long long _length;
	const char* _bytes;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)new;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)retainCount;
-(void)dealloc;
-(unsigned long long)length;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(const void*)bytes;
-(BOOL)_isCompact;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(BOOL)_providesConcreteBacking;
-(id)initWithData:(id)arg1 ;
-(BOOL)_copyWillRetain;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
@end

