/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface NSPlaceholderMutableString : NSMutableString
-(id)initWithString:(id)arg1 ;
-(oneway void)release;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)init;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(BOOL)_tryRetain;
-(id)retain;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(BOOL)_isDeallocating;
-(id)initWithUTF8String:(const char*)arg1 ;
-(id)autorelease;
-(unsigned long long)length;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(BOOL)arg4 ;
-(unsigned long long)retainCount;
-(id)initWithCStringNoCopy:(char*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char*)arg3 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)initWithCString:(const char*)arg1 encoding:(unsigned long long)arg2 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)dealloc;
@end

