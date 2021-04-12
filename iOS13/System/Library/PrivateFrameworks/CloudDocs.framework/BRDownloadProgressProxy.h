/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <Foundation/NSProgress.h>

@class NSMetadataQuery, NSOperationQueue;

@interface BRDownloadProgressProxy : NSProgress {

	NSMetadataQuery* _query;
	NSOperationQueue* _queue;

}
-(id)initWithURL:(id)arg1 ;
-(void)stop;
-(void)start;
-(void)_queryDidReceiveUpdate:(id)arg1 ;
@end

