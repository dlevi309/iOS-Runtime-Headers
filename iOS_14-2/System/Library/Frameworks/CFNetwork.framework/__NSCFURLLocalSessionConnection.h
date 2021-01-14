/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFURLSessionConnection.h>
#import <libobjc.A.dylib/NSURLAuthenticationChallengeSender.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_data;
@class NSObject, NSError, NSURLResponse, NSString;

@interface __NSCFURLLocalSessionConnection : __NSCFURLSessionConnection <NSURLAuthenticationChallengeSender, NSCopying> {

	SessionConnectionLoadable* _loaderClient;
	URLConnectionLoader* _loader;
	BOOL _canceled;
	long long _suspended;
	NSObject*<OS_dispatch_data> _pendingData;
	long long _pendingCompletion;
	unsigned long long _didReceiveResponseDisposition;
	NSError* _pendingError;
	int _state;
	long long _clientBufferLength;
	NSObject*<OS_dispatch_data> _sniffData;
	NSURLResponse* _sniffResponse;
	BOOL _isMixedReplace;
	BOOL _didCheckMixedReplace;
	BOOL _didCheckCredentialsSuppliedInURL;
	BOOL _actuallyTriedCredentialsSuppliedInURL;
	unsigned long long _maxDataSegmentCoalesceThreshhold;
	unsigned long long _maxDataSegmentCount;
	unsigned _didReceiveDataCount;
	BOOL _canSendDidFinishCollectingMetrics;
	BOOL _ignoreLoaderEvents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)_conditionalRequirementsChanged:(BOOL)arg1 ;
-(void)suspend;
-(void)withLoaderAsync:(/*^block*/id)arg1 ;
-(void)_willSendRequestForEstablishedConnection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPriorityHint:(float)arg1 incremental:(BOOL)arg2 ;
-(void)setPoolPriority:(long long)arg1 ;
-(void)_needNewBodyStream;
-(void)_capturedSocketInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)_needConnectedSocketToHost:(id)arg1 port:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_ackBytes:(long long)arg1 ;
-(void)_didReceiveChallenge:(id)arg1 ;
-(void)_captureTransportConnection:(shared_ptr<TransportConnection>*)arg1 extraBytes:(id)arg2 ;
-(void)_redirectRequest:(id)arg1 redirectResponse:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)expectedProgressTargetChanged;
-(void)setBytesPerSecondLimit:(long long)arg1 ;
-(void)_didReceiveResponse:(id)arg1 sniff:(BOOL)arg2 rewrite:(BOOL)arg3 ;
-(void)_didFinishWithError:(id)arg1 ;
-(void)setIsDownload:(BOOL)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)cancel;
-(void)resume;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)_didSendBodyData:(UploadProgressInfo)arg1 ;
-(void)_connectionIsWaitingWithReason:(long long)arg1 ;
-(void)dealloc;
-(void)_didReceiveData:(id)arg1 ;
@end

