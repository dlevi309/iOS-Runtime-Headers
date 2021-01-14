/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute;
-(id)init;
-(ICStoreRequestContext *)requestContext;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(void)cancel;
-(void)setAssetLoadProperties:(MPCModelGenericAVItemAssetLoadProperties *)arg1 ;
-(MPCModelGenericAVItemAssetLoadProperties *)assetLoadProperties;
@end

