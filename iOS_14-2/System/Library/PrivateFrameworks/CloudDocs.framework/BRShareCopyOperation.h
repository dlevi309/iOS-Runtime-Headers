/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRootShareCopyCompletionBlock:(id)arg1 ;
-(id)shareCopyCompletionBlock;
-(void)setShareCopyCompletionBlock:(id)arg1 ;
-(id)rootShareCopyCompletionBlock;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(void)main;
-(void)setUrl:(NSURL *)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

