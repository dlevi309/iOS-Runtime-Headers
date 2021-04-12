/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/TSUZipArchive.h>

@protocol OS_dispatch_queue;
@class NSObject, TSUZipFileDescriptorWrapper, NSURL;

@interface TSUZipFileArchive : TSUZipArchive {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _archiveLength;
	TSUZipFileDescriptorWrapper* _fdWrapper;
	NSURL* _temporaryDirectoryURL;
	NSURL* _URL;

}
+(void)readArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)isZipArchiveAtFD:(int)arg1 ;
+(BOOL)isZipArchiveAtURL:(id)arg1 error:(id*)arg2 ;
+(id)zipArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)debugDescription;
-(BOOL)isValid;
-(id)URL;
-(void)dealloc;
-(unsigned long long)archiveLength;
-(id)initForReadingFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)openWithURL:(id)arg1 error:(id*)arg2 ;
-(void)removeTemporaryDirectory;
-(void)createTemporaryDirectoryRelativeToURL:(id)arg1 ;
-(BOOL)reopenWithTemporaryURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithWriter:(id)arg1 forReadingFromURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)copyToTemporaryLocationRelativeToURL:(id)arg1 error:(id*)arg2 ;
-(id)newArchiveReadChannel;
@end

