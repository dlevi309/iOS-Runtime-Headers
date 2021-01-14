/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MIME-Structs.h>
#import <CoreFoundation/NSMutableData.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface MFMutableData : NSMutableData <NSCopying, NSMutableCopying> {

	void* _bytes;
	unsigned long long _length;
	unsigned long long _mappedLength;
	unsigned long long _capacity;
	unsigned long long _threshold;
	char* _path;
	int _fd;
	unsigned long long _flushFrom;
	BOOL _flush;
	BOOL _immutable;
	BOOL _vm;

}
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)setLength:(unsigned long long)arg1 ;
-(void*)mutableBytes;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(id)init;
-(const void*)bytes;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)length;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(void)mf_makeImmutable;
-(id)initWithLength:(unsigned long long)arg1 ;
-(void)appendData:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(void)dealloc;
-(BOOL)mf_immutable;
-(void)_mapMutableData:(BOOL)arg1 ;
-(void)_flushToDisk:(unsigned long long)arg1 capacity:(unsigned long long)arg2 ;
-(id)_initWithFd:(int)arg1 path:(id)arg2 mutable:(BOOL)arg3 ;
-(void)setMappingThreshold:(unsigned)arg1 ;
@end

