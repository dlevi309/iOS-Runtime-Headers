/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSString, NSURL;

@interface SLExternalServiceGatekeeper : NSObject <NSURLSessionTaskDelegate> {

	NSString* _redirectHost;
	NSURL* _url;
	/*^block*/id _completion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(BOOL)_gatekeepingIsNotAvailable;
-(void)_completeWithURLToLoad:(id)arg1 error:(id)arg2 ;
-(id)initForPermissionToAccessURL:(id)arg1 fromURLString:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

