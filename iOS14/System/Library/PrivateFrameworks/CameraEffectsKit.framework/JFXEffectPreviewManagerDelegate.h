/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JFXEffectPreviewManagerDelegate <NSObject>
@optional
-(void)effectPreviewManager:(id)arg1 didUpdateContinousPreviewsForEffectIDs:(id)arg2;
-(void)effectPreviewManager:(id)arg1 willBeginDownloadingPreviewAssetsForEffect:(id)arg2;
-(void)effectPreviewManager:(id)arg1 downloadingPreviewAssetsForEffect:(id)arg2 progress:(double)arg3;
-(void)effectPreviewManager:(id)arg1 didFinishDownloadingPreviewAssetsForEffect:(id)arg2 wasCancelled:(BOOL)arg3 error:(id)arg4;

@end

