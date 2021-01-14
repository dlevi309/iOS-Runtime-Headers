/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface NSConstantData : NSData {

	unsigned long long _length;
	const char* _bytes;

}
+(id)new;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(BOOL)_providesConcreteBacking;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(oneway void)release;
-(id)init;
-(BOOL)_tryRetain;
-(id)retain;
-(BOOL)_isDeallocating;
-(const void*)bytes;
-(BOOL)_copyWillRetain;
-(id)autorelease;
-(unsigned long long)length;
-(id)initWithData:(id)arg1 ;
-(id)copy;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(BOOL)_isCompact;
-(unsigned long long)retainCount;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

