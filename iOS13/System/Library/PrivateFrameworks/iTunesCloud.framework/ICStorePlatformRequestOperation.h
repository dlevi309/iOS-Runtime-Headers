/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ICStoreURLRequest, ICStorePlatformRequest;

@interface ICStorePlatformRequestOperation : ICAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	ICStoreURLRequest* _activeURLRequest;
	ICStorePlatformRequestOperation* _strongSelf;
	ICStorePlatformRequest* _platformRequest;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy,readonly) ICStorePlatformRequest * platformRequest;              //@synthesize platformRequest=_platformRequest - In the implementation block
@property (nonatomic,copy) id responseHandler;                                             //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)cancel;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(id)_requestContext;
-(void)_finishWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_executePersonalized;
-(void)_executeUnpersonalized;
-(id)_URLRequestWithBaseURL:(id)arg1 ;
-(void)_enqueueDataRequest:(id)arg1 ;
-(id)initWithPlatformRequest:(id)arg1 ;
-(ICStorePlatformRequest *)platformRequest;
@end

