/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEODataURLSessionTask.h>

@class NSURL;

@interface GEODataURLSessionDownloadTask : GEODataURLSessionTask {

	NSURL* _downloadedFileURL;

}
-(id)downloadedFileURL;
-(void)didFinishDownloadingToURL:(id)arg1 ;
-(id)_createBackingTaskWithRequest:(id)arg1 session:(id)arg2 ;
@end

