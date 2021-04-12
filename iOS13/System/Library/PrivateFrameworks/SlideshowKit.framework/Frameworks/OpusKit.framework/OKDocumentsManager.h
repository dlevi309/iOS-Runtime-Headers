/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@protocol OS_dispatch_queue;
#import <OpusKit/OpusKit-Structs.h>
@class NSObject;

@interface OKDocumentsManager : NSObject {

	NSObject*<OS_dispatch_queue> _documentsAccessQueue;

}
+(id)defaultManager;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)performAsynchronousFileAccessUsingBlock:(/*^block*/id)arg1 ;
-(id)documentsDirectoryURL;
-(void)_performAsynchronousFileAccessUsingBlock:(/*^block*/id)arg1 ;
-(id)localDocumentsDirectoryURL;
-(id)documentURLsAtDirectoryURL:(id)arg1 error:(id*)arg2 ;
-(id)uniqueFileURLForFileName:(id)arg1 inDirectoryURL:(id)arg2 error:(id*)arg3 ;
-(id)importFileURL:(id)arg1 toDirectoryURL:(id)arg2 copy:(BOOL)arg3 error:(id*)arg4 ;
-(id)documentURLs:(id*)arg1 ;
-(id)uniqueFileURLForFileName:(id)arg1 error:(id*)arg2 ;
-(id)importFileURL:(id)arg1 error:(id*)arg2 ;
-(id)importFileURL:(id)arg1 toDirectoryURL:(id)arg2 error:(id*)arg3 ;
-(id)duplicateFileURL:(id)arg1 error:(id*)arg2 ;
-(id)duplicateFileURL:(id)arg1 toDirectoryURL:(id)arg2 error:(id*)arg3 ;
-(id)renameFileURL:(id)arg1 toFileName:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteFileURL:(id)arg1 error:(id*)arg2 ;
@end

