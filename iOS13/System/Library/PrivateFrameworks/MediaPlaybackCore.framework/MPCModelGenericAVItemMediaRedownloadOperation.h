/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ICMediaRedownloadRequest, MPCModelGenericAVItemAssetLoadProperties, ICStoreRequestContext;

@interface MPCModelGenericAVItemMediaRedownloadOperation : MPAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	ICMediaRedownloadRequest* _mediaDownloadRequest;
	MPCModelGenericAVItemAssetLoadProperties* _assetLoadProperties;
	ICStoreRequestContext* _requestContext;
	/*^block*/id _responseHandler;

}

@property (nonatomic,retain) MPCModelGenericAVItemAssetLoadProperties * assetLoadProperties;              //@synthesize assetLoadProperties=_assetLoadProperties - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * requestContext;                                        //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy) id responseHandler;                                                            //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)init;
-(void)cancel;
-(void)execute;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(ICStoreRequestContext *)requestContext;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(void)setAssetLoadProperties:(MPCModelGenericAVItemAssetLoadProperties *)arg1 ;
-(MPCModelGenericAVItemAssetLoadProperties *)assetLoadProperties;
@end

