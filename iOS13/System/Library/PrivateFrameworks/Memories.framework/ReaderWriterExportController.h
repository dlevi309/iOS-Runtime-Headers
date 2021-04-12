/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/ExportController.h>

@class NSError, PVVideoCompositing;

@interface ReaderWriterExportController : ExportController {

	float m_progress;
	int m_numberOfPasses;
	long long m_status;
	NSError* m_error;
	BOOL m_cancel;
	BOOL m_firstPassDone;
	PVVideoCompositing* m_customCompositor;

}
+(id)stringForStatus:(long long)arg1 ;
-(float)progress;
-(void)cancelExport;
-(void)continueExportAfterDelay;
-(void)noteSessionProgressed:(float)arg1 ;
-(long long)mapAssetReaderStatusToExportStatus:(long long)arg1 ;
-(long long)mapAssetWriterStatusToExportStatus:(long long)arg1 ;
-(void)updateStatusAndErrorFromReader:(id)arg1 andWriter:(id)arg2 ;
-(id)fileTypeFromExtension;
-(id)videoDecompressionSettingsForVideoCompressionSettings:(id)arg1 ;
-(id)audioCompressionSettings;
-(void)transferSampleBuffers:(id)arg1 assetReader:(id)arg2 assetWriterInput:(id)arg3 assetWriter:(id)arg4 timeRangeToExport:(SCD_Struct_PM6)arg5 queue:(id)arg6 pass:(long long)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)continueExportForNextPreset;
-(void)_setupMovieController;
-(id)_compositionForExport;
-(void)releaseMovieController;
-(void)updateThemeImages;
-(id)videoCompressionSettings;
@end

