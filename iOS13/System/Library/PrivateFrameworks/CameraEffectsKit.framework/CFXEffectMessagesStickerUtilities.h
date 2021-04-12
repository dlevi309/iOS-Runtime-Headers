/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface CFXEffectMessagesStickerUtilities : NSObject
+(id)animatedPreviewsDirectory;
+(id)animatedPreviewFileNameForOverlayID:(id)arg1 ;
+(CGSize)JFX_recommendedStickerPreviewSizeInPixelsForStickerSize:(long long)arg1 ;
+(void)cacheAnimatedStickerPreviewsForOverlayTypeId:(id)arg1 atStickerSize:(long long)arg2 previewDuration:(double)arg3 previewFrameRate:(unsigned long long)arg4 previewCompletedBlock:(/*^block*/id)arg5 ;
+(id)overlayIDFromAnimatedPreviewFileName:(id)arg1 ;
+(long long)numberOfStickersForEffectTypeId:(id)arg1 ;
+(id)stickerPropertiesForIndex:(long long)arg1 forEffectTypeId:(id)arg2 ;
@end

