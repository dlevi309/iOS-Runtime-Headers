/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)sharingEtagCompletionBlock;
-(void)setSharingEtagCompletionBlock:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

