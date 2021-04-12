/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/

#import <BookUtility/BUZipArchive.h>

@protocol OS_dispatch_queue;
@class NSObject, BUZipFileDescriptorWrapper, NSURL;

@interface BUZipFileArchive : BUZipArchive {

	unsigned long long _archiveLength;
	NSObject*<OS_dispatch_queue> _accessQueue;
	BUZipFileDescriptorWrapper* _fdWrapper;
	NSURL* _temporaryDirectoryURL;
	NSURL* _URL;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) BUZipFileDescriptorWrapper * fdWrapper;                //@synthesize fdWrapper=_fdWrapper - In the implementation block
@property (nonatomic,retain) NSURL * temporaryDirectoryURL;                         //@synthesize temporaryDirectoryURL=_temporaryDirectoryURL - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                           //@synthesize URL=_URL - In the implementation block
+(void)readArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)isZipArchiveAtFD:(int)arg1 ;
+(BOOL)isZipArchiveAtURL:(id)arg1 error:(id*)arg2 ;
+(id)zipArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)debugDescription;
-(BOOL)isValid;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSURL *)temporaryDirectoryURL;
-(void)setTemporaryDirectoryURL:(NSURL *)arg1 ;
-(void)removeTemporaryDirectory;
-(unsigned long long)archiveLength;
-(void)createTemporaryDirectoryRelativeToURL:(id)arg1 ;
-(id)initForReadingFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)openWithURL:(id)arg1 error:(id*)arg2 ;
-(BUZipFileDescriptorWrapper *)fdWrapper;
-(BOOL)reopenWithTemporaryURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithWriter:(id)arg1 forReadingFromURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)copyToTemporaryLocationRelativeToURL:(id)arg1 error:(id*)arg2 ;
-(id)newArchiveReadChannel;
-(void)setFdWrapper:(BUZipFileDescriptorWrapper *)arg1 ;
@end

