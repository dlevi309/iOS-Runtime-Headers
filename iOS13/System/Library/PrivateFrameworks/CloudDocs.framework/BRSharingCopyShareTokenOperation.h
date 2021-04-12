/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingCopyShareTokenOperation : BROperation {

	NSURL* _fileURL;
	/*^block*/id _shareTokenCompletionBlock;
	/*^block*/id _shareAndBaseTokenCompletionBlock;

}

@property (copy) id shareTokenCompletionBlock;                     //@synthesize shareTokenCompletionBlock=_shareTokenCompletionBlock - In the implementation block
@property (copy) id shareAndBaseTokenCompletionBlock;              //@synthesize shareAndBaseTokenCompletionBlock=_shareAndBaseTokenCompletionBlock - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)shareTokenCompletionBlock;
-(void)setShareTokenCompletionBlock:(id)arg1 ;
-(id)shareAndBaseTokenCompletionBlock;
-(void)setShareAndBaseTokenCompletionBlock:(id)arg1 ;
@end

