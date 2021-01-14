/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <Foundation/NSProgress.h>

@class NSMetadataQuery, NSOperationQueue;

@interface BRDownloadProgressProxy : NSProgress {

	NSMetadataQuery* _query;
	NSOperationQueue* _queue;

}
-(id)initWithURL:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)_queryDidReceiveUpdate:(id)arg1 ;
@end

