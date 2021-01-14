/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriAudioSupport.framework/SiriAudioSupport
*/


#import <SiriAudioSupport/SiriAudioSupport-Structs.h>
@interface SiriAudioArchiveExtractor : NSObject
-(archiveRef)createWriteDiskArchive;
-(BOOL)copyDataFromReadArchive:(archiveRef)arg1 toWriteDiskArchive:(archiveRef)arg2 ;
-(archiveRef)createReadArchive;
-(BOOL)performExtractionForArchive:(archiveRef)arg1 toDestinationDirectory:(id)arg2 ;
-(BOOL)unarchiveData:(id)arg1 toDestinationDirectory:(id)arg2 ;
-(BOOL)extractArchiveAtURL:(id)arg1 toDestinationDirectoryURL:(id)arg2 ;
@end

