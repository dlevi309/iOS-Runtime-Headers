/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRShareCopyOperation : BROperation {

	NSURL* _url;
	/*^block*/id _shareCopyCompletionBlock;
	/*^block*/id _rootShareCopyCompletionBlock;

}

@property (nonatomic,retain) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (copy) id shareCopyCompletionBlock;                  //@synthesize shareCopyCompletionBlock=_shareCopyCompletionBlock - In the implementation block
@property (copy) id rootShareCopyCompletionBlock;              //@synthesize rootShareCopyCompletionBlock=_rootShareCopyCompletionBlock - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)main;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setRootShareCopyCompletionBlock:(id)arg1 ;
-(id)shareCopyCompletionBlock;
-(void)setShareCopyCompletionBlock:(id)arg1 ;
-(id)rootShareCopyCompletionBlock;
@end

