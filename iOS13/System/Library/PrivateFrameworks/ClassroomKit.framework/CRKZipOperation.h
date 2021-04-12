/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <Catalyst/CATOperation.h>

@class NSURL;

@interface CRKZipOperation : CATOperation {

	NSURL* _directoryURL;
	NSURL* _destinationZipFileURL;

}

@property (nonatomic,readonly) NSURL * directoryURL;                       //@synthesize directoryURL=_directoryURL - In the implementation block
@property (nonatomic,readonly) NSURL * destinationZipFileURL;              //@synthesize destinationZipFileURL=_destinationZipFileURL - In the implementation block
-(void)main;
-(NSURL *)directoryURL;
-(id)initWithDirectoryURL:(id)arg1 ;
-(id)initWithDirectoryURL:(id)arg1 destinationZipName:(id)arg2 ;
-(id)initWithDirectoryURL:(id)arg1 destinationZipURL:(id)arg2 ;
-(BOOL)validateParametersWithError:(id*)arg1 ;
-(BOOL)createDestinationDirectoryWithError:(id*)arg1 ;
-(NSURL *)destinationZipFileURL;
-(BOOL)writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(archiveRef)makeArchiveWithError:(id*)arg1 ;
-(BOOL)populateArchive:(archiveRef)arg1 error:(id*)arg2 ;
-(void)finalizeArchive:(archiveRef)arg1 ;
-(id)errorFromArchive:(archiveRef)arg1 ;
-(BOOL)populateArchive:(archiveRef)arg1 usingDisk:(archiveRef)arg2 error:(id*)arg3 ;
-(BOOL)writeFTSEntry:(id)arg1 toArchive:(archiveRef)arg2 usingDisk:(archiveRef)arg3 error:(id*)arg4 ;
-(BOOL)writeHeaderForFTSEntry:(id)arg1 toArchive:(archiveRef)arg2 usingDisk:(archiveRef)arg3 fileDescriptor:(int)arg4 error:(id*)arg5 ;
-(BOOL)writeDataForFTSEntry:(id)arg1 toArchive:(archiveRef)arg2 fileDescriptor:(int)arg3 error:(id*)arg4 ;
-(const char*)relativePathForPathOnDisk:(id)arg1 ;
-(long long)lengthOfBufferForFileDescriptor:(int)arg1 stat:(stat)arg2 ;
-(BOOL)writeDataFromFileDescriptor:(int)arg1 toArchive:(archiveRef)arg2 usingBuffer:(id)arg3 error:(id*)arg4 ;
@end

