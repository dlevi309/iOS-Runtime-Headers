/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JTExportController.h>

@class NSError, PVVideoCompositing;

@interface JTReaderWriterExportController : JTExportController {

	BOOL _firstPassDone;
	float _progress;
	int _numberOfPasses;
	NSError* _error;
	PVVideoCompositing* _customCompositor;

}

@property (assign,nonatomic) float progress;                                     //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) int numberOfPasses;                                 //@synthesize numberOfPasses=_numberOfPasses - In the implementation block
@property (assign,nonatomic) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL firstPassDone;                                 //@synthesize firstPassDone=_firstPassDone - In the implementation block
@property (nonatomic,retain) PVVideoCompositing * customCompositor;              //@synthesize customCompositor=_customCompositor - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(float)progress;
-(void)setProgress:(float)arg1 ;
-(void)cancelExport;
-(void)continueExportAfterDelay;
-(void)noteSessionProgressed:(float)arg1 ;
-(CGSize)applyCompositionAspectRatioToAVPresetSize:(CGSize)arg1 compositionSize:(CGSize)arg2 ;
-(long long)mapAssetReaderStatusToExportStatus:(long long)arg1 ;
-(long long)mapAssetWriterStatusToExportStatus:(long long)arg1 ;
-(void)updateSessionProgress;
-(void)updateStatusAndErrorFromReader:(id)arg1 andWriter:(id)arg2 ;
-(id)fileTypeFromExtension;
-(id)videoCompressionSettings:(CGSize)arg1 ;
-(id)videoDecompressionSettingsForVideoCompressionSettings:(id)arg1 ;
-(void)setCustomCompositor:(PVVideoCompositing *)arg1 ;
-(PVVideoCompositing *)customCompositor;
-(id)audioCompressionSettings;
-(void)setNumberOfPasses:(int)arg1 ;
-(void)setFirstPassDone:(BOOL)arg1 ;
-(void)transferSampleBuffers:(id)arg1 assetReader:(id)arg2 assetWriterInput:(id)arg3 assetWriter:(id)arg4 timeRangeToExport:(SCD_Struct_JT16)arg5 queue:(id)arg6 pass:(long long)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)continueExportForNextPreset;
-(int)numberOfPasses;
-(BOOL)firstPassDone;
-(void)testAspectRatio;
@end

