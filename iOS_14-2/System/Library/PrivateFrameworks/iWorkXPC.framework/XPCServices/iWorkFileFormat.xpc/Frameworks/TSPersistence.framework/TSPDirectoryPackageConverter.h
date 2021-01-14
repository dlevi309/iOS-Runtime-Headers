/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPPackageConverter.h>

@interface TSPDirectoryPackageConverter : TSPPackageConverter
-(BOOL)isValid;
-(BOOL)enumeratePackageEntriesWithZipArchive:(id)arg1 needsReadChannel:(BOOL)arg2 accessor:(/*^block*/id)arg3 ;
-(unsigned long long)progressTotalUnitCountWithZipArchive:(id)arg1 ;
-(BOOL)performAccessor:(/*^block*/id)arg1 filePathCharacterIndex:(unsigned long long)arg2 fileURL:(id)arg3 needsReadChannel:(BOOL)arg4 zipArchive:(id)arg5 error:(id*)arg6 ;
@end

