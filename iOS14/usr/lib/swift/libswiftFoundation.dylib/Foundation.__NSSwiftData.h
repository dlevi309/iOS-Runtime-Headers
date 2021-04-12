/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/swift/libswiftFoundation.dylib
*/

#import <CoreFoundation/NSData.h>

@interface Foundation.__NSSwiftData : NSData {

	 _backing;
	 _range;

}

@property (readonly,nonatomic) long long length; 
@property (readonly,nonatomic) void* bytes; 
-(BOOL)_providesConcreteBacking;
-(id)initWithBytes:(void*)arg1 length:(long long)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2 ;
-(id)init;
-(id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2 ;
-(void*)bytes;
-(long long)length;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)mutableCopyWithZone:(void*)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(BOOL)_isCompact;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(long long)arg2 ;
-(id)copyWithZone:(void*)arg1 ;
@end

