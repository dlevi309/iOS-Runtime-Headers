/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JFXExportController.h>

@class PVVideoCompositing;

@interface JFXReaderWriterExportController : JFXExportController {

	float _progress;
	PVVideoCompositing* _customCompositor;

}

@property (assign,nonatomic) float progress;                                     //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) PVVideoCompositing * customCompositor;              //@synthesize customCompositor=_customCompositor - In the implementation block
-(float)progress;
-(void)setProgress:(float)arg1 ;
-(void)cancelExportWithStatus:(long long)arg1 ;
-(void)continueExportAfterDelay;
-(CGSize)applyCompositionAspectRatioToAVPresetSize:(CGSize)arg1 compositionSize:(CGSize)arg2 ;
-(id)JFX_videoCompressionSettingsFromAssistant:(id)arg1 ;
-(long long)mapAssetReaderStatusToExportStatus:(long long)arg1 ;
-(long long)mapAssetWriterStatusToExportStatus:(long long)arg1 ;
-(PVVideoCompositing *)customCompositor;
-(void)updateSessionProgress:(id)arg1 ;
-(void)updateStatusAndErrorFromReader:(id)arg1 andWriter:(id)arg2 ;
-(id)fileTypeFromExtension;
-(id)videoCompressionSettings:(CGSize)arg1 ;
-(id)videoDecompressionSettingsForVideoCompressionSettings:(id)arg1 ;
-(void)setCustomCompositor:(PVVideoCompositing *)arg1 ;
-(id)audioCompressionSettings;
-(void)transferSampleBuffers:(id)arg1 assetReader:(id)arg2 assetWriterInput:(id)arg3 assetWriter:(id)arg4 timeRangeToExport:(SCD_Struct_JF4)arg5 queue:(id)arg6 pass:(long long)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)JFX_continueExportForNextPreset;
@end

