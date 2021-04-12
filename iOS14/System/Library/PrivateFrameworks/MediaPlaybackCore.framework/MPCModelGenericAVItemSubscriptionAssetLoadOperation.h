/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute;
-(long long)operationType;
-(id)init;
-(ICStoreRequestContext *)requestContext;
-(id)responseHandler;
-(void)setCancellationHandler:(/*^block*/id)arg1 ;
-(id)description;
-(void)setResponseHandler:(id)arg1 ;
-(void)setOperationType:(long long)arg1 ;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(/*^block*/id)cancellationHandler;
-(void)cancel;
-(void)setAssetLoadProperties:(MPCModelGenericAVItemAssetLoadProperties *)arg1 ;
-(void)setSubscriptionLeaseSession:(ICMusicSubscriptionLeaseSession *)arg1 ;
-(MPCModelGenericAVItemAssetLoadProperties *)assetLoadProperties;
-(ICMusicSubscriptionLeaseSession *)subscriptionLeaseSession;
-(id)_handlePlaybackResponse:(id)arg1 withPlaybackCacheRequest:(id)arg2 error:(id*)arg3 ;
@end

