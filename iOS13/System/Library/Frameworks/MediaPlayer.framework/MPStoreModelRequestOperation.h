/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSOperation, MPModelResponse, MPStoreModelRequest;

@interface MPStoreModelRequestOperation : MPAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	NSOperation* _childOperation;
	MPModelResponse* _response;
	double _startExecutingTimeStamp;
	NSObject*<OS_dispatch_source> _timeoutTimerSource;
	MPStoreModelRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,readonly) double remainingTimeInterval; 
@property (nonatomic,copy) MPStoreModelRequest * request;                 //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                            //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(void)setRequest:(MPStoreModelRequest *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(MPStoreModelRequest *)request;
-(id)responseHandler;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)adjustTimeoutInterval:(double)arg1 ;
-(id)initWithRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(double)remainingTimeInterval;
-(void)assertRunningInAccessQueue;
-(void)_finishWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_executeItemMetadataLoadForRequestedItemIdentifiers:(id)arg1 reason:(unsigned long long)arg2 requestContext:(id)arg3 ;
-(void)_executeURLLoadWithRequest:(id)arg1 storeBagDictionary:(id)arg2 requestContext:(id)arg3 ;
-(void)_executeURLLoadWithRequests:(id)arg1 storeBagDictionary:(id)arg2 requestContext:(id)arg3 ;
-(void)_handleTimeout;
-(void)_tearDownTimeoutTimerSource;
@end

