/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSProgress, NSOperationQueue, NSObject, MPCModelStorePlaybackItemsRequest;

@interface MPCModelStorePlaybackItemsRequestOperation : MPAsyncOperation {

	NSProgress* _activeProgress;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _activeProgressQueue;
	MPCModelStorePlaybackItemsRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy,readonly) MPCModelStorePlaybackItemsRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) id responseHandler;                                       //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(id)initWithRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)responseHandler;
-(MPCModelStorePlaybackItemsRequest *)request;
-(void)cancel;
-(void)_executeWithUserIdentity:(id)arg1 ;
-(void)_validateUserIdentityForRequestWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_shouldUseLegacyAccumulator;
@end

