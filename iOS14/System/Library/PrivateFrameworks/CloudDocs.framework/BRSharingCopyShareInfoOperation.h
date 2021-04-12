/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingCopyShareInfoOperation : BROperation {

	NSURL* _fileURL;
	/*^block*/id _copyShareInfoCompletionBlock;

}

@property (copy) id copyShareInfoCompletionBlock;              //@synthesize copyShareInfoCompletionBlock=_copyShareInfoCompletionBlock - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(id)copyShareInfoCompletionBlock;
-(void)setCopyShareInfoCompletionBlock:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

