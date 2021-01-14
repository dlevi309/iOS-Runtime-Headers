/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXDisplayAsset, PXGDisplayAssetRequestObserver;
#import <PhotosUICore/PhotosUICore-Structs.h>
@interface _PXGMediaRequest : NSObject {

	BOOL _gotAnyResult;
	id<PXDisplayAsset> _asset;
	id<PXGDisplayAssetRequestObserver> _observer;
	unsigned long long _postProcessOptions;
	CGSize _bestReceivedSize;

}

@property (nonatomic,readonly) id<PXDisplayAsset> asset;                                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) id<PXGDisplayAssetRequestObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) unsigned long long postProcessOptions;                    //@synthesize postProcessOptions=_postProcessOptions - In the implementation block
@property (assign,nonatomic) CGSize bestReceivedSize;                                    //@synthesize bestReceivedSize=_bestReceivedSize - In the implementation block
@property (assign,nonatomic) BOOL gotAnyResult;                                          //@synthesize gotAnyResult=_gotAnyResult - In the implementation block
-(id<PXGDisplayAssetRequestObserver>)observer;
-(id<PXDisplayAsset>)asset;
-(BOOL)gotAnyResult;
-(void)setBestReceivedSize:(CGSize)arg1 ;
-(void)setGotAnyResult:(BOOL)arg1 ;
-(id)initWithAsset:(id)arg1 observer:(id)arg2 postProcessOptions:(unsigned long long)arg3 ;
-(CGSize)bestReceivedSize;
-(unsigned long long)postProcessOptions;
@end

