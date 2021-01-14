/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JFXEffectPreviewAssetProviderProtocol <JFXEffectAssetProviderProtocol>
@property (nonatomic,readonly) BOOL arePreviewingAssetsLocal; 
@required
-(BOOL)arePreviewingAssetsLocal;
-(id)requestPreviewingAssetsWithPriority:(long long)arg1 onlyThumbnailAssetWhenAvailable:(BOOL)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4;

@end

