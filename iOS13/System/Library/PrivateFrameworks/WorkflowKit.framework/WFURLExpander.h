/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSURL, NSString;

@interface WFURLExpander : NSObject <NSURLSessionDataDelegate> {

	NSURL* _URL;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) NSURL * URL;                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)expandURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)start;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)finishWithURL:(id)arg1 error:(id)arg2 ;
@end

