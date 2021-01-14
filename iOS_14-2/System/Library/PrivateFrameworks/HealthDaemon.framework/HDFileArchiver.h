/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSURL;

@interface HDFileArchiver : NSObject {

	NSURL* _sourceURL;
	NSURL* _prefixURL;
	NSURL* _destinationDirectoryURL;
	archiveRef _reader;
	archiveRef _writer;
	vector<unsigned char, std::__1::allocator<unsigned char> > _nullBuffer;

}
-(id)init;
-(void)_reset;
-(void)dealloc;
-(BOOL)compressFileAtURL:(id)arg1 to:(id)arg2 strippingPathPrefix:(id)arg3 error:(id*)arg4 ;
-(BOOL)_copyDataForEntry:(archive_entryRef)arg1 error:(id*)arg2 ;
-(const char*)_stripLeadingPathComponents:(const char*)arg1 ;
-(BOOL)_writeEntry:(archive_entryRef)arg1 error:(id*)arg2 ;
-(BOOL)_writeArchive:(id*)arg1 ;
-(BOOL)_readArchive:(id*)arg1 ;
-(BOOL)decompressArchiveAt:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
@end

