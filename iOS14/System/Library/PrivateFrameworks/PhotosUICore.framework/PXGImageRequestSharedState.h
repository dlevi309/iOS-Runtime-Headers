/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXDisplayAssetFetchResult, PXGDisplayAssetRequestObserver;
#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXGImageRequestSharedState : NSObject {

	id<PXDisplayAssetFetchResult> _displayAssetFetchResult;
	id<PXGDisplayAssetRequestObserver> _observer;
	unsigned long long _presentationStyles;
	double _screenScale;
	CGSize _targetSize;

}

@property (nonatomic,readonly) id<PXDisplayAssetFetchResult> displayAssetFetchResult;              //@synthesize displayAssetFetchResult=_displayAssetFetchResult - In the implementation block
@property (nonatomic,readonly) id<PXGDisplayAssetRequestObserver> observer;                        //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) unsigned long long presentationStyles;                              //@synthesize presentationStyles=_presentationStyles - In the implementation block
@property (nonatomic,readonly) CGSize targetSize;                                                  //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) double screenScale;                                                 //@synthesize screenScale=_screenScale - In the implementation block
-(CGSize)targetSize;
-(id<PXGDisplayAssetRequestObserver>)observer;
-(id)initWithDisplayAssetFetchResult:(id)arg1 observer:(id)arg2 presentationStyles:(unsigned long long)arg3 targetSize:(CGSize)arg4 screenScale:(double)arg5 ;
-(id<PXDisplayAssetFetchResult>)displayAssetFetchResult;
-(double)screenScale;
-(unsigned long long)presentationStyles;
@end

