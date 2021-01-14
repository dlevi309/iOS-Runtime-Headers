/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <CoreFoundation/NSData.h>

@class NSData, NSDate, NSString;

@interface NSPageData : NSData {

	NSData* data;
	NSDate* _originalFileModDate;
	NSString* _originalFilePath;

}
+(void)initialize;
+(long long)_umask;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 hardLinkPath:(id)arg5 ;
-(unsigned long long)writeFd:(long long)arg1 ;
-(id)init;
-(id)initWithContentsOfMappedFile:(id)arg1 withFileAttributes:(id)arg2 ;
-(void)_setOriginalFileInfoFromFileAttributes:(id)arg1 ;
-(const void*)bytes;
-(id)initFromSerializerStream:(id)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)length;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(unsigned long long)writeFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)_mappedFile;
-(id)deserializer;
-(id)data;
-(id)initWithDataNoCopy:(id)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
@end

