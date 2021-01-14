/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MIME-Structs.h>
#import <CoreFoundation/NSData.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSData, NSString;

@interface MFData : NSData <NSCopying, NSMutableCopying> {

	NSData* _internal;
	NSString* _path;
	NSData* _parent;
	BOOL _subdata;

}
+(void)setDefaultMappingThresholdInBytes:(unsigned long long)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
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
-(id)data;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(id)initWithImmutableData:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(void)dealloc;
-(id)_initWithRange:(NSRange)arg1 from:(id)arg2 retainingParent:(BOOL)arg3 ;
-(BOOL)mf_immutable;
-(id)_initWithData:(id)arg1 maybeMutable:(BOOL)arg2 ;
-(id)_initWithFile:(id)arg1 ;
@end

