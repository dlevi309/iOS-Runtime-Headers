/*
* Generated on Monday, March 1, 2021 at 2:35:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/swift/libswiftFoundation.dylib
*/

#import <CoreFoundation/NSData.h>

@interface Foundation.__NSSwiftData : NSData {

	 _backing;
	 _range;

}

@property (readonly,nonatomic) long long length; 
@property (readonly,nonatomic) void* bytes; 
-(id)initWithBytes:(void*)arg1 length:(long long)arg2 ;
-(id)init;
-(long long)length;
-(void*)bytes;
-(BOOL)_isCompact;
-(id)copyWithZone:(void*)arg1 ;
-(id)mutableCopyWithZone:(void*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_providesConcreteBacking;
-(id)initWithData:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(long long)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2 ;
@end

