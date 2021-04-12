/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingCopyEtagOperation : BROperation {

	NSURL* _fileURL;
	/*^block*/id _sharingEtagCompletionBlock;

}

@property (copy) id sharingEtagCompletionBlock;              //@synthesize sharingEtagCompletionBlock=_sharingEtagCompletionBlock - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)sharingEtagCompletionBlock;
-(void)setSharingEtagCompletionBlock:(id)arg1 ;
@end

