/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSString.h>

@interface NSPlaceholderString : NSString
-(id)initWithString:(id)arg1 ;
-(oneway void)release;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)init;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(BOOL)_tryRetain;
-(id)retain;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(BOOL)_isDeallocating;
-(id)initWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 locale:(id)arg3 arguments:(char*)arg4 error:(id*)arg5 ;
-(id)autorelease;
-(unsigned long long)length;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(BOOL)arg4 ;
-(unsigned long long)retainCount;
-(id)initWithCStringNoCopy:(char*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char*)arg3 ;
-(id)initWithCString:(const char*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithCString:(const char*)arg1 encoding:(unsigned long long)arg2 ;
-(id)initWithData:(id)arg1 encoding:(unsigned long long)arg2 ;
-(id)initWithCString:(const char*)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 ;
-(id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
@end

