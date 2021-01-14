/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSData : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (readonly) unsigned long long length; 
@property (readonly) const void* bytes; 
+(id)_alloc;
+(id)dataWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)dataWithContentsOfURL:(id)arg1 ;
+(id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
+(id)dataWithData:(id)arg1 ;
+(id)_newZeroingDataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
+(id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
+(BOOL)_base64DecodingAlwaysSucceedsForOptions:(unsigned long long)arg1 ;
+(id)_newZeroingDataWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)dataWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)dataWithContentsOfFile:(id)arg1 ;
+(id)dataWithContentsOfMappedFile:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)data;
+(id)CKDataWithHexString:(id)arg1 stringIsUppercase:(BOOL)arg2 ;
+(id)CKDataWithHexString:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(BOOL)_providesConcreteBacking;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)isNSData__;
-(id)initWithContentsOfFile:(id)arg1 ;
-(BOOL)_decodeBase64EncodedCharacterBuffer:(const char*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 buffer:(char*)arg4 bufferLength:(unsigned long long)arg5 state:(SCD_Struct_NS10*)arg6 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(BOOL)_isDispatchData;
-(BOOL)isEqualToData:(id)arg1 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)base64EncodedStringWithOptions:(unsigned long long)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id*)arg4 ;
-(NSRange)rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(id)_dataWithCompressionOperation:(int)arg1 algorithm:(long long)arg2 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithContentsOfMappedFile:(id)arg1 error:(id*)arg2 ;
-(id)compressedDataUsingAlgorithm:(long long)arg1 error:(id*)arg2 ;
-(id)_base64EncodingAsString:(BOOL)arg1 withOptions:(unsigned long long)arg2 ;
-(const void*)bytes;
-(id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned long long)arg2 ;
-(id)decompressedDataUsingAlgorithm:(long long)arg1 error:(id*)arg2 ;
-(id)_web_guessedMIMETypeForExtension:(id)arg1 ;
-(BOOL)_copyWillRetain;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)length;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)_web_parseRFC822HeaderFields;
-(id)_replaceCString:(const char*)arg1 withCString:(const char*)arg2 ;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 error:(id*)arg2 ;
-(id)base64EncodedDataWithOptions:(unsigned long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_web_guessedMIMEType;
-(id)base64Encoding;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)_asciiDescription;
-(id)_web_guessedMIMETypeForXML;
-(id)description;
-(Class)classForCoder;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)initWithBase64Encoding:(id)arg1 ;
-(BOOL)_canReplaceWithDispatchDataForXPCCoder;
-(BOOL)_isCompact;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(id)_createDispatchData;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)getBytes:(void*)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)_isSafeResumeDataForBackgroundDownload;
-(id)_requestFromResumeData;
-(id)CKHexString;
-(id)CKUppercaseHexStringWithoutSpaces;
-(id)CKLowercaseHexStringWithoutSpaces;
@end

