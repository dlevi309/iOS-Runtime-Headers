/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCapturePhotoSettings.h>

@class AVCapturePhotoBracketSettingsInternal, NSArray;

@interface AVCapturePhotoBracketSettings : AVCapturePhotoSettings {

	AVCapturePhotoBracketSettingsInternal* _bracketSettingsInternal;

}

@property (nonatomic,readonly) NSArray * bracketedSettings; 
@property (assign,getter=isLensStabilizationEnabled,nonatomic) BOOL lensStabilizationEnabled; 
+(void)initialize;
+(id)photoBracketSettingsWithRawPixelFormatType:(unsigned)arg1 processedFormat:(id)arg2 bracketedSettings:(id)arg3 ;
+(id)photoBracketSettingsWithRawPixelFormatType:(unsigned)arg1 rawFileType:(id)arg2 processedFormat:(id)arg3 processedFileType:(id)arg4 bracketedSettings:(id)arg5 ;
-(void)setFlashMode:(long long)arg1 ;
-(void)setHDRMode:(long long)arg1 ;
-(id)debugDescription;
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
-(void)setLensStabilizationEnabled:(BOOL)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)bracketedSettings;
-(BOOL)isLensStabilizationEnabled;
-(void)dealloc;
@end

