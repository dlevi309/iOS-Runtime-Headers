/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/TSUZipArchive.h>

@class TSUZipArchive, TSUZipEntry;

@interface TSUContainedZipArchive : TSUZipArchive {

	TSUZipArchive* _zipArchive;
	TSUZipEntry* _entry;

}
+(id)zipArchiveFromEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)isValid;
-(unsigned long long)archiveLength;
-(id)newArchiveReadChannel;
-(id)readChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2 ;
-(id)streamReadChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2 ;
-(id)initWithEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3 ;
@end

