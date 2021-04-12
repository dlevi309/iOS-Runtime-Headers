/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSData : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (readonly) unsigned long long length; 
@property (readonly) const void* bytes; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)dataWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)data;
+(id)dataWithContentsOfFile:(id)arg1 ;
+(id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
+(id)dataWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)_newZeroingDataWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(BOOL)_base64DecodingAlwaysSucceedsForOptions:(unsigned long long)arg1 ;
+(id)_alloc;
+(id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
+(id)dataWithContentsOfURL:(id)arg1 ;
+(id)dataWithContentsOfMappedFile:(id)arg1 ;
+(id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)dataWithData:(id)arg1 ;
+(id)_newZeroingDataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
+(id)CKDataWithHexString:(id)arg1 stringIsUppercase:(BOOL)arg2 ;
+(id)CKDataWithHexString:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5 ;
-(const void*)bytes;
-(BOOL)_isCompact;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)_createDispatchData;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(unsigned long long)_cfTypeID;
-(BOOL)_providesConcreteBacking;
-(id)initWithData:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(BOOL)isNSData__;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(BOOL)_copyWillRetain;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_isDispatchData;
-(BOOL)isEqualToData:(id)arg1 ;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_canReplaceWithDispatchDataForXPCCoder;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id*)arg4 ;
-(NSRange)rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(BOOL)_decodeBase64EncodedCharacterBuffer:(const char*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 buffer:(char*)arg4 bufferLength:(unsigned long long)arg5 state:(SCD_Struct_NS16*)arg6 ;
-(id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_base64EncodingAsString:(BOOL)arg1 withOptions:(unsigned long long)arg2 ;
-(id)_asciiDescription;
-(BOOL)_allowsDirectEncoding;
-(void)getBytes:(void*)arg1 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(id)initWithContentsOfMappedFile:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 error:(id*)arg2 ;
-(id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2 ;
-(id)base64EncodedStringWithOptions:(unsigned long long)arg1 ;
-(id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2 ;
-(id)base64EncodedDataWithOptions:(unsigned long long)arg1 ;
-(id)initWithBase64Encoding:(id)arg1 ;
-(id)base64Encoding;
-(id)_dataWithCompressionOperation:(int)arg1 algorithm:(long long)arg2 ;
-(id)decompressedDataUsingAlgorithm:(long long)arg1 error:(id*)arg2 ;
-(id)compressedDataUsingAlgorithm:(long long)arg1 error:(id*)arg2 ;
-(id)_web_guessedMIMETypeForXML;
-(id)_web_guessedMIMEType;
-(id)_web_guessedMIMETypeForExtension:(id)arg1 ;
-(id)_web_parseRFC822HeaderFields;
-(id)_replaceCString:(const char*)arg1 withCString:(const char*)arg2 ;
-(id)_requestFromResumeData;
-(BOOL)_isSafeResumeDataForBackgroundDownload;
-(id)CKUppercaseHexStringWithoutSpaces;
-(id)CKHexString;
-(id)CKLowercaseHexStringWithoutSpaces;
@end

