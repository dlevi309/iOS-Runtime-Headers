/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JFXEffectAssetProviderProtocol <NSObject>
@required
-(id)requestAllAssetsWithOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)requestAssetWithOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)cancelAssetRequest:(id)arg1;
-(id)availableAssetsWithFilteringOptionsArray:(id)arg1;
-(id)availableAssetsWithFilteringOptions:(id)arg1;
-(id)localAssetsWithFilteringOptions:(id)arg1;
-(id)describeRequest:(id)arg1;
-(void)updatePriorityForAssetRequest:(id)arg1 newPriority:(long long)arg2;

@end

