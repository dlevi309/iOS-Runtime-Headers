/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, MPCModelGenericAVItemAssetLoadProperties, ICStoreRequestContext, ICMusicSubscriptionLeaseSession;

@interface MPCModelGenericAVItemSubscriptionAssetLoadOperation : MPAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	/*^block*/id _cancellationHandler;
	MPCModelGenericAVItemAssetLoadProperties* _assetLoadProperties;
	long long _operationType;
	ICStoreRequestContext* _requestContext;
	/*^block*/id _responseHandler;
	ICMusicSubscriptionLeaseSession* _subscriptionLeaseSession;

}

@property (nonatomic,retain) MPCModelGenericAVItemAssetLoadProperties * assetLoadProperties;              //@synthesize assetLoadProperties=_assetLoadProperties - In the implementation block
@property (assign,nonatomic) long long operationType;                                                     //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * requestContext;                                        //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy) id responseHandler;                                                            //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,retain) ICMusicSubscriptionLeaseSession * subscriptionLeaseSession;                  //@synthesize subscriptionLeaseSession=_subscriptionLeaseSession - In the implementation block
-(id)init;
-(void)cancel;
-(void)setCancellationHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)cancellationHandler;
-(long long)operationType;
-(void)setOperationType:(long long)arg1 ;
-(void)execute;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(ICStoreRequestContext *)requestContext;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(void)setAssetLoadProperties:(MPCModelGenericAVItemAssetLoadProperties *)arg1 ;
-(void)setSubscriptionLeaseSession:(ICMusicSubscriptionLeaseSession *)arg1 ;
-(MPCModelGenericAVItemAssetLoadProperties *)assetLoadProperties;
-(ICMusicSubscriptionLeaseSession *)subscriptionLeaseSession;
-(id)_handlePlaybackResponse:(id)arg1 withPlaybackCacheRequest:(id)arg2 error:(id*)arg3 ;
@end

