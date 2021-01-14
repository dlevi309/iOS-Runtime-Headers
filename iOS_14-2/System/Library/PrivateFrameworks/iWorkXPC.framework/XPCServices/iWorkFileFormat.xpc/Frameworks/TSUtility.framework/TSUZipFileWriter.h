/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <OfficeImport/TSUZipWriter.h>

@protocol TSURandomWriteChannel;
@interface TSUZipFileWriter : TSUZipWriter {

	id<TSURandomWriteChannel> _writeChannel;
	/*^block*/id _writeChannelCompletionHandler;

}
+(void)zipDirectoryAtURL:(id)arg1 customDirectoryFilename:(id)arg2 toURL:(id)arg3 queue:(id)arg4 progressHandler:(/*^block*/id)arg5 ;
+(void)zipDirectoryAtURL:(id)arg1 toURL:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)prepareWriteChannelWithCloseCompletionHandler:(/*^block*/id)arg1 ;
-(void)truncateToOffsetImpl:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithZipFileArchive:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)copyRemainingEntries:(id)arg1 fromArchive:(id)arg2 progress:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithZipFileArchive:(id)arg1 error:(id*)arg2 ;
-(void)copyEntriesFromZipFileWriter:(id)arg1 readingFromURL:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

