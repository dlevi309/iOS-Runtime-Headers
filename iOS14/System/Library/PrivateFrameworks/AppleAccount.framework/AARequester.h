/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class AARequest, AAResponse, NSURLConnection, NSMutableData, NSHTTPURLResponse, AKAppleIDSession, NSObject, NSString;

@interface AARequester : NSOperation <NSURLConnectionDelegate> {

	AARequest* _request;
	AAResponse* _response;
	NSURLConnection* _urlConnection;
	/*^block*/id _handler;
	NSMutableData* _data;
	NSHTTPURLResponse* _httpResponse;
	Class _responseClass;
	BOOL _isExecuting;
	BOOL _isFinished;
	BOOL _canceled;
	AKAppleIDSession* _appleIDSession;
	BOOL _shouldRetry;
	BOOL _isCanceled;
	NSObject*<OS_dispatch_queue> _handlerQueue;

}

@property (assign,getter=isExecuting,nonatomic) BOOL isExecuting;                    //@synthesize isExecuting=_isExecuting - In the implementation block
@property (getter=isFinished) BOOL finished;                                         //@synthesize isFinished=_isFinished - In the implementation block
@property (getter=isCanceled) BOOL canceled;                                         //@synthesize isCanceled=_isCanceled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue;              //@synthesize handlerQueue=_handlerQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCanceled:(BOOL)arg1 ;
-(BOOL)isCanceled;
-(void)_callHandler;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)_kickOffRequest:(id)arg1 ;
-(void)start;
-(void)__unsafe_callHandler;
-(id)initWithRequest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(BOOL)isFinished;
-(void)setFinished:(BOOL)arg1 ;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(BOOL)isExecuting;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)cancel;
@end

