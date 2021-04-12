/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXDisplayAsset, PXDisplayAssetVideoContentProviderRequestDelegate;
@class PXMediaProvider;

@interface PXDisplayAssetVideoContentProviderRequest : NSObject {

	long long _requestID;
	id<PXDisplayAsset> _asset;
	PXMediaProvider* _mediaProvider;
	long long _priority;
	double _loadingProgress;
	id<PXDisplayAssetVideoContentProviderRequestDelegate> _delegate;

}

@property (nonatomic,readonly) id<PXDisplayAsset> asset;                                                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PXMediaProvider * mediaProvider;                                                  //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) long long priority;                                                               //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) double loadingProgress;                                                           //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (assign,nonatomic,__weak) id<PXDisplayAssetVideoContentProviderRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)requestWithAsset:(id)arg1 mediaProvider:(id)arg2 priority:(long long)arg3 delegate:(id)arg4 ;
-(PXMediaProvider *)mediaProvider;
-(id<PXDisplayAssetVideoContentProviderRequestDelegate>)delegate;
-(id<PXDisplayAsset>)asset;
-(void)_handleLoadingProgress:(double)arg1 ;
-(void)_handleMediaProviderResult:(id)arg1 info:(id)arg2 ;
-(void)_start;
-(double)loadingProgress;
-(void)setDelegate:(id<PXDisplayAssetVideoContentProviderRequestDelegate>)arg1 ;
-(long long)_streamingVideoIntent;
-(void)cancel;
-(long long)priority;
-(void)dealloc;
@end

