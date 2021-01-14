/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRShareCopyAccessTokenOperation : BROperation {

	NSURL* _url;
	/*^block*/id _shareCopyAccessTokenCompletionBlock;

}

@property (nonatomic,retain) NSURL * url;                             //@synthesize url=_url - In the implementation block
@property (copy) id shareCopyAccessTokenCompletionBlock;              //@synthesize shareCopyAccessTokenCompletionBlock=_shareCopyAccessTokenCompletionBlock - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(id)shareCopyAccessTokenCompletionBlock;
-(void)setShareCopyAccessTokenCompletionBlock:(id)arg1 ;
-(NSURL *)url;
-(void)main;
-(void)setUrl:(NSURL *)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

