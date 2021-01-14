/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FigCaptureSourceConfiguration, FigCaptureSinkConfiguration, FigCaptureIrisSinkConfiguration, FigCaptureStillImageSinkConfiguration, FigCaptureVideoDataSinkConfiguration, FigCaptureVideoPreviewSinkConfiguration, FigCaptureDepthDataSinkConfiguration, FigCaptureVideoThumbnailSinkConfiguration, FigCapturePointCloudDataSinkConfiguration, FigCaptureCameraCalibrationDataSinkConfiguration;

@interface FigCaptureConnectionConfiguration : NSObject <FigXPCCoding, NSCopying> {

	NSString* _connectionID;
	unsigned _mediaType;
	int _underlyingDeviceType;
	FigCaptureSourceConfiguration* _sourceConfiguration;
	FigCaptureSinkConfiguration* _sinkConfiguration;
	BOOL _enabled;

}

@property (nonatomic,copy) NSString * connectionID;                                                                          //@synthesize connectionID=_connectionID - In the implementation block
@property (assign,nonatomic) unsigned mediaType;                                                                             //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) int underlyingDeviceType;                                                                       //@synthesize underlyingDeviceType=_underlyingDeviceType - In the implementation block
@property (nonatomic,retain) FigCaptureSourceConfiguration * sourceConfiguration;                                            //@synthesize sourceConfiguration=_sourceConfiguration - In the implementation block
@property (nonatomic,retain) FigCaptureSinkConfiguration * sinkConfiguration;                                                //@synthesize sinkConfiguration=_sinkConfiguration - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                                                   //@synthesize enabled=_enabled - In the implementation block
@property (readonly) FigCaptureIrisSinkConfiguration * irisSinkConfiguration; 
@property (readonly) FigCaptureStillImageSinkConfiguration * stillImageSinkConfiguration; 
@property (readonly) FigCaptureVideoDataSinkConfiguration * videoDataSinkConfiguration; 
@property (readonly) FigCaptureVideoPreviewSinkConfiguration * videoPreviewSinkConfiguration; 
@property (readonly) FigCaptureDepthDataSinkConfiguration * depthDataSinkConfiguration; 
@property (readonly) FigCaptureVideoThumbnailSinkConfiguration * thumbnailSinkConfiguration; 
@property (readonly) FigCapturePointCloudDataSinkConfiguration * pointCloudDataSinkConfiguration; 
@property (readonly) FigCaptureCameraCalibrationDataSinkConfiguration * cameraCalibrationDataSinkConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)enabled;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setMediaType:(unsigned)arg1 ;
-(FigCaptureVideoDataSinkConfiguration *)videoDataSinkConfiguration;
-(unsigned)mediaType;
-(id)init;
-(FigCaptureStillImageSinkConfiguration *)stillImageSinkConfiguration;
-(void)setEnabled:(BOOL)arg1 ;
-(FigCaptureSourceConfiguration *)sourceConfiguration;
-(void)setSourceConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(FigCaptureIrisSinkConfiguration *)irisSinkConfiguration;
-(int)underlyingDeviceType;
-(NSString *)connectionID;
-(void)setConnectionID:(NSString *)arg1 ;
-(FigCapturePointCloudDataSinkConfiguration *)pointCloudDataSinkConfiguration;
-(void)setUnderlyingDeviceType:(int)arg1 ;
-(void)setSinkConfiguration:(FigCaptureSinkConfiguration *)arg1 ;
-(BOOL)sourcesFromUnderlyingStream;
-(FigCaptureVideoPreviewSinkConfiguration *)videoPreviewSinkConfiguration;
-(FigCaptureVideoThumbnailSinkConfiguration *)thumbnailSinkConfiguration;
-(FigCaptureSinkConfiguration *)sinkConfiguration;
-(FigCaptureCameraCalibrationDataSinkConfiguration *)cameraCalibrationDataSinkConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(FigCaptureDepthDataSinkConfiguration *)depthDataSinkConfiguration;
@end

