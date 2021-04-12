/*
* Generated on Thursday, January 14, 2021 at 2:29:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAppPatch.dylib
*/


#import <libAppPatch.dylib/libAppPatch.dylib-Structs.h>
@interface MIBOMWrapper : NSObject
+(BOOL)extractZipArchiveAtURL:(id)arg1 toURL:(id)arg2 withError:(id*)arg3 ;
+(BOOL)extractZipArchiveAtURL:(id)arg1 toURL:(id)arg2 withError:(id*)arg3 extractionProgressBlock:(/*^block*/id)arg4 ;
+(BOOL)_countFilesAndBytesInArchiveAtURL:(id)arg1 withBOMCopier:(BOMCopierRef)arg2 totalFiles:(unsigned long long*)arg3 totalUncompressedBytes:(unsigned long long*)arg4 error:(id*)arg5 ;
@end

