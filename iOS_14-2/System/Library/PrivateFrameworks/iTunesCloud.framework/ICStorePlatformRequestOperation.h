/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ICStoreURLRequest, ICURLSession, ICStorePlatformRequest;

@interface ICStorePlatformRequestOperation : ICAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	ICStoreURLRequest* _activeURLRequest;
	ICStorePlatformRequestOperation* _strongSelf;
	ICURLSession* _urlSession;
	ICStorePlatformRequest* _platformRequest;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy,readonly) ICStorePlatformRequest * platformRequest;              //@synthesize platformRequest=_platformRequest - In the implementation block
@property (nonatomic,copy) id responseHandler;                                             //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(void)_executePersonalized;
-(id)responseHandler;
-(ICStorePlatformRequest *)platformRequest;
-(void)_executeUnpersonalized;
-(void)setResponseHandler:(id)arg1 ;
-(id)_URLRequestWithBaseURL:(id)arg1 ;
-(id)initWithPlatformRequest:(id)arg1 usingURLSession:(id)arg2 ;
-(id)_requestContext;
-(void)finishWithError:(id)arg1 ;
-(void)_finishWithResponse:(id)arg1 error:(id)arg2 ;
-(id)initWithPlatformRequest:(id)arg1 ;
-(void)_enqueueDataRequest:(id)arg1 ;
-(void)cancel;
@end

