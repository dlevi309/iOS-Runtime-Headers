/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCapturePhotoSettings.h>

@class AVCapturePhotoBracketSettingsInternal, NSArray;

@interface AVCapturePhotoBracketSettings : AVCapturePhotoSettings {

	AVCapturePhotoBracketSettingsInternal* _bracketSettingsInternal;

}

@property (nonatomic,readonly) NSArray * bracketedSettings; 
@property (assign,getter=isLensStabilizationEnabled,nonatomic) BOOL lensStabilizationEnabled; 
+(id)photoBracketSettingsWithRawPixelFormatType:(unsigned)arg1 processedFormat:(id)arg2 bracketedSettings:(id)arg3 ;
+(id)photoBracketSettingsWithRawPixelFormatType:(unsigned)arg1 rawFileType:(id)arg2 processedFormat:(id)arg3 processedFileType:(id)arg4 bracketedSettings:(id)arg5 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)bracketedSettings;
-(void)setFlashMode:(long long)arg1 ;
-(void)setHDRMode:(long long)arg1 ;
-(void)setAutoVirtualDeviceFusionEnabled:(BOOL)arg1 ;
-(void)setAutoRedEyeReductionEnabled:(BOOL)arg1 ;
-(void)setLivePhotoMovieFileURL:(id)arg1 ;
-(void)setLivePhotoMovieMetadata:(id)arg1 ;
-(void)setEV0PhotoDeliveryEnabled:(BOOL)arg1 ;
-(void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1 ;
-(void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1 ;
-(void)setAutoStillImageStabilizationEnabled:(BOOL)arg1 ;
-(void)setAutoDualCameraFusionEnabled:(BOOL)arg1 ;
-(id)_initWithFormat:(id)arg1 processedFileType:(id)arg2 rawPixelFormatType:(unsigned)arg3 rawFileType:(id)arg4 bracketedSettings:(id)arg5 uniqueID:(long long)arg6 exceptionReason:(id*)arg7 ;
-(BOOL)isLensStabilizationEnabled;
-(void)setLensStabilizationEnabled:(BOOL)arg1 ;
@end

