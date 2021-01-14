/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)shareTokenCompletionBlock;
-(void)setShareTokenCompletionBlock:(id)arg1 ;
-(id)shareAndBaseTokenCompletionBlock;
-(void)setShareAndBaseTokenCompletionBlock:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

